#include "mainwindow.h"
#include "youtubeleftpane.h"
#include "youtubetopbar.h"
#include "youtubebanner.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
