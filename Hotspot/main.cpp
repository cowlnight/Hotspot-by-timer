#include "Hotspot.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Hotspot w;
	w.show();
	return a.exec();
}
