#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton_1, SIGNAL(clicked()),this, SLOT(randNum()));
     QObject::connect(ui->progressBar, SIGNAL(valueChanged(int)),ui->lcdNumber,SLOT(display(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{

}
void MainWindow::randNum()
{
    int num = (qrand() % ((100 + 1) + 0) - 0);
    ui->label_2->setNum(num);
    ui->progressBar->setValue(num);//не смог преобразовать из label в progressBar,а с lcdNumber нашел как сделать через подсказки
}

