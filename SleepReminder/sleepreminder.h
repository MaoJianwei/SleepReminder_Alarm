#ifndef SLEEPREMINDER_H
#define SLEEPREMINDER_H

#include <QtWidgets/QMainWindow>
#include "ui_sleepreminder.h"

#include <QTimer>
#include <QSystemTrayIcon>
class SleepReminder : public QMainWindow
{
	Q_OBJECT

	public slots:
	void GetShowNowTime();
	void Beep();
	void Work();
	void ShowWindow(QSystemTrayIcon::ActivationReason reason);
	 
public:
	SleepReminder(QWidget *parent = 0);
	~SleepReminder();

private:
	void changeEvent(QEvent *e);

private:
	Ui::SleepReminderClass ui;

	QTimer nowTimer;
	QTimer warn;

	bool isWork;
	bool isBeep;

	QSystemTrayIcon tray;
};

#endif // SLEEPREMINDER_H
