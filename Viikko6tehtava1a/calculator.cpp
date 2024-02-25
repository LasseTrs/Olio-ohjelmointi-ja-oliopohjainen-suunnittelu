#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    int numero =0;

    numTulos=ui->labelNum->text();
    ui->labelNum->setText(QString::number(numero));

}

Calculator::~Calculator()
{
    delete ui;

}

void Calculator::on_count_clicked()
{
    bool count_clicked = false;

    int numero =0;

    numTulos=ui->labelNum->text();
   ui->labelNum->setText(QString::number(numero));
    if (bool count_clicked = true){
       numero2 = numero +1;

       numTulos=ui->labelNum->text();
       ui->labelNum->setText(QString::number(numero2));

   }


}


void Calculator::on_reset_clicked()
{
    int numero = 0;
    numTulos=ui->labelNum->text();
    ui->labelNum->setText(QString::number(numero));
}

