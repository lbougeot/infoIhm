#include "lepoids.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LePoids w;
    w.show();
    return a.exec();
}
