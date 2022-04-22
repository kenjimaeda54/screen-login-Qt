#ifndef SCREEN_LOGIN_H
#define SCREEN_LOGIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Screen_Login; }
QT_END_NAMESPACE

class Screen_Login : public QMainWindow
{
    Q_OBJECT

public:
    Screen_Login(QWidget *parent = nullptr);
    ~Screen_Login();

private:
    Ui::Screen_Login *ui;
};
#endif // SCREEN_LOGIN_H
