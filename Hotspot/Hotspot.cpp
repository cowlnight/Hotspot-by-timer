#include "Hotspot.h"

using namespace std;

Hotspot::Hotspot(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.lineEdit_x->setText(tr("200"));
	ui.lineEdit_y->setText(tr("200"));
	ui.lineEdit_width->setText(tr("100"));
	ui.lineEdit_height->setText(tr("100"));
	//setMouseTracking(true);
	ui.centralWidget->setMouseTracking(true);

	connect(ui.pushButton, SIGNAL(clicked(bool)), this, SLOT(RunFunction()));

}    


void Hotspot::RunFunction() {
	
	left_up_x = atoi(ui.lineEdit_x->text().toStdString().c_str());
	left_up_y = atoi(ui.lineEdit_y->text().toStdString().c_str());
	right_up = left_up_x+atoi(ui.lineEdit_width->text().toStdString().c_str());
	left_down = left_up_y+atoi(ui.lineEdit_height->text().toStdString().c_str());
	
	m_messagewindow = new MessageWindow;
	pressButton = true;
}


void Hotspot::mouseMoveEvent(QMouseEvent * event)
{
	double x = event->pos().x();
	double y = event->pos().y();
	qDebug() << "x: " << x << " y:" << y <<  endl;

	if (pressButton) {
		if ((x > left_up_x && x < right_up) && (y > left_up_y && y < left_down))
			m_messagewindow->show();
		else
			m_messagewindow->hide();
	}
}


