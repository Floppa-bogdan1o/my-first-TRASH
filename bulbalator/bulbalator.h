#ifndef BULBALATOR_H
#define BULBALATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class bulbalator;
}
QT_END_NAMESPACE

class bulbalator : public QMainWindow
{
    Q_OBJECT

public:
    bulbalator(QWidget *parent = nullptr);
    ~bulbalator();
    void changeLCD(QString plusNum);
    void operation(char operatorr);
    void giveAnswer();

private slots:
    void on_pushButton_num_0_clicked();
    void on_pushButton_num_1_clicked();
    void on_pushButton_num_2_clicked();
    void on_pushButton_num_3_clicked();
    void on_pushButton_num_4_clicked();
    void on_pushButton_num_5_clicked();
    void on_pushButton_num_6_clicked();
    void on_pushButton_num_7_clicked();
    void on_pushButton_num_8_clicked();
    void on_pushButton_num_9_clicked();
    void on_pushButton_del_clicked();
    void on_pushButton_dot_clicked();
    void on_pushButton_plus_clicked();
    void on_pushButton_minus_clicked();
    void on_pushButton_multiplication_clicked();
    void on_pushButton_division_clicked();
    void on_pushButton_sqrt_clicked();
    void on_pushButton_equal_clicked();
    void on_pushButton_res_clicked();

private:
    Ui::bulbalator *ui;
};
#endif // BULBALATOR_H
