#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,
            SIGNAL(clicked()),
            this,
            SLOT(pushButtonOn()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    qDebug() << "Melon clicked()!";
    qDebug() << ui->pushButton->text();
    ui->pushButton->setText("melon");
    qDebug() << ui->pushButton->text();
}

void MainWindow::pushButtonOn(){
    qDebug() << "Manual connect!";
}

void MainWindow::on_pushButton_2_clicked(){
    qDebug() << "apple clicked()!";
}

void MainWindow::on_pushButton_3_clicked()
{
    qDebug() << "strawberry clicked()!";
}
