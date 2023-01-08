#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QErrorMessage>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Triviador");
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_goto_page_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_goto_page_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->usernameField->text();
    QString password = ui->passwordField->text();

    if (username == "ok" && password == "admin")
    {
        QMessageBox::information(this, "Success", "You have successfully logged in");
        ui->stackedWidget->setCurrentIndex(3);
    }
    else
    {
//        QLabel *errorLabel = new QLabel;
//        errorLabel->setText("Incorrect username or password");
//        errorLabel->setVisible(true);
        QMessageBox::information(this, "Login Error", "Incorrect username or password");
        ui->passwordField->clear();
    }
}


void MainWindow::on_pushButton_SignIn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_Register_clicked()
{
    QString username = ui->UsernameRegisterField->text();
    QString password = ui->PasswordRegisterField->text();
    QString confirmPassword = ui->ConfirmPasswordField->text();

    if (password == confirmPassword)
    {
        QMessageBox::information(this, "Success", "You have successfully signed up!");
        ui->stackedWidget->setCurrentIndex(0);
    }
    else
    {
        QMessageBox::warning(this, "Error", "The passwords do not match");
    }
}


void MainWindow::on_pushButton_SignUp_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_LoginPage_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_RegisterPage_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

