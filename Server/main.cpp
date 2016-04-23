#include <QCoreApplication>
#include <server.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qint16 port = 1234;
    Server* server = new Server;
    if (!server->listen(QHostAddress::Any, port)) {
        qFatal("Could not listen on port ", port, ".");
    }
    qDebug() << "Success.";

    return a.exec();
}
