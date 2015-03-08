#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/QCoreApplication>
#include <iostream>
#include <math.h>
#include <string>
#include <stack>
#include<sstream>
#include<list>
#include <vector>
#include <QtCore>
#include <QtSpeech>
using namespace std;
 QtSpeech speech;
ostringstream os;
string first [] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen" };
vector<string> first14 (first, first + sizeof(first) / sizeof(string) );
string prefix [] = {"twen", "thir", "for", "fif", "six", "seven", "eigh", "nine"};
vector<string> prefixes (prefix, prefix + sizeof(prefix) / sizeof(string) );

QString value="" , total="" , result = "";
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    label = new QLabel("0",this);
    label ->setGeometry(QRect(QPoint(30,0),QSize(400,50)));

    label_2 = new QLabel("zero",this);
    label_2 ->setGeometry(QRect(QPoint(30,50),QSize(400,50)));

    clear_button = new QPushButton("C",this);
    clear_button ->setGeometry(QRect(QPoint(0,300),QSize(60,50)));
    connect(clear_button,SIGNAL(released()) , this,SLOT(clear()));

    one_button = new QPushButton("1",this);
    one_button ->setGeometry(QRect(QPoint(0,100),QSize(60,50)));
    connect(one_button,SIGNAL(released()) , this,SLOT(one()));

    two_button = new QPushButton("2",this);
    two_button ->setGeometry(QRect(QPoint(75,100),QSize(60,50)));
    connect(two_button,SIGNAL(released()) , this,SLOT(two()));

    three_button = new QPushButton("3",this);
    three_button ->setGeometry(QRect(QPoint(150,100),QSize(60,50)));
    connect(three_button,SIGNAL(released()) , this,SLOT(three()));

    four_button = new QPushButton("4",this);
    four_button ->setGeometry(QRect(QPoint(0,150),QSize(60,50)));
    connect(four_button,SIGNAL(released()) , this,SLOT(four()));

    five_button = new QPushButton("5",this);
    five_button ->setGeometry(QRect(QPoint(75,150),QSize(60,50)));
    connect(five_button,SIGNAL(released()) , this,SLOT(five()));

    six_button = new QPushButton("6",this);
    six_button ->setGeometry(QRect(QPoint(150,150),QSize(60,50)));
    connect(six_button,SIGNAL(released()) , this,SLOT(six()));

    seven_button = new QPushButton("7",this);
    seven_button ->setGeometry(QRect(QPoint(0,200),QSize(60,50)));
    connect(seven_button,SIGNAL(released()) , this,SLOT(seven()));

    eight_button = new QPushButton("8",this);
    eight_button ->setGeometry(QRect(QPoint(75,200),QSize(60,50)));
    connect(eight_button,SIGNAL(released()) , this,SLOT(eight()));

    nine_button = new QPushButton("9",this);
    nine_button ->setGeometry(QRect(QPoint(150,200),QSize(60,50)));
    connect(nine_button,SIGNAL(released()) , this,SLOT(nine()));

    zero_button = new QPushButton("0",this);
    zero_button ->setGeometry(QRect(QPoint(150,250),QSize(60,50)));
    connect(zero_button,SIGNAL(released()) , this,SLOT(zero()));

    add_button = new QPushButton("+",this);
    add_button ->setGeometry(QRect(QPoint(225,100),QSize(60,50)));
    connect(add_button,SIGNAL(released()) , this,SLOT(add()));

    subtract_button = new QPushButton("-",this);
    subtract_button ->setGeometry(QRect(QPoint(225,150),QSize(60,50)));
    connect(subtract_button,SIGNAL(released()) , this,SLOT(subtract()));

    multiply_button = new QPushButton("*",this);
    multiply_button ->setGeometry(QRect(QPoint(225,200),QSize(60,50)));
    connect(multiply_button,SIGNAL(released()) , this,SLOT(multiply()));

    divide_button = new QPushButton("/",this);
    divide_button ->setGeometry(QRect(QPoint(225,250),QSize(60,50)));
    connect(divide_button,SIGNAL(released()) , this,SLOT(divide()));

    sin_button = new QPushButton("sin",this);
    sin_button ->setGeometry(QRect(QPoint(75,300),QSize(60,50)));
    connect(sin_button,SIGNAL(released()) , this,SLOT(sin()));

    cos_button = new QPushButton("cos",this);
    cos_button ->setGeometry(QRect(QPoint(150,300),QSize(60,50)));
    connect(cos_button,SIGNAL(released()) , this,SLOT(cos()));

    tan_button = new QPushButton("tan",this);
    tan_button ->setGeometry(QRect(QPoint(225,300),QSize(60,50)));
    connect(tan_button,SIGNAL(released()) , this,SLOT(tan()));

    square_button = new QPushButton("^ 2",this);
    square_button ->setGeometry(QRect(QPoint(75,250),QSize(60,50)));
    connect(square_button,SIGNAL(released()) , this,SLOT(square()));

    square_root_button = new QPushButton("^1/2",this);
    square_root_button ->setGeometry(QRect(QPoint(0,250),QSize(60,50)));
    connect(square_root_button,SIGNAL(released()) , this,SLOT(square_root()));

    log_base_10_button = new QPushButton("log",this);
    log_base_10_button ->setGeometry(QRect(QPoint(150,350),QSize(60,50)));
    connect(log_base_10_button,SIGNAL(released()) , this,SLOT(log_base_10()));

    log_base_e_button = new QPushButton("ln",this);
    log_base_e_button ->setGeometry(QRect(QPoint(225,350),QSize(60,50)));
    connect(log_base_e_button,SIGNAL(released()) , this,SLOT(log_base_e()));

    calculate_button = new QPushButton("calculate",this);
    calculate_button ->setGeometry(QRect(QPoint(0,350),QSize(135,50)));
    connect(calculate_button,SIGNAL(released()) , this,SLOT(calculate()));

    decimal_button = new QPushButton(".",this);
    decimal_button ->setGeometry(QRect(QPoint(300,100),QSize(60,50)));
    connect(decimal_button,SIGNAL(released()) , this,SLOT(decimal()));

    paranthesis_open_button = new QPushButton("(",this);
    paranthesis_open_button ->setGeometry(QRect(QPoint(300,150),QSize(60,50)));
    connect(paranthesis_open_button,SIGNAL(released()) , this,SLOT(paranthesis_open()));

    paranthesis_closed_button = new QPushButton(")",this);
    paranthesis_closed_button ->setGeometry(QRect(QPoint(300,200),QSize(60,50)));
    connect(paranthesis_closed_button,SIGNAL(released()) , this,SLOT(paranthesis_closed()));

    speak_button = new QPushButton("S",this);
    speak_button ->setGeometry(QRect(QPoint(300,250),QSize(60,50)));
    connect(speak_button,SIGNAL(released()) , this,SLOT(speak_fn()));

    minus_button = new QPushButton("M",this);
    minus_button ->setGeometry(QRect(QPoint(300,300),QSize(60,50)));
    connect(minus_button,SIGNAL(released()) , this,SLOT(minus()));
}

void MainWindow::minus()
{
    value = value + "-";
    label ->setText(value);
}


void MainWindow::speak_fn()
{
   speech.say(result);
}

void MainWindow::decimal()
{
    value = value + ".";
    label ->setText(value);
}
void MainWindow::paranthesis_open()
{
    value = value + "( ";
    label ->setText(value);
}
void MainWindow::paranthesis_closed()
{
    value = value + " )";
    label ->setText(value);
}
void  MainWindow::clear()
{
    value = "";
    label ->setText(value);
}
void MainWindow::one()
{
    value = value + "1";
    label ->setText(value);
}
void MainWindow::two()
{
    value = value + "2";
    label ->setText(value);
}
void MainWindow::three()
{
    value = value + "3";
    label ->setText(value);
}
void MainWindow::four()
{
    value = value + "4";
    label ->setText(value);
}
void MainWindow::five()
{
    value = value + "5";
    label ->setText(value);
}
void MainWindow::six()
{
    value = value + "6";
    label ->setText(value);
}
void MainWindow::seven()
{
    value = value + "7";
    label ->setText(value);
}
void MainWindow::eight()
{
    value = value + "8";
    label ->setText(value);
}
void MainWindow::nine()
{
    value = value + "9";
    label ->setText(value);
}
void MainWindow::zero()
{
    value = value + "0";
    label ->setText(value);
}
void MainWindow::add()
{
    value = value + " + ";
    label ->setText(value);
}
void MainWindow::subtract()
{
    value = value + " - ";
    label ->setText(value);
}
void MainWindow::multiply()
{
    value = value + " * ";
    label ->setText(value);
}
void MainWindow::divide()
{
    value = value + " / ";
    label ->setText(value);
}
void MainWindow::sin()
{
    value = "sin ( " + value + " )";
    label ->setText(value);
}
void MainWindow::cos()
{
    value = "cos ( " + value + " )";
    label ->setText(value);
}
void MainWindow::tan()
{
    value = "tan ( " + value + " )";
    label ->setText(value);
}
void MainWindow::square()
{
    value =  value + " ^ 2";
    label ->setText(value);
}
void MainWindow::square_root()
{
    value = value + " ^ 0.5";
    label ->setText(value);
}
void MainWindow::log_base_10()
{
    value = "log ( " + value + " )";
    label ->setText(value);
}
void MainWindow::log_base_e()
{
    value = "ln ( " + value + " )";
    label ->setText(value);
}


bool MainWindow::TakesPrecedence(string OperatorA, string OperatorB)
{
   if (OperatorA.compare("(")==0)
      return false;
   else if (OperatorB.compare("(")==0)
      return false;
   else if (OperatorB.compare(")")==0)
      return true;
   else if ((OperatorA.compare("^")==0) && (OperatorB.compare("^")==0))
      return false;
   else if (OperatorA.compare("^")==0)
      return true;
   else if (OperatorB.compare("^")==0)
      return false;
   else if ((OperatorA.compare("*")==0) || (OperatorA.compare("/")==0))
      return true;
   else if ((OperatorB.compare("*")==0) || (OperatorB.compare("/")==0))
      return false;
   else
      return true;

}

bool MainWindow::isoperand(string s)
{
    istringstream iss(s);
    float dummy;
    iss >> noskipws >> dummy;
    return iss && iss.eof();
}

bool MainWindow::is_special_operator(string s)
{
    if((s.compare("sin")==0) || (s.compare("cos")==0) || (s.compare("tan")==0) || (s.compare("log")==0) || (s.compare("ln")==0))
        return true;
    else
        return false;
}
string MainWindow::convert_to_string(double a)
{
    os.str(string() );
    os.clear();
    os << a;
    return os.str();
}

double MainWindow::myAtof ( string num)
{
      double tmp;
      sscanf ( num.c_str(), "%lf" , &tmp);
      return tmp;
   }

string MainWindow::eval(string op_1,string op_2,string operation)
{
    if(operation.compare("/")==0)
        return convert_to_string(myAtof(op_2)/myAtof(op_1));
    else if(operation.compare("*")==0)
        return convert_to_string(myAtof(op_1)*myAtof(op_2));
    else if(operation.compare("+")==0)
        return convert_to_string(myAtof(op_1)+myAtof(op_2));
    else if(operation.compare("^")==0)
        return convert_to_string(pow(myAtof(op_2),myAtof(op_1)));
    else
        return convert_to_string(myAtof(op_1)-myAtof(op_2));
}


string MainWindow::calc(list<string> mylist)
{
int count = 0 ;
string special_operator;
stack<string> stack;
string op_1,op_2;
list<string> postfix_list;
list<string> special_operator_list;
list<string>::iterator iter;
list<string>::iterator iter_2;
iter = mylist.begin();
while( iter != mylist.end() )
{
    if(isoperand(*iter))
    {
        postfix_list.push_back(*iter);
    }
    else if (is_special_operator(*iter))
    {
        special_operator = *iter;
        count = 1;
        special_operator_list.clear();
        iter++;
        while(count>0 && iter != mylist.end())
        {
            iter++;
            if((*iter).compare("(")==0)
                count++;
            else if ((*iter).compare(")")==0)
                count--;
            if(count>0)
                special_operator_list.push_back(*iter);
        }

        if(special_operator.compare("sin")==0)
            postfix_list.push_back(convert_to_string(::sin(myAtof(calc(special_operator_list)))));
        else if(special_operator.compare("cos")==0)
            postfix_list.push_back(convert_to_string(::cos(myAtof(calc(special_operator_list)))));
        else if(special_operator.compare("tan")==0)
            postfix_list.push_back(convert_to_string(::tan(myAtof(calc(special_operator_list)))));
        else if(special_operator.compare("log")==0)
            postfix_list.push_back(convert_to_string(log10(myAtof(calc(special_operator_list)))));
        else
            postfix_list.push_back(convert_to_string(log(myAtof(calc(special_operator_list)))));

    }
    else if ((*iter).compare("(")==0)
           stack.push(*iter);
        else if ((*iter).compare(")")==0)
    {

            while(stack.top().compare("(")!=0)
        {
                    postfix_list.push_back(stack.top());
            stack.pop();
        }

                    stack.pop();

    }
    else
    {
        while ((! stack.empty()) && (TakesPrecedence(stack.top(), *iter)))
            {
                postfix_list.push_back(stack.top());
                stack.pop();

            }
            stack.push(*iter);
    }

    if(iter != mylist.end() )
        iter++;
}

while (! stack.empty())
      {
                postfix_list.push_back(stack.top());
                stack.pop();
      }

for(iter = postfix_list.begin(); iter != postfix_list.end(); iter++)
{
    if(isoperand(*iter))
        stack.push(*iter);
    else
    {
        op_1 = stack.top();
        stack.pop();
        op_2 = stack.top();
        stack.pop();
        stack.push(eval(op_1,op_2,(*iter)));
    }
}


return stack.top();

}

string MainWindow::calculate_process(string expres)
{
    string temp;
    list<string> mylist;
    stringstream stream_string;
    list<string>::iterator iter;
    stream_string<<expres;
    while(getline(stream_string,temp,' '))
    mylist.push_back(temp);
    return calc(mylist);
}

string MainWindow::inttostr( const unsigned int number )
{
    if( number <= 14 )
        return first14.at(number);
    if( number < 20 )
        return prefixes.at(number-12) + "teen";
    if( number < 100 ) {
        unsigned int remainder = number - (static_cast<int>(number/10)*10);
        return prefixes.at(number/10-2) + (0 != remainder ? "ty " + inttostr(remainder) : "ty");
    }
    if( number < 1000 ) {
        unsigned int remainder = number - (static_cast<int>(number/100)*100);
        return first14.at(number/100) + (0 != remainder ? " hundred " + inttostr(remainder) : " hundred");
    }
    if( number < 1000000 ) {
        unsigned int thousands = static_cast<int>(number/1000);
        unsigned int remainder = number - (thousands*1000);
        return inttostr(thousands) + (0 != remainder ? " thousand " + inttostr(remainder) : " thousand");
    }

        unsigned int millions = static_cast<int>(number/1000000);
        unsigned int remainder = number - (millions*1000000);
        return inttostr(millions) + (0 != remainder ? " million " + inttostr(remainder) : " million");
}

string MainWindow::fraction_word(string fr)
{
    string value = "";
    for(int i=0;i<fr.length();++i)
    {
        if(fr.at(i) == '0')
            value = value + " " + first[0];
        else if(fr.at(i) == '1')
            value = value + " " + first[1];
        else if(fr.at(i) == '2')
            value = value + " " + first[2];
        else if(fr.at(i) == '3')
            value = value + " " + first[3];
        else if(fr.at(i) == '4')
            value = value + " " + first[4];
        else if(fr.at(i) == '5')
            value = value + " " + first[5];
        else if(fr.at(i) == '6')
            value = value + " " + first[6];
        else if(fr.at(i) == '7')
            value = value + " " + first[7];
        else if(fr.at(i) == '8')
            value = value + " " + first[8];
        else if(fr.at(i) == '9')
            value = value + " " + first[9];
    }
    return value;
}

string MainWindow::convert_number_words(string number)
{
    string final = "";
    string decimal_delimiter = ".";
    string minus_delimiter = "-";
    size_t pos = 0;
    string token;
    pos = number.find(minus_delimiter);
    if(pos != string::npos )
    {
        final = final + "minus ";
        number.erase(0, pos + minus_delimiter.length());
    }

    pos = number.find(decimal_delimiter);
    if(pos != string::npos )
    {
        token = number.substr(0, pos);
        number.erase(0, pos + decimal_delimiter.length());
        final = final + inttostr(atoi(token.c_str()))+" point "+fraction_word(number);
    }
    else
    {
        final = final + inttostr(atoi(number.c_str()));
    }
    return final;

}

void  MainWindow::calculate()
{
    result = QString::fromStdString(calculate_process(value.toStdString()));
    label ->setText(result);
    result = QString::fromStdString(convert_number_words(result.toStdString()));
    label_2 ->setText(result);
    value = "";
}

MainWindow::~MainWindow()
{
}
