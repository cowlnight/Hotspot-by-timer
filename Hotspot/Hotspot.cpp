#include "Hotspot.h"

using namespace std;

Hotspot::Hotspot(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	timer = new QTimer(this);
	ui.lineEdit_x->setText(tr("100"));
	ui.lineEdit_y->setText(tr("100"));
	ui.lineEdit_width->setText(tr("100"));
	ui.lineEdit_height->setText(tr("100"));

	connect(ui.pushButton, SIGNAL(clicked(bool)), this, SLOT(RunFunction()));

}    


void Hotspot::RunFunction() {
	
	left_up_x = atoi(ui.lineEdit_x->text().toStdString().c_str());
	left_up_y = atoi(ui.lineEdit_y->text().toStdString().c_str());
	right_up = left_up_x+atoi(ui.lineEdit_width->text().toStdString().c_str());
	left_down = left_up_y+atoi(ui.lineEdit_height->text().toStdString().c_str());
	
	TimerID = startTimer(100);
	m_mainwindow = new MessageWindow;
	qDebug() << "timeID:" << TimerID << endl;
}

void Hotspot::StopTimer() {
	killTimer(TimerID);
	qDebug() << "stop!"<< endl;

}
void Hotspot::timerEvent(QTimerEvent * event) {
	grabMouse();
	QPoint pt = QCursor::pos();//获取鼠标的绝对位置
	QString str;
	str = QString("%1 , %2").arg(pt.x()).arg(pt.y());
	x = pt.x();
	y = pt.y();
	qDebug() << left_up_x << " " << right_up << " " << left_up_y << " " << left_down << endl;
	if ((x > left_up_x && x < right_up) && (y > left_up_y && y < left_down))
		m_mainwindow->show();
	else
		m_mainwindow->hide();

	qDebug() << x << "," << y << endl;

}

