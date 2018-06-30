#include "screenshot.h"
#include <iostream>
#include <qdebug.h>
using namespace std;



screenShot::screenShot(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(slotPrintScreen()));
}


screenShot::~screenShot()
{

}

int screenShot::slotPrintScreen() {

    QString path = QString("printscreen%1.png").arg( QDateTime::currentDateTime().toString("yyyyMMddhhmmsszzz") );
    QPixmap pixmap = QPixmap::grabWindow(QApplication::desktop()->winId(),0,0,1920,360);

    if( !pixmap.isNull() )
    {
        if( pixmap.save( path ) )
        {
            qDebug() << "screen saved " << path.toLocal8Bit().data();
        }
        else
        {
            qDebug() << "faile to save printScreen to " << path.toLocal8Bit().data();
        }
    }
    else
    {
        qDebug() << "print screen failed!";
    }

	return 0;

}
