#include "dialog.h"
#include <QApplication>
//#include <DApplication>
//DWIDGET_USE_NAMESPACE
int main(int argc, char *argv[])
{
//    DApplication::loadDXcbPlugin();
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}
