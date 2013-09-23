/****************************************************************************
** Meta object code from reading C++ file 'workwidget.h'
**
** Created: Mon Sep 23 15:52:08 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../newCranePro/workwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_workwidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      39,   11,   11,   11, 0x05,
      68,   11,   11,   11, 0x05,
      95,   11,   11,   11, 0x05,
     124,   11,   11,   11, 0x05,
     141,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     167,   11,   11,   11, 0x0a,
     197,  191,   11,   11, 0x0a,
     217,   11,   11,   11, 0x0a,
     235,   11,   11,   11, 0x0a,
     248,   11,   11,   11, 0x0a,
     263,   11,   11,   11, 0x0a,
     278,   11,   11,   11, 0x0a,
     289,   11,   11,   11, 0x0a,
     314,   11,   11,   11, 0x0a,
     341,   11,   11,   11, 0x0a,
     366,   11,   11,   11, 0x0a,
     393,   11,   11,   11, 0x0a,
     404,   11,   11,   11, 0x0a,
     428,   11,   11,   11, 0x08,
     454,   11,   11,   11, 0x08,
     481,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_workwidget[] = {
    "workwidget\0\0SwitchToTimeSecretSignal()\0"
    "SwitchToSensorSecretSignal()\0"
    "SwitchToParaSecretSignal()\0"
    "SwitchToSysEleSecretSignal()\0"
    "ShutDownSignal()\0SwitchToGThSecretSignal()\0"
    "UpdataNetWorkInfoSlot()\0Index\0"
    "ComIndexChange(int)\0ShowRecordState()\0"
    "updatetime()\0WorkFinished()\0ToWorkWidget()\0"
    "MenuShow()\0SwitchToTimeSecretSlot()\0"
    "SwitchToSensorSecretSlot()\0"
    "SwitchToParaSecretSlot()\0"
    "SwitchToSysEleSecretSlot()\0ShutDown()\0"
    "SwitchToGThSecretSlot()\0"
    "on_StartWorkBtn_clicked()\0"
    "on_FinishWorkBtn_clicked()\0"
    "on_QuPiBtn_clicked()\0"
};

const QMetaObject workwidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_workwidget,
      qt_meta_data_workwidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &workwidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *workwidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *workwidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_workwidget))
        return static_cast<void*>(const_cast< workwidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int workwidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SwitchToTimeSecretSignal(); break;
        case 1: SwitchToSensorSecretSignal(); break;
        case 2: SwitchToParaSecretSignal(); break;
        case 3: SwitchToSysEleSecretSignal(); break;
        case 4: ShutDownSignal(); break;
        case 5: SwitchToGThSecretSignal(); break;
        case 6: UpdataNetWorkInfoSlot(); break;
        case 7: ComIndexChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: ShowRecordState(); break;
        case 9: updatetime(); break;
        case 10: WorkFinished(); break;
        case 11: ToWorkWidget(); break;
        case 12: MenuShow(); break;
        case 13: SwitchToTimeSecretSlot(); break;
        case 14: SwitchToSensorSecretSlot(); break;
        case 15: SwitchToParaSecretSlot(); break;
        case 16: SwitchToSysEleSecretSlot(); break;
        case 17: ShutDown(); break;
        case 18: SwitchToGThSecretSlot(); break;
        case 19: on_StartWorkBtn_clicked(); break;
        case 20: on_FinishWorkBtn_clicked(); break;
        case 21: on_QuPiBtn_clicked(); break;
        default: ;
        }
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void workwidget::SwitchToTimeSecretSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void workwidget::SwitchToSensorSecretSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void workwidget::SwitchToParaSecretSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void workwidget::SwitchToSysEleSecretSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void workwidget::ShutDownSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void workwidget::SwitchToGThSecretSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
