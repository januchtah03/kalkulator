#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_button_dodaj_clicked()
{
   liczba1 = ui->liczba1->toPlainText().toInt();
   liczba2 = ui->liczba2->toPlainText().toInt();
   ui->label_wynik->setText(QString::number(liczba1+liczba2));
}

void MainWindow::on_button_minus_clicked()
{
    liczba1 = ui->liczba1->toPlainText().toInt();
    liczba2 = ui->liczba2->toPlainText().toInt();
    ui->label_wynik->setText(QString::number(liczba1-liczba2));
}

void MainWindow::on_button_mnoz_clicked()
{
    liczba1 = ui->liczba1->toPlainText().toInt();
    liczba2 = ui->liczba2->toPlainText().toInt();
    ui->label_wynik->setText(QString::number(liczba1*liczba2));
}

void MainWindow::on_button_dziel_clicked()
{
    liczba1 = ui->liczba1->toPlainText().toInt();
    liczba2 = ui->liczba2->toPlainText().toInt();
    ui->label_wynik->setText(QString::number(liczba1/liczba2));
}

void MainWindow::on_button_reset_clicked()
{
    ui->liczba1->setPlainText("");
    ui->liczba2->setPlainText("");
    ui->label_wynik->setText("");
}
