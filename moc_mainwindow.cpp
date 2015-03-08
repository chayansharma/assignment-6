/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   19,   19,   19, 0x08,
      20,   19,   19,   19, 0x08,
      26,   19,   19,   19, 0x08,
      32,   19,   19,   19, 0x08,
      40,   19,   19,   19, 0x08,
      47,   19,   19,   19, 0x08,
      54,   19,   19,   19, 0x08,
      60,   19,   19,   19, 0x08,
      68,   19,   19,   19, 0x08,
      76,   19,   19,   19, 0x08,
      83,   19,   19,   19, 0x08,
      90,   19,   19,   19, 0x08,
      96,   19,   19,   19, 0x08,
     107,   19,   19,   19, 0x08,
     118,   19,   19,   19, 0x08,
     127,   19,   19,   19, 0x08,
     133,   19,   19,   19, 0x08,
     139,   19,   19,   19, 0x08,
     145,   19,   19,   19, 0x08,
     154,   19,   19,   19, 0x08,
     168,   19,   19,   19, 0x08,
     182,   19,   19,   19, 0x08,
     195,   19,   19,   19, 0x08,
     207,   19,   19,   19, 0x08,
     217,   19,   19,   19, 0x08,
     236,   19,   19,   19, 0x08,
     257,   19,   19,   19, 0x08,
     268,   19,   19,   19, 0x08,
     276,  307,  327,   19, 0x08,
     332,  350,  327,   19, 0x08,
     352,  350,  327,   19, 0x08,
     380,  406,  408,   19, 0x08,
     415,  430,  434,   19, 0x08,
     441,  468,  408,   19, 0x08,
     488,  507,  408,   19, 0x08,
     514,  540,  408,   19, 0x08,
     547,  562,  408,   19, 0x08,
     569,  591,  408,   19, 0x08,
     594,  562,  408,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0clear()\0\0one()\0two()\0three()\0"
    "four()\0five()\0six()\0seven()\0eight()\0"
    "nine()\0zero()\0add()\0subtract()\0"
    "multiply()\0divide()\0sin()\0cos()\0tan()\0"
    "square()\0square_root()\0log_base_10()\0"
    "log_base_e()\0calculate()\0decimal()\0"
    "paranthesis_open()\0paranthesis_closed()\0"
    "speak_fn()\0minus()\0TakesPrecedence(string,string)\0"
    "OperatorA,OperatorB\0bool\0isoperand(string)\0"
    "s\0is_special_operator(string)\0"
    "convert_to_string(double)\0a\0string\0"
    "myAtof(string)\0num\0double\0"
    "eval(string,string,string)\0"
    "op_1,op_2,operation\0calc(list<string>)\0"
    "mylist\0calculate_process(string)\0"
    "expres\0inttostr(uint)\0number\0"
    "fraction_word(string)\0fr\0"
    "convert_number_words(string)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->one(); break;
        case 2: _t->two(); break;
        case 3: _t->three(); break;
        case 4: _t->four(); break;
        case 5: _t->five(); break;
        case 6: _t->six(); break;
        case 7: _t->seven(); break;
        case 8: _t->eight(); break;
        case 9: _t->nine(); break;
        case 10: _t->zero(); break;
        case 11: _t->add(); break;
        case 12: _t->subtract(); break;
        case 13: _t->multiply(); break;
        case 14: _t->divide(); break;
        case 15: _t->sin(); break;
        case 16: _t->cos(); break;
        case 17: _t->tan(); break;
        case 18: _t->square(); break;
        case 19: _t->square_root(); break;
        case 20: _t->log_base_10(); break;
        case 21: _t->log_base_e(); break;
        case 22: _t->calculate(); break;
        case 23: _t->decimal(); break;
        case 24: _t->paranthesis_open(); break;
        case 25: _t->paranthesis_closed(); break;
        case 26: _t->speak_fn(); break;
        case 27: _t->minus(); break;
        case 28: { bool _r = _t->TakesPrecedence((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isoperand((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->is_special_operator((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { string _r = _t->convert_to_string((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 32: { double _r = _t->myAtof((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 33: { string _r = _t->eval((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])),(*reinterpret_cast< string(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 34: { string _r = _t->calc((*reinterpret_cast< list<string>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 35: { string _r = _t->calculate_process((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 36: { string _r = _t->inttostr((*reinterpret_cast< const uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 37: { string _r = _t->fraction_word((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 38: { string _r = _t->convert_number_words((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
