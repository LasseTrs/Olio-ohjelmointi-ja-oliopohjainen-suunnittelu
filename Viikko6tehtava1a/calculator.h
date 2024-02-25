#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();
bool count_clicked = false;
    int numero;
int numero2;
    int numero3;



private slots:
    void on_count_clicked();

    void on_reset_clicked();

private:
    Ui::Calculator *ui;
    QString numTulos;
};
#endif // CALCULATOR_H
