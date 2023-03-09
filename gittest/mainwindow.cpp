#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton,
            SIGNAL(clicked() ),
            this,
            SLOT(  pushButtonMelonclicked())
         );

    connect(ui->pushButton_2,
            SIGNAL(clicked() ),
            this,
            SLOT(  pushButtonAppleclicked())
         );

    connect(ui->pushButton_3,
            SIGNAL(clicked() ),
            this,
            SLOT(  pushButtonStrawberryclicked())
         );
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pushButtonMelonclicked()
{
    qDebug() << "Melon Clicked()!";
}

void MainWindow::pushButtonAppleclicked()
{
    qDebug() << "Apple Clicked()!";
}

void MainWindow::pushButtonStrawberryclicked()
{
    qDebug() << "Strawberry Clicked()!";
}
