#include "sleepreminder.h"

#include <QDateTime>
#include <QTime>



SleepReminder::SleepReminder(QWidget *parent)
: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(&nowTimer, &QTimer::timeout, this, &SleepReminder::GetShowNowTime);
	connect(&warn, &QTimer::timeout, this, &SleepReminder::Beep);
	connect(ui.MaoDO, &QPushButton::clicked, this, &SleepReminder::Work);
	connect(&tray, &QSystemTrayIcon::activated, this, &SleepReminder::ShowWindow);

	nowTimer.start(520);

	isWork = false;
	isBeep = false;
	
	tray.setIcon(QIcon(":/SleepReminder/icon"));
	tray.show();
}

SleepReminder::~SleepReminder()
{
	nowTimer.stop();
}

void SleepReminder::changeEvent(QEvent *e)
{
	if ((e->type() == QEvent::WindowStateChange) && this->isMinimized())
	{
		this->setVisible(false);
	}
	QMainWindow::changeEvent(e);
}


void SleepReminder::ShowWindow(QSystemTrayIcon::ActivationReason reason)
{
	//if (QSystemTrayIcon::Trigger == reason)

	this->setWindowFlags(this->windowFlags() | Qt::WindowStaysOnTopHint);
	this->showNormal();

	this->setWindowFlags(this->windowFlags() &(~Qt::WindowStaysOnTopHint));
	this->showNormal();

	
	
}

void SleepReminder::Beep()
{
	if (false == isBeep)
	{
		isBeep = true;
		this->setWindowFlags(this->windowFlags() | Qt::WindowStaysOnTopHint);
		this->showNormal();
	}
	QApplication::beep();
}

void SleepReminder::GetShowNowTime()
{
	QTime now = QDateTime::currentDateTime().time();
	ui.MaoNowTime->setText(QString::number(now.hour()) + ':' +
							QString::number(now.minute()) + ':' +
							QString::number(now.second()));

	if (true == isWork)
	{
		if (ui.MaoHour->text().toInt() == now.hour() &&
			ui.MaoMinute->text().toInt() == now.minute())
			warn.start(520);
	}
}

void SleepReminder::Work()
{
	isWork = !isWork;
	
	if (true == isWork)
	{
		ui.MaoHour->setEnabled(false);
		ui.MaoMinute->setEnabled(false);
	}
	else
	{
		warn.stop();
		isBeep = false;
		this->setWindowFlags(this->windowFlags() &(~Qt::WindowStaysOnTopHint));
		this->showNormal();

		ui.MaoHour->setEnabled(true);
		ui.MaoMinute->setEnabled(true);
	}
}