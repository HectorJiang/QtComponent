#include "hectorcomponent.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HectorComponent w;
    QFile file(":/style/resource/style/style.qss");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());
    file.close();
    w.show();
    return a.exec();
}
