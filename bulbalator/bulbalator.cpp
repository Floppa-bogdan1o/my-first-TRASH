#include "bulbalator.h"
#include "./ui_bulbalator.h"
#include <cmath>



QString mainA = "";
double first = 0, second = 0,theAnswer = 0;
bool isAlreadyUseOperator = false;
int whatOperator = 0;

bulbalator::bulbalator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::bulbalator)
{
    ui->setupUi(this);
}

void bulbalator::changeLCD(QString plusNum){
    if (plusNum == "DEL") {
        mainA.chop(1);
        ui->label_display->setText(mainA);
    } else if (plusNum == "." && mainA.contains(".")) {
        ui->label_display->setText("ОШИБКА! 2 точки");
    } else {
        QString currentText = mainA;
        mainA = currentText + plusNum;
        ui->label_display->setText(mainA);
    }
}

void bulbalator::giveAnswer() {
    second = mainA.toDouble();
    if (whatOperator == 1) {
        theAnswer = first + second;
    } else if (whatOperator == 2) {
        theAnswer = first - second;
    } else if (whatOperator == 3) {
        theAnswer = first * second;
    } else if (whatOperator == 4 && second != 0) {
        theAnswer = first / second;
    } else if (whatOperator == 4 && second == 0) {
        ui->label_display->setText("Ошибка!");
        first = 0; second = 0; theAnswer = 0; isAlreadyUseOperator = false; mainA = "";
        return;
    }
    QString str = QString::number(theAnswer, 'f', 2);
    ui->label_display->setText(str);
    first = theAnswer; second = 0; theAnswer = 0; isAlreadyUseOperator = false; mainA = str;
}

void bulbalator::operation(char operatorr){
    double value = mainA.toDouble();

    switch (operatorr) {
    case '+':
        if (!isAlreadyUseOperator) {
            ui->label_display->setText("+");
            first = value;
            whatOperator = 1;
            isAlreadyUseOperator = true;
            mainA = "";
        }
        break;
    case '-':
        if (!isAlreadyUseOperator) {
            ui->label_display->setText("-");
            first = value;
            whatOperator = 2;
            isAlreadyUseOperator = true;
            mainA = "";
        }
        break;
    case '*':
        if (!isAlreadyUseOperator) {
            ui->label_display->setText("*");
            first = value;
            whatOperator = 3;
            isAlreadyUseOperator = true;
            mainA = "";
        }
        break;
    case '/':
        if (!isAlreadyUseOperator) {
            ui->label_display->setText("/");
            first = value;
            whatOperator = 4;
            isAlreadyUseOperator = true;
            mainA = "";
        }
        break;
    case 'S':
        if (!isAlreadyUseOperator) {
            theAnswer = sqrt(value);
            QString str = QString::number(theAnswer, 'f', 2);
            ui->label_display->setText(str);
            first = theAnswer; second = 0; theAnswer = 0; isAlreadyUseOperator = false; mainA = str;
        }
        break;
    case '=':
        if (isAlreadyUseOperator) {
            giveAnswer();
            break;
        }
        break;
    }
}


bulbalator::~bulbalator()
{
    delete ui;
}




void bulbalator::on_pushButton_num_0_clicked(){
    changeLCD("0");
}

void bulbalator::on_pushButton_num_1_clicked(){
    changeLCD("1");
}

void bulbalator::on_pushButton_num_2_clicked(){
    changeLCD("2");
}

void bulbalator::on_pushButton_num_3_clicked(){
    changeLCD("3");
}

void bulbalator::on_pushButton_num_4_clicked(){
    changeLCD("4");
}

void bulbalator::on_pushButton_num_5_clicked(){
    changeLCD("5");
}

void bulbalator::on_pushButton_num_6_clicked(){
    changeLCD("6");
}

void bulbalator::on_pushButton_num_7_clicked(){
    changeLCD("7");
}

void bulbalator::on_pushButton_num_8_clicked(){
    changeLCD("8");
}

void bulbalator::on_pushButton_num_9_clicked(){
    changeLCD("9");
}

void bulbalator::on_pushButton_del_clicked(){
    changeLCD("DEL");
}

void bulbalator::on_pushButton_dot_clicked(){
    changeLCD(".");
}

void bulbalator::on_pushButton_plus_clicked(){
    operation('+');
}

void bulbalator::on_pushButton_minus_clicked(){
    operation('-');
}

void bulbalator::on_pushButton_multiplication_clicked(){
    operation('*');
}

void bulbalator::on_pushButton_division_clicked(){
    operation('/');
}

void bulbalator::on_pushButton_sqrt_clicked(){
    operation('S');
}

void bulbalator::on_pushButton_equal_clicked(){
    operation('=');
}

void bulbalator::on_pushButton_res_clicked(){
    first = 0; second = 0; theAnswer = 0; isAlreadyUseOperator = false; mainA = "";
    ui->label_display->setText(mainA);
}
