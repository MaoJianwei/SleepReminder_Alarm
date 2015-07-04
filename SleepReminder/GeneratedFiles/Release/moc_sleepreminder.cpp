/****************************************************************************
** Meta object code from reading C++ file 'sleepreminder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sleepreminder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sleepreminder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SleepReminder_t {
    QByteArrayData data[8];
    char stringdata[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SleepReminder_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SleepReminder_t qt_meta_stringdata_SleepReminder = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SleepReminder"
QT_MOC_LITERAL(1, 14, 14), // "GetShowNowTime"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "Beep"
QT_MOC_LITERAL(4, 35, 4), // "Work"
QT_MOC_LITERAL(5, 40, 10), // "ShowWindow"
QT_MOC_LITERAL(6, 51, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(7, 85, 6) // "reason"

    },
    "SleepReminder\0GetShowNowTime\0\0Beep\0"
    "Work\0ShowWindow\0QSystemTrayIcon::ActivationReason\0"
    "reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SleepReminder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void SleepReminder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SleepReminder *_t = static_cast<SleepReminder *>(_o);
        switch (_id) {
        case 0: _t->GetShowNowTime(); break;
        case 1: _t->Beep(); break;
        case 2: _t->Work(); break;
        case 3: _t->ShowWindow((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SleepReminder::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SleepReminder.data,
      qt_meta_data_SleepReminder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SleepReminder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SleepReminder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SleepReminder.stringdata))
        return static_cast<void*>(const_cast< SleepReminder*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SleepReminder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
