/****************************************************************************
** Meta object code from reading C++ file 'faitu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../project_with_mySQL/faitu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'faitu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SecondWindow_t {
    QByteArrayData data[15];
    char stringdata0[336];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SecondWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SecondWindow_t qt_meta_stringdata_SecondWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SecondWindow"
QT_MOC_LITERAL(1, 13, 18), // "FAITU_Window_Close"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "signal_about_change"
QT_MOC_LITERAL(4, 53, 17), // "Show_FAITU_Window"
QT_MOC_LITERAL(5, 71, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 93, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(7, 117, 16), // "Initial_Settings"
QT_MOC_LITERAL(8, 134, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(9, 158, 28), // "Print_Info_About_Of_Students"
QT_MOC_LITERAL(10, 187, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(11, 213, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(12, 237, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(13, 261, 42), // "Counting_The_Number_Of_Studen..."
QT_MOC_LITERAL(14, 304, 31) // "Inizialisation_Titles_Of_Tables"

    },
    "SecondWindow\0FAITU_Window_Close\0\0"
    "signal_about_change\0Show_FAITU_Window\0"
    "on_pushButton_clicked\0on_pushButton_4_clicked\0"
    "Initial_Settings\0on_pushButton_5_clicked\0"
    "Print_Info_About_Of_Students\0"
    "on_listWidget_itemClicked\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked\0"
    "Counting_The_Number_Of_Students_In_A_Group\0"
    "Inizialisation_Titles_Of_Tables"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SecondWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QStringList,

       0        // eod
};

void SecondWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SecondWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FAITU_Window_Close(); break;
        case 1: _t->signal_about_change(); break;
        case 2: _t->Show_FAITU_Window(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->Initial_Settings(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        case 7: _t->Print_Info_About_Of_Students(); break;
        case 8: _t->on_listWidget_itemClicked(); break;
        case 9: _t->on_pushButton_3_clicked(); break;
        case 10: _t->on_pushButton_2_clicked(); break;
        case 11: _t->Counting_The_Number_Of_Students_In_A_Group(); break;
        case 12: { QStringList _r = _t->Inizialisation_Titles_Of_Tables();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SecondWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SecondWindow::FAITU_Window_Close)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SecondWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SecondWindow::signal_about_change)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SecondWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_SecondWindow.data,
    qt_meta_data_SecondWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SecondWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SecondWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SecondWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SecondWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void SecondWindow::FAITU_Window_Close()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SecondWindow::signal_about_change()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
