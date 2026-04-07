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
    void on_usrInputTextLine_textChanged(const QString &arg1);

    void on_checkBoxNope_stateChanged(int arg1);

    void on_checkBox5050_stateChanged(int arg1);

    void on_checkBoxYeah_stateChanged(int arg1);

    void on_startButton_clicked();

    void meme();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
