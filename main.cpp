#include "toolmain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ToolMain w;
    w.show();

    return a.exec();
}
