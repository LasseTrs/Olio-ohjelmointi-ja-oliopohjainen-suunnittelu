#ifndef SHAKKIKELLO_H
#define SHAKKIKELLO_H
#include <QTimer>
#include <QMainWindow>
#include <QApplication>
using namespace std;



QT_BEGIN_NAMESPACE
namespace Ui {
class shakkikello;
}
QT_END_NAMESPACE

class shakkikello : public QMainWindow
{
    Q_OBJECT

public:
    shakkikello(QWidget *parent = nullptr);
    ~shakkikello();
    QTimer(QObject *parent = nullptr);




private slots:
    void on_progressBar1_valueChanged(int value);

    void on_progressBar2_valueChanged(int value);

    void on_switchPlayer1_pressed();

    void on_switchPlayer2_pressed();

    void on_secButton_clicked(bool checked);

    void on_minButton_clicked(bool checked);

    void on_startButton_pressed();

    void on_stopButton_pressed();

private:
    Ui::shakkikello *ui;
};
#endif // SHAKKIKELLO_H
