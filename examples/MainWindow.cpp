#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "PureJson.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->targetTxt->setPlainText(RemoveComment(ui->sourceTxt->toPlainText()));
}
