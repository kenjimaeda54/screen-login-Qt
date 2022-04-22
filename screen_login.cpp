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

