#include <QCoreApplication>
#include "httprequest.h"
#include <QDebug>
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    HttpRequest http;
    http.setRequestHeader("User-Agent","Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/76.0.3809.100 Safari/537.36");
    http.send(GET,"https://www.baidu.com");
   // qDebug() << http.getHeaders() << endl;
	std::cout << http.getHeaders().toStdString().c_str() << std::endl;
    return a.exec();
}
