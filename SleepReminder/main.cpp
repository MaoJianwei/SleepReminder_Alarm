#include "sleepreminder.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SleepReminder w;
	w.show();
	return a.exec();
}
