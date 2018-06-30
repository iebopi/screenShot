#ifndef SCREENSHOT_H
#define SCREENSHOT_H

#include <QtWidgets/QMainWindow>
#include "ui_screenshot.h"
#include <QApplication>
#include <QPixmap>
#include <QDesktopWidget>
#include <QDateTime>
#include <QFileInfo>

class screenShot : public QMainWindow
{
	Q_OBJECT

public:
	screenShot(QWidget *parent = 0);
	~screenShot();

private:
	Ui::screenShotClass ui;
private slots:
	int slotPrintScreen();

};

#endif // SCREENSHOT_H
