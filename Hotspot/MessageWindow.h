#pragma once

#include <QWidget>
#include "ui_MessageWindow.h"

class MessageWindow : public QWidget
{
	Q_OBJECT

public:
	MessageWindow(QWidget *parent = Q_NULLPTR);
	~MessageWindow();

private:
	Ui::MessageWindow ui;
};
