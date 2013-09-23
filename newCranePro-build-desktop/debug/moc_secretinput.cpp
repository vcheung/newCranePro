/****************************************************************************
** Meta object code from reading C++ file 'secretinput.h'
**
** Created: Sun Sep 22 10:21:49 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../newCranePro/secretinput.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'secretinput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SecretInput[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      38,   12,   12,   12, 0x05,
      59,   12,   12,   12, 0x05,
      82,   12,   12,   12, 0x05,
     103,   12,   12,   12, 0x05,
     126,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     146,   12,   12,   12, 0x0a,
     170,   12,   12,   12, 0x08,
     197,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SecretInput[] = {
    "SecretInput\0\0SwitchToWorkSignal_Sec()\0"
    "SwitchToTimeSignal()\0SwitchToSensorSignal()\0"
    "SwitchToParaSignal()\0SwitchToSysEleSignal()\0"
    "SwitchToNetSignal()\0InvisiblePrompterSlot()\0"
    "on_SecretSureBtn_clicked()\0"
    "on_SecretQuitBtn_clicked()\0"
};

const QMetaObject SecretInput::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SecretInput,
      qt_meta_data_SecretInput, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SecretInput::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SecretInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SecretInput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SecretInput))
        return static_cast<void*>(const_cast< SecretInput*>(this));
    return QWidget::qt_metacast(_clname);
}

int SecretInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SwitchToWorkSignal_Sec(); break;
        case 1: SwitchToTimeSignal(); break;
        case 2: SwitchToSensorSignal(); break;
        case 3: SwitchToParaSignal(); break;
        case 4: SwitchToSysEleSignal(); break;
        case 5: SwitchToNetSignal(); break;
        case 6: InvisiblePrompterSlot(); break;
        case 7: on_SecretSureBtn_clicked(); break;
        case 8: on_SecretQuitBtn_clicked(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SecretInput::SwitchToWorkSignal_Sec()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SecretInput::SwitchToTimeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SecretInput::SwitchToSensorSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void SecretInput::SwitchToParaSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void SecretInput::SwitchToSysEleSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void SecretInput::SwitchToNetSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
