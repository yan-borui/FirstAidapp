#include "AEDLocator.h"

// 在initUI中添加地址输入框和按钮
void AEDLocator::initUI() {
    QVBoxLayout *layout = new QVBoxLayout(this);

    // 地址输入和按钮
    addressInput = new QLineEdit(this);
    addressInput->setPlaceholderText("输入地址");
    geocodeButton = new QPushButton("获取坐标", this);

    // 经纬度输入
    lonInput = new QLineEdit(this); // 新增
    lonInput->setPlaceholderText("经度");
    latInput = new QLineEdit(this); // 新增
    latInput->setPlaceholderText("纬度");

    // 查找按钮和结果标签
    findButton = new QPushButton("查找最近AED", this);
    resultLabel = new QLabel("结果", this); // 新增

    // 添加到布局
    layout->addWidget(addressInput);
    layout->addWidget(geocodeButton);
    layout->addWidget(lonInput);    // 新增
    layout->addWidget(latInput);    // 新增
    layout->addWidget(findButton);
    layout->addWidget(resultLabel); // 新增

    // 连接信号槽
    connect(geocodeButton, &QPushButton::clicked, this, &AEDLocator::onGeocodeButtonClicked);
    connect(findButton, &QPushButton::clicked, this, &AEDLocator::onFindButtonClicked); // 确保连接
}

// 加载AED数据
void AEDLocator::loadAEDData() {
    QFile file("北京大学楼宇坐标.txt");
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning() << "无法打开文件";
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        QStringList parts = line.split('|');
        if (parts.size() == 3) {
            aedList.append({parts[0], parts[2].toDouble(), parts[1].toDouble()});
        }
    }
    file.close();
}

// 构造函数中加载数据
AEDLocator::AEDLocator(QWidget *parent) : QWidget(parent) {
    loadAEDData();
    initUI();
    networkManager = new QNetworkAccessManager(this);
}

// 调用Python脚本
void AEDLocator::onGeocodeButtonClicked() {
    QString address = addressInput->text();
    QString apiKey = qEnvironmentVariable("GAODE_API_KEY");
    if (apiKey.isEmpty()) {
        resultLabel->setText("�ߵ�API��Կδ����");
        return;
    }
    QString url = QString("https://restapi.amap.com/v3/geocode/geo?key=%1&address=%2").arg(apiKey, address);
    
    QUrl qurl(url);
    QNetworkRequest request(qurl);

    QNetworkReply *reply = networkManager->get(request);

    // 连接信号槽以处理响应
    connect(reply, &QNetworkReply::finished, [this, reply]() {
        QByteArray response = reply->readAll();
        reply->deleteLater(); // 清理回复

        // 解析 JSON 数据
        QJsonDocument jsonDoc = QJsonDocument::fromJson(response);
        QJsonObject jsonObj = jsonDoc.object();

        if (jsonObj["status"].toString() == "1" && jsonObj.contains("geocodes")) {
            QJsonArray geocodes = jsonObj["geocodes"].toArray();
            if (!geocodes.isEmpty()) {
                QStringList location = geocodes[0].toObject()["location"].toString().split(",");
                lonInput->setText(location[0]); // 设置经度
                latInput->setText(location[1]); // 设置纬度
                resultLabel->setText("获取坐标成功");
                return;
            }
        }

        resultLabel->setText("获取坐标失败，输出: " + QString(response));
    });
}

// 修改查找函数使用文件数据
AED AEDLocator::findNearestAED(double userLat, double userLon) {
    AED nearest = aedList.first();
    double minDist = qMax(qAbs(userLat - nearest.latitude), qAbs(userLon - nearest.longitude));

    for (const AED &aed : aedList) {
        double dist = qMax(qAbs(userLat - aed.latitude), qAbs(userLon - aed.longitude));
        if (dist < minDist) {
            minDist = dist;
            nearest = aed;
        }
    }
    return nearest;
}

void AEDLocator::onFindButtonClicked() {
    bool latOk, lonOk;
    double userLatitude = latInput->text().toDouble(&latOk);
    double userLongitude = lonInput->text().toDouble(&lonOk);

    if (latOk && lonOk) {
        AED nearestAED = findNearestAED(userLatitude, userLongitude);
        resultLabel->setText(QString("最近的AED ID: %1") .arg(nearestAED.id));
    } else {
        resultLabel->setText("请输入有效的经纬度！");
    }

}
