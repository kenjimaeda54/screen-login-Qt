#include "screen_login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Screen_Login w;
    w.show();
    return a.exec();
}
