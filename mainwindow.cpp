#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "browser.h"
#include "settings.h"
#include <QMessageBox>

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

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->tabWidget->addTab(new Browser(), QString("Tab %0").arg(ui->tabWidget->count() + 1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 1);
}

void MainWindow::on_actionAbout_QT_triggered()
{
    QMessageBox::aboutQt(this, "About QT");
}
