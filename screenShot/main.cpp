#include "screenshot.h"
#include <QtWidgets/QApplication>
#include <QApplication>
#include <QPixmap>
#include <QDesktopWidget>
#include <QDateTime>
#include <QFileInfo>
#include <iostream>
using namespace std;
 
 
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	screenShot w;
	w.show();
	return a.exec();
}