#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRegExp>
#include <QMessageBox>
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->mainFrame);
    connect(ui->leServer, SIGNAL(returnPressed()), this, SLOT(on_pbLogin_clicked()));
    connect(ui->leName, SIGNAL(returnPressed()), this, SLOT(on_pbLogin_clicked()));
    connect(ui->leMessage, SIGNAL(returnPressed()), this, SLOT(on_pbSend_clicked()));

    /* Имя пользователя должно содержать только латинские буквы,
     * цифры и символы подчеркивания и начинаться только с букв */
    QRegExp regex("^[a-zA-Z]\\w+");
    ui->leName->setValidator(new QRegExpValidator(regex, this));

    socket = new QTcpSocket(this);
    connect(socket, SIGNAL(connected()), this, SLOT(onConnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(onDisconnected()));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pbLogin_clicked() {
    /* Проверка ввода адреса */
    QString serverName = ui->leServer->text().trimmed();
    if (serverName.isEmpty()) {
        QMessageBox::information(NULL, "Warning",
                                 "Enter the server name or address.",
                                 QMessageBox::Ok);
        return;
    }

    /* Проверка ввода имени пользователя */
    QString userName = ui->leName->text().trimmed();
    if (userName.isEmpty()) {
        QMessageBox::information(NULL, "Warning",
                                 "Enter your nickname.",
                                 QMessageBox::Ok);
        return;
    }

    socket->connectToHost(serverName, PORT);
}

void MainWindow::on_pbSend_clicked() {
    QString message = ui->leMessage->text().trimmed();
    if (!message.isEmpty()) {
        socket->write(QString("/say:" + message + "\n").toUtf8());
        ui->leMessage->clear();
        ui->leMessage->setFocus();
    }
}

void MainWindow::onReadyRead() {
    QRegExp usersRex("^/users:(.*)$");
    QRegExp systemRex("^/system:(.*)$");
    QRegExp messageRex("^(.*):(.*)$");
    while (socket->canReadLine()) {
        QString line = QString::fromUtf8(socket->readLine()).trimmed();
        // Если сообщение - список пользователей
        if (usersRex.indexIn(line) != -1) {
            QStringList users = usersRex.cap(1).split(",");
            ui->lwUsers->clear();
            foreach (QString user, users) {
                new QListWidgetItem(QIcon(":/user.png"), user, ui->lwUsers);
            }
        }
        // Системное сообщение
        else if (systemRex.indexIn(line) != -1) {
            QString msg = systemRex.cap(1);
            ui->teChat->append("<p color=\"gray\">" + msg + "</p>\n");
        }
        // Если сообщение - от пользователя
        else if (messageRex.indexIn(line) != -1) {
            QString user = messageRex.cap(1);
            QString message = messageRex.cap(2);
            ui->teChat->append("<p><b>" + user + "</b>: " + message + "</p>\n");
        }
    }
}

void MainWindow::onConnected() {
    ui->teChat->clear();

    ui->stackedWidget->setCurrentWidget(ui->chatPage);
    socket->write(QString("/login:" + ui->leName->text() + "\n").toUtf8());
    ui->leMessage->setFocus();
}

void MainWindow::onDisconnected() {
    QMessageBox::warning(NULL, "Warning",
                         "You was disconnected from the server", QMessageBox::Ok);
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
}
