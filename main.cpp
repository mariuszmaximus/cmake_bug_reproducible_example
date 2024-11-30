#include "widgetcmakeexample.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WidgetCmakeExample w;
    w.show();
    return a.exec();
}
