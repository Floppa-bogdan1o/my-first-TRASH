#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonMinusWeight_clicked();

    void on_pushButtonPlusWeight_clicked();

    void on_horizontalSliderWeight_valueChanged(int value);

    void on_pushButtonMinusHeight_clicked();

    void on_pushButtonPlusHeight_clicked();

    void on_horizontalSliderHeight_valueChanged(int value);

    void on_pushButtonMinusAge_clicked();

    void on_pushButtonPlusAge_clicked();

    void on_horizontalSliderAge_valueChanged(int value);

    void on_horizontalSliderGender_valueChanged(int value);

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButtonEnter_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
