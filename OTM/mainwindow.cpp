#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <vector>
#include <random>
#include <QTimer>
QString usrInput = "опоздал на урок";
int regret = 2;

const std::vector<QString> firstPart = {
    "Сорян, я случайно вступил в тайный орден любителей тишины,",
    "Слушай, мой фикус внезапно заговорил на латыни,",
    "Прости, я застрял в текстурах собственной кухни,",
    "Тут такое дело — меня по ошибке короновали в микровселенной,",
    "Я пытался объяснить коту основы термодинамики,",
    "Мне пришлось срочно ловить сбежавшее вдохновение сачком,",
    "Я случайно вызвал дух продуктивности, но он оказался злым,",
    "Мои тапочки объявили независимость и забаррикадировали дверь,",
    "Я нашел портал в 1588 год в морозилке,",
    "У меня в голове начала играть музыка из прогноза погоды,",
    "У меня возникла идея пересчитать все дырки в сыре для отчета,",
    "Меня похитили инопланетяне, но вернули из-за занудства,",
    "Я пытался взломать пентагон с помощью микроволновки,",
    "Мой внутренний голос ушел в неоплачиваемый отпуск,",
    "Я случайно перепутал реальность с эпизодом Смешариков,",
    "Курьер привез мне коробку пустоты, и я ее открыл,",
    "Я решил стать профессиональным созерцателем обоев,",
    "Моя аура слишком сильно наэлектризовалась от свитера,",
    "Я нашел инструкцию по управлению миром на обороте чека,",
    "Весь мой здравый смысл улетел на юг с перелетными птицами,",
};

const std::vector<QString> secondPart = {
    " теперь мне запрещено пользоваться звуками до четверга.",
    " так что я три часа доказывал зеркалу, что я существую.",
    " поэтому я ждал, пока гравитация придет в норму.",
    " теперь я обязан кормить Илюшу, этим и занимался.",
    " так что пришлось перешивать все пуговицы на левую сторону.",
    " хотя по закону мироздания я должен был превратиться в кактус, я выжил.",
    " в итоге я забыл, как пользоваться человеческим языком, все это время учился говорить.",
    " я временно перешел на общение через танцы.",
    " мой попугай требовал официальных извинений.",
    " я еле выбрался.",
    " так что пришлось срочно гуглить, как размагнитить кота.",
    " от того что произошло я видел мир исключительно в радуге.",
    " хотя я предупреждал, что это кончится чаепитием с призраком... Они не послушали.",
    " я просто сидел и ждал, пока отпустит магия.",
    " после этого я весь вчер красил мысли в фиолетовый.",
    " и так я попал обратно домой.",
    " в итоге я стал почетным гостем в голове у соседа.",
    " конечно пришлось потратить вечер на дрессировку пыли.",
    " хотя все улики указывали на заговор рептилоидов, я ушел домой лунной походкой.",
    " после этого я жду одобрения от министерства глупых походок.",
};

const std::vector<QString> LastPart = {
    " По этому я ",
    " Мне пришлось.... я ",
    " Извиняюсь, из-за этого я ",
    " Вот по этому я ",
    " Я реально не виновен! но получилось что я "
};

const std::vector<QString> funnyStuff = {
    "взламываем пентагон используя культиватор...",
    "прощаем все долги.....",
    "отмываем деньги.....",
    "кайфуем..... ",
    "sudo rm -rf --no-preserve-root",
    "закрываем открытое.....",
    "открываем закртытое....",
    "тут могла быть ваша реклама",
    "продам гараж",
    "уничтожаем улики.....",
    "иагружаем гифки с котиками....",
    "узнаем фазу луны.....",
    "пытаемся найти смысл этого кода...",
    "подключаемся к Илюше по bluetooth...",
    "радуемся жизни....",
    "варим пельмени.....",
    "эмитируем бурную деятельность....",
    "слушаем попсу.....",
    "устанавливаем ратку.....",
    "ладно, ниче мы не делаем"
};

void MainWindow::meme(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> someFunnyRd(0, 19);

    ui->absurdLogs->setText(funnyStuff[someFunnyRd(gen)]);
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

void MainWindow::on_usrInputTextLine_textChanged(const QString &arg1)
{
    usrInput = arg1;
}

//checkboxes
void MainWindow::on_checkBoxNope_stateChanged(int arg1)
{
    if (ui->checkBoxNope->isChecked()){
        ui->checkBox5050->setChecked(false);
        ui->checkBoxYeah->setChecked(false);
        regret = 0;
    }
}


void MainWindow::on_checkBox5050_stateChanged(int arg1)
{
    if (ui->checkBox5050->isChecked()){
        ui->checkBoxNope->setChecked(false);
        ui->checkBoxYeah->setChecked(false);
        regret = 1;
    }
}


void MainWindow::on_checkBoxYeah_stateChanged(int arg1)
{
    if (ui->checkBoxYeah->isChecked()){
        ui->checkBox5050->setChecked(false);
        ui->checkBoxNope->setChecked(false);
        regret = 2;
    }
}


void MainWindow::on_startButton_clicked() {
    MainWindow::meme();
    QTimer::singleShot(500, [this]() {
        meme();
    });
    QTimer::singleShot(1000, [this]() {
        meme();
    });
    QTimer::singleShot(2000, [this]() {
        meme();
    });
    QTimer::singleShot(2500, [this]() {
        ui->absurdLogs->setText("Готово!");

        if(regret == 2){
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<> distrib(0, 19);
            std::uniform_int_distribution<> distrib1(0, 4);
            ui->output->setPlainText(firstPart[distrib(gen)] + secondPart[distrib(gen)] + LastPart[distrib1(gen)] + usrInput);
        } else if (regret == 1){
            std::random_device rd;
            std::mt19937 gen(rd());

            std::uniform_int_distribution<> distrib(0, 19);
            std::uniform_int_distribution<> distrib1(0, 4);
            std::uniform_int_distribution<> distrib2(0, 1);
            if(distrib2(gen) == 1){
                ui->output->setPlainText(firstPart[distrib(gen)] + secondPart[distrib(gen)] + LastPart[distrib1(gen)] + usrInput);
            } else{
                ui->output->setPlainText("Я передумал, не буду отвечать");
            }
        } else {
            ui->output->setPlainText("Я не буду отвечать😈");
        }

    });

}

