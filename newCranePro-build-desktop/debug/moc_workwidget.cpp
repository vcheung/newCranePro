/****************************************************************************
** Meta object code from reading C++ file 'workwidget.h'
**
** Created: Tue Sep 10 15:59:12 2013
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
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      42,   36,   11,   11, 0x0a,
      62,   11,   11,   11, 0x0a,
      80,   11,   11,   11, 0x0a,
      93,   11,   11,   11, 0x0a,
     108,   11,   11,   11, 0x0a,
     123,   11,   11,   11, 0x08,
     149,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_workwidget[] = {
    "workwidget\0\0UpdataNetWorkInfoSlot()\0"
    "Index\0ComIndexChange(int)\0ShowRecordState()\0"
    "updatetime()\0WorkFinished()\0ToWorkWidget()\0"
    "on_StartWorkBtn_clicked()\0"
    "on_FinishWorkBtn_clicked()\0"
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
        case 0: UpdataNetWorkInfoSlot(); break;
        case 1: ComIndexChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: ShowRecordState(); break;
        case 3: updatetime(); break;
        case 4: WorkFinished(); break;
        case 5: ToWorkWidget(); break;
        case 6: on_StartWorkBtn_clicked(); break;
        case 7: on_FinishWorkBtn_clicked(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
