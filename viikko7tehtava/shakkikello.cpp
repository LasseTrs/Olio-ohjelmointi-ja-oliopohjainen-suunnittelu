#include "shakkikello.h"
#include "ui_shakkikello.h"

shakkikello::shakkikello(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::shakkikello)
{
    ui->setupUi(this);
}

shakkikello::~shakkikello()
{
    delete ui;
}

void shakkikello::on_progressBar1_valueChanged(int value)
{

}


void shakkikello::on_progressBar2_valueChanged(int value)
{

}


void shakkikello::on_switchPlayer1_pressed()
{

}


void shakkikello::on_switchPlayer2_pressed()
{

}


void shakkikello::on_secButton_clicked(bool checked)
{

}


void shakkikello::on_minButton_clicked(bool checked)
{

}


void shakkikello::on_startButton_pressed()
{

}


void shakkikello::on_stopButton_pressed()
{

}

