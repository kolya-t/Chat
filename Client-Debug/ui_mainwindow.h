/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *upperLabel;
    QStackedWidget *stackedWidget;
    QWidget *chatPage;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *teChat;
    QListWidget *lwUsers;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leMessage;
    QPushButton *pbSend;
    QWidget *loginPage;
    QGridLayout *gridLayout;
    QFrame *loginFrame;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *serverLabel;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *leServer;
    QLineEdit *leName;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbLogin;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lowerLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(761, 666);
        MainWindow->setStyleSheet(QLatin1String("QFrame {\n"
"	font: normal 12px Helvetica, Arial, sans-serif;\n"
"}\n"
"#mainFrame {background: white;}\n"
"#upperLabel {\n"
"	font: normal 20px Helvetica, Arial, sans-serif;\n"
"	color: purple;\n"
"}\n"
"#lowerLabel {\n"
"	color: gray;\n"
"}\n"
"#loginFrame {\n"
"	padding: 9px 10px;\n"
"	color: black;\n"
"	background: white;\n"
"	border: 1px solid #d8d8d8;\n"
"	border-radius: 2px;\n"
"	padding: 0px 10px;\n"
"}\n"
"QPushButton {\n"
"	padding: 8px 16px;\n"
"	font: bold 12px Helvetica, Arial, sans-serif;\n"
"	color: #6e6e6e;\n"
"	background: #f3f3f3;\n"
"	background-color: qlineargradient( x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #F5F5F5, stop: 1 #F1F1F1);\n"
"	border: 1px solid #d8d8d8;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:hover {\n"
"	color: #333;\n"
"	border-color: #c6c6c6\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #000;\n"
"	border: 1px solid #c6c6c6;\n"
"	background-color: qlineargradient( x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                     "
                        "   stop: 0 #eee, stop: 1 #e0e0e0);\n"
"}\n"
"QTextEdit {\n"
"	padding: 7px 10px;\n"
"	color: black;\n"
"	background: white;\n"
"	border: 1px solid #d8d8d8;\n"
"	border-radius: 2px;\n"
"}\n"
"QListWidget {\n"
"	padding: 7px 10px;\n"
"	color: black;\n"
"	background: white;\n"
"	border: 1px solid #d8d8d8;\n"
"	border-radius: 2px;\n"
"}\n"
"QLineEdit {\n"
"	padding: 7px 10px;\n"
"	color: black;\n"
"	background: white;\n"
"	border: 1px solid #d8d8d8;\n"
"	border-radius: 2px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(mainFrame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        upperLabel = new QLabel(mainFrame);
        upperLabel->setObjectName(QStringLiteral("upperLabel"));
        upperLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(upperLabel);

        stackedWidget = new QStackedWidget(mainFrame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        chatPage = new QWidget();
        chatPage->setObjectName(QStringLiteral("chatPage"));
        verticalLayout_2 = new QVBoxLayout(chatPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        teChat = new QTextEdit(chatPage);
        teChat->setObjectName(QStringLiteral("teChat"));
        teChat->setMinimumSize(QSize(300, 0));
        teChat->setReadOnly(true);

        horizontalLayout_2->addWidget(teChat);

        lwUsers = new QListWidget(chatPage);
        lwUsers->setObjectName(QStringLiteral("lwUsers"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lwUsers->sizePolicy().hasHeightForWidth());
        lwUsers->setSizePolicy(sizePolicy);
        lwUsers->setMinimumSize(QSize(150, 200));
        lwUsers->setMaximumSize(QSize(150, 16777215));
        lwUsers->setSelectionMode(QAbstractItemView::NoSelection);
        lwUsers->setMovement(QListView::Static);
        lwUsers->setFlow(QListView::TopToBottom);
        lwUsers->setLayoutMode(QListView::SinglePass);
        lwUsers->setSpacing(0);
        lwUsers->setViewMode(QListView::ListMode);
        lwUsers->setSortingEnabled(false);

        horizontalLayout_2->addWidget(lwUsers);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        leMessage = new QLineEdit(chatPage);
        leMessage->setObjectName(QStringLiteral("leMessage"));
        leMessage->setClearButtonEnabled(true);

        horizontalLayout->addWidget(leMessage);

        pbSend = new QPushButton(chatPage);
        pbSend->setObjectName(QStringLiteral("pbSend"));

        horizontalLayout->addWidget(pbSend);


        verticalLayout_2->addLayout(horizontalLayout);

        stackedWidget->addWidget(chatPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QStringLiteral("loginPage"));
        gridLayout = new QGridLayout(loginPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        loginFrame = new QFrame(loginPage);
        loginFrame->setObjectName(QStringLiteral("loginFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginFrame->sizePolicy().hasHeightForWidth());
        loginFrame->setSizePolicy(sizePolicy1);
        loginFrame->setFrameShape(QFrame::StyledPanel);
        loginFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(loginFrame);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_2 = new QLabel(loginFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        serverLabel = new QLabel(loginFrame);
        serverLabel->setObjectName(QStringLiteral("serverLabel"));

        verticalLayout_5->addWidget(serverLabel);

        label = new QLabel(loginFrame);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        leServer = new QLineEdit(loginFrame);
        leServer->setObjectName(QStringLiteral("leServer"));
        leServer->setMinimumSize(QSize(170, 0));
        leServer->setMaxLength(15);

        verticalLayout_3->addWidget(leServer);

        leName = new QLineEdit(loginFrame);
        leName->setObjectName(QStringLiteral("leName"));
        leName->setMaxLength(12);

        verticalLayout_3->addWidget(leName);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pbLogin = new QPushButton(loginFrame);
        pbLogin->setObjectName(QStringLiteral("pbLogin"));

        horizontalLayout_4->addWidget(pbLogin);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_4);


        gridLayout->addWidget(loginFrame, 0, 0, 1, 1);

        stackedWidget->addWidget(loginPage);

        verticalLayout_4->addWidget(stackedWidget);

        lowerLabel = new QLabel(mainFrame);
        lowerLabel->setObjectName(QStringLiteral("lowerLabel"));
        lowerLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(lowerLabel);


        verticalLayout->addWidget(mainFrame);

        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(leName, leServer);
        QWidget::setTabOrder(leServer, teChat);
        QWidget::setTabOrder(teChat, lwUsers);
        QWidget::setTabOrder(lwUsers, leMessage);
        QWidget::setTabOrder(leMessage, pbLogin);
        QWidget::setTabOrder(pbLogin, pbSend);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        pbSend->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CakeChat Client", 0));
        upperLabel->setText(QApplication::translate("MainWindow", "CakeChat", 0));
        teChat->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica,Arial,sans-serif'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">kekekek</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">dfgdfgdfg</span></p></body></html>", 0));
        pbSend->setText(QApplication::translate("MainWindow", "Send", 0));
        label_2->setText(QApplication::translate("MainWindow", "Sign in", 0));
        serverLabel->setText(QApplication::translate("MainWindow", "Server:", 0));
        label->setText(QApplication::translate("MainWindow", "Name: ", 0));
        leServer->setText(QApplication::translate("MainWindow", "localhost", 0));
        pbLogin->setText(QApplication::translate("MainWindow", "Login", 0));
        lowerLabel->setText(QApplication::translate("MainWindow", "by kolya-t in 2016", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
