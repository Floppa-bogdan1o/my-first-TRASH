//Camelator 1K kg v0.1

#include "mainwindow.h"
#include "./ui_mainwindow.h"

int userWeight = 50;
int userHeight = 150;
int userAge = 20;
int userGender = 0;
int userActivity  = 1;
int resultOut;

QString activities[5] = {
    "minimal activity",
    "Low activity",
    "moderate activity",
    "high activity",
    "very high activity"
};


//A function for finding the calorie intake p er person
//uses the Mifflin-St Jeor Formula
//entered in the format "weight-kg, height-cm, age-years, gender Bool false-male true-female"
void FindTheCalorieNorm(int weight, int height, int age, int gender, int activity) {

    float activitiesMultiplier[5] = {
        1.2,
        1.375,
        1.55,
        1.725,
        1.9
    };

    int basal_metabolic_rate, result;
    if (gender == 0) {
        basal_metabolic_rate = 10 * weight + 6.25 * height - 5 * age + 5; //male
    } else if (gender == 1) {
        basal_metabolic_rate = 100 * weight + 6.25 * height - 5 * age + 3000; //helicopter
    } else {
        basal_metabolic_rate = 10 * weight + 6.25 * height - 5 * age - 161; //female
    }
    resultOut = basal_metabolic_rate * activitiesMultiplier[activity];
    return;
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//user weight
void MainWindow::on_pushButtonMinusWeight_clicked()
{
    if (userWeight >= 2) {
        userWeight -=1;
    }
    ui->horizontalSliderWeight->setSliderPosition(userWeight);
    ui->lcdNumberWeight->display(userWeight);
}




void MainWindow::on_pushButtonPlusWeight_clicked()
{
    if (userWeight <= 399) {
        userWeight +=1;
    }
    ui->horizontalSliderWeight->setSliderPosition(userWeight);
    ui->lcdNumberWeight->display(userWeight);
}


void MainWindow::on_horizontalSliderWeight_valueChanged(int value)
{
    userWeight = value;
    ui->lcdNumberWeight->display(userWeight);
}

//user height
void MainWindow::on_pushButtonMinusHeight_clicked()
{
    if (userHeight >= 2) {
        userHeight -=1;
    }
    ui->horizontalSliderHeight->setSliderPosition(userHeight);
    ui->lcdNumberHeight->display(userHeight);
}


void MainWindow::on_pushButtonPlusHeight_clicked()
{
    if (userHeight <= 499) {
        userHeight +=1;
    }
    ui->horizontalSliderHeight->setSliderPosition(userHeight);
    ui->lcdNumberHeight->display(userHeight);
}


void MainWindow::on_horizontalSliderHeight_valueChanged(int value)
{
    userHeight = value;
    ui->lcdNumberHeight->display(userHeight);
}

//user age
void MainWindow::on_pushButtonMinusAge_clicked()
{
    if (userAge >= 2) {
        userAge -=1;
    }
    ui->horizontalSliderAge->setSliderPosition(userAge);
    ui->lcdNumberAge->display(userAge);
}


void MainWindow::on_pushButtonPlusAge_clicked()
{
    if (userAge <= 299) {
        userAge +=1;
    }
    ui->horizontalSliderAge->setSliderPosition(userAge);
    ui->lcdNumberAge->display(userAge);
}


void MainWindow::on_horizontalSliderAge_valueChanged(int value)
{
    userAge = value;
    ui->lcdNumberAge->display(userAge);
}

//user gender
void MainWindow::on_horizontalSliderGender_valueChanged(int value)
{
    userGender = value;
}

//user activity
void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    userActivity = value;
    ui->labelOutActivity->setText(activities[value]);
}

//calculate
void MainWindow::on_pushButtonEnter_clicked()
{
    FindTheCalorieNorm(userWeight,userHeight,userAge,userGender,userActivity);
    ui->labelOutput->setText("your norm is " + QString::number(resultOut) + " calories");
}

