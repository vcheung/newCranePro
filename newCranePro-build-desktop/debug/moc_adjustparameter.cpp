/****************************************************************************
** Meta object code from reading C++ file 'adjustparameter.h'
**
** Created: Mon Sep 23 16:08:47 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../newCranePro/adjustparameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adjustparameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_adjustparameter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_adjustparameter[] = {
    "adjustparameter\0\0SwitchToWorkSignal_Para()\0"
    "on_BackToWorkBtn_clicked()\0"
};

const QMetaObject adjustparameter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_adjustparameter,
      qt_meta_data_adjustparameter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &adjustparameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *adjustparameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *adjustparameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_adjustparameter))
        return static_cast<void*>(const_cast< adjustparameter*>(this));
    return QWidget::qt_metacast(_clname);
}

int adjustparameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SwitchToWorkSignal_Para(); break;
        case 1: on_BackToWorkBtn_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void adjustparameter::SwitchToWorkSignal_Para()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
