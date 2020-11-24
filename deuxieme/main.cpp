#include "deuxiemetest.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    deuxiemeTest w;
    w.show();
    return a.exec();
}
