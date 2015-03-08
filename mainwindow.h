#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <string>
#include <list>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void clear();
    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
    void nine();
    void zero();
    void add();
    void subtract();
    void multiply();
    void divide();
    void sin();
    void cos();
    void tan();
    void square();
    void square_root();
    void log_base_10();
    void log_base_e();
    void calculate();
    void decimal();
    void paranthesis_open();
    void paranthesis_closed();
    void speak_fn();
    void minus();
    bool TakesPrecedence(string OperatorA, string OperatorB);
    bool isoperand(string s);
    bool is_special_operator(string s);
    string convert_to_string(double a);
    double myAtof ( string num);
    string eval(string op_1,string op_2,string operation);
    string calc(list<string> mylist);
    string calculate_process(string expres);
    string inttostr( const unsigned int number );
    string fraction_word(string fr);
    string convert_number_words(string number);
private:
    Ui::MainWindow *ui;
    QLabel *label;
    QLabel *label_2;
    QPushButton *clear_button;
    QPushButton *one_button;
    QPushButton *two_button;
    QPushButton *three_button;
    QPushButton *four_button;
    QPushButton *five_button;
    QPushButton *six_button;
    QPushButton *seven_button;
    QPushButton *eight_button;
    QPushButton *nine_button;
    QPushButton *zero_button;
    QPushButton *add_button;
    QPushButton *subtract_button;
    QPushButton *multiply_button;
    QPushButton *divide_button;
    QPushButton *square_button;
    QPushButton *square_root_button;
    QPushButton *sin_button;
    QPushButton *cos_button;
    QPushButton *tan_button;
    QPushButton *log_base_10_button;
    QPushButton *log_base_e_button;
    QPushButton *calculate_button;
    QPushButton *decimal_button;
    QPushButton *paranthesis_open_button;
    QPushButton *paranthesis_closed_button;
    QPushButton *speak_button;
    QPushButton *minus_button;

};

#endif // MAINWINDOW_H
