#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QRegExpValidator>

#define PORT 1234


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:

private slots:
    void on_pbLogin_clicked();
    void on_pbSend_clicked();
    void onReadyRead();
    void onConnected();
    void onDisconnected();
private:
    Ui::MainWindow *ui;
    QTcpSocket* socket;
};

#endif // MAINWINDOW_H
