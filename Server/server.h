#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QString>
#include <QMap>

class Server : QTcpServer {
    Q_OBJECT
public:
    explicit Server(QObject* parent = 0);
public slots:
    void onReadyRead();
    void onDisconnected();
    void sendUserList();
protected:
    void incomingConnection(qintptr handle);
private:
    QSet<QTcpServer*> clients;
    QMap<QTcpServer*, QString> users;
};

#endif // SERVER_H
