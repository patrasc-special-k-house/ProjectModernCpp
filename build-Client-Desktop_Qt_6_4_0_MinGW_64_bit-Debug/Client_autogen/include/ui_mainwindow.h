/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_4;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_SignIn;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_SignUp;
    QWidget *page;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *usernameField;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *passwordField;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_LoginPage_Back;
    QWidget *page_5;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *UsernameRegisterField;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *PasswordRegisterField;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *ConfirmPasswordField;
    QPushButton *pushButton_Register;
    QPushButton *pushButton_RegisterPage_Back;
    QWidget *page_2;
    QLabel *label_2;
    QPushButton *pushButton_goto_page_3;
    QWidget *page_3;
    QLabel *label;
    QPushButton *pushButton_goto_page_1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(753, 366);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        groupBox_2 = new QGroupBox(page_4);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(210, 60, 311, 191));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_SignIn = new QPushButton(groupBox_2);
        pushButton_SignIn->setObjectName("pushButton_SignIn");

        horizontalLayout_3->addWidget(pushButton_SignIn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer);

        pushButton_SignUp = new QPushButton(groupBox_2);
        pushButton_SignUp->setObjectName("pushButton_SignUp");

        horizontalLayout_3->addWidget(pushButton_SignUp);

        stackedWidget->addWidget(page_4);
        page = new QWidget();
        page->setObjectName("page");
        groupBox = new QGroupBox(page);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(230, 60, 271, 181));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        usernameField = new QLineEdit(groupBox);
        usernameField->setObjectName("usernameField");

        horizontalLayout->addWidget(usernameField);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        passwordField = new QLineEdit(groupBox);
        passwordField->setObjectName("passwordField");

        horizontalLayout_2->addWidget(passwordField);


        verticalLayout_2->addLayout(horizontalLayout_2);

        pushButton_Login = new QPushButton(groupBox);
        pushButton_Login->setObjectName("pushButton_Login");

        verticalLayout_2->addWidget(pushButton_Login);

        pushButton_LoginPage_Back = new QPushButton(page);
        pushButton_LoginPage_Back->setObjectName("pushButton_LoginPage_Back");
        pushButton_LoginPage_Back->setGeometry(QRect(20, 20, 75, 24));
        stackedWidget->addWidget(page);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        groupBox_3 = new QGroupBox(page_5);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(200, 40, 331, 241));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        UsernameRegisterField = new QLineEdit(groupBox_3);
        UsernameRegisterField->setObjectName("UsernameRegisterField");

        horizontalLayout_4->addWidget(UsernameRegisterField);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        PasswordRegisterField = new QLineEdit(groupBox_3);
        PasswordRegisterField->setObjectName("PasswordRegisterField");

        horizontalLayout_5->addWidget(PasswordRegisterField);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName("label_7");

        horizontalLayout_6->addWidget(label_7);

        ConfirmPasswordField = new QLineEdit(groupBox_3);
        ConfirmPasswordField->setObjectName("ConfirmPasswordField");

        horizontalLayout_6->addWidget(ConfirmPasswordField);


        verticalLayout_3->addLayout(horizontalLayout_6);

        pushButton_Register = new QPushButton(groupBox_3);
        pushButton_Register->setObjectName("pushButton_Register");

        verticalLayout_3->addWidget(pushButton_Register);

        pushButton_RegisterPage_Back = new QPushButton(page_5);
        pushButton_RegisterPage_Back->setObjectName("pushButton_RegisterPage_Back");
        pushButton_RegisterPage_Back->setGeometry(QRect(30, 20, 75, 24));
        stackedWidget->addWidget(page_5);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 20, 49, 16));
        pushButton_goto_page_3 = new QPushButton(page_2);
        pushButton_goto_page_3->setObjectName("pushButton_goto_page_3");
        pushButton_goto_page_3->setGeometry(QRect(30, 20, 75, 24));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label = new QLabel(page_3);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 20, 49, 16));
        pushButton_goto_page_1 = new QPushButton(page_3);
        pushButton_goto_page_1->setObjectName("pushButton_goto_page_1");
        pushButton_goto_page_1->setGeometry(QRect(30, 10, 75, 24));
        stackedWidget->addWidget(page_3);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 753, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Welcome to Login page!", nullptr));
        pushButton_SignIn->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        pushButton_SignUp->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "LogIn", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Username: ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Password:  ", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_LoginPage_Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        groupBox_3->setTitle(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter a Username: ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Enter a Password:  ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Confirm Password:", nullptr));
        pushButton_Register->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        pushButton_RegisterPage_Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "page 2", nullptr));
        pushButton_goto_page_3->setText(QCoreApplication::translate("MainWindow", "Go to page 3", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "page 3", nullptr));
        pushButton_goto_page_1->setText(QCoreApplication::translate("MainWindow", "Go to page 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
