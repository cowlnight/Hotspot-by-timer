#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Hotspot.h"
#include <QMouseEvent>
#include <QDebug>
#include <QThread>
#include <QTimer>
#include "MessageWindow.h"

class Hotspot : public QMainWindow
{
	Q_OBJECT

public:
	Hotspot(QWidget *parent = Q_NULLPTR);
	MessageWindow *m_messagewindow;

	int TimerID;
	double x = 0, y = 0;
	int left_up_x = 0, left_up_y = 0, right_up = 0, left_down = 0;
	bool pressButton = false;
protected:
	void mouseMoveEvent(QMouseEvent * event);

private slots:
	void RunFunction();
private:
	Ui::HotspotClass ui;
};
