#include "screen_login.h"
#include "ui_screen_login.h"

Screen_Login::Screen_Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Screen_Login)
{
    ui->setupUi(this);
}

Screen_Login::~Screen_Login()
{
    delete ui;
}


void Screen_Login::on_btn_login_clicked()
{
    if(ui->field_password->text() == "1234" && ui->field_email->text() == "kenji@gmail"  ){
         ui->statusbar->showMessage("Login with sucess");
    }else {

        ui->statusbar->showMessage("Password and Email incorrects");
        ui->field_email->clear();
        ui->field_password->clear();

    }

}

