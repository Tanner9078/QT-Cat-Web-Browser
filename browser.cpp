#include "browser.h"
#include "ui_browser.h"

Browser::Browser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Browser)
{
    ui->setupUi(this);
}

Browser::~Browser()
{
    delete ui;
}

void Browser::on_pushButton_clicked()
{
    ui->webView->load(ui->urlBox->text());
}

void Browser::on_urlBox_returnPressed()
{
    on_pushButton_clicked();
}

void Browser::on_backButton_clicked()
{
    ui->webView->back();
}

void Browser::on_forwardButton_clicked()
{
    ui->webView->forward();
}

void Browser::on_refreshButton_clicked()
{
    ui->webView->reload();
}
