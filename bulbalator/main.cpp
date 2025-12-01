#include "bulbalator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bulbalator w;
    w.show();
    return a.exec();
}
