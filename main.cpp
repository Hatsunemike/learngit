#include "hellowidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    helloWidget w;
    w.show();
    return a.exec();
}
