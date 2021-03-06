#include "browser.h"
#include "ui_browser.h"

// Defines variables
QString HomeUrl;

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

void Browser::on_webView_urlChanged(const QUrl &arg1)
{

}

void Browser::on_webView_loadStarted()
{

}

void Browser::on_ApplyHome_clicked()
{
    if (ui->GoogleradioB->isChecked()) {
        HomeUrl = "https://www.google.com";
    }
    if (ui->duckduckgoRadioB->isChecked()) {
        HomeUrl = "https://www.duckduckgo.com";
    }
    if (ui->BingRadioB->isChecked()) {
        HomeUrl = "https://www.bing.com";
    }
    if (ui->YahooRadioB->isChecked()) {
        HomeUrl = "https://www.yahoo.com";
    }
    if (ui->AskRadioB->isChecked()) {
        HomeUrl = "https://www.Ask.com";
    }
}

void Browser::on_HomeButton_clicked()
{
    ui->webView->load(HomeUrl);
}

void Browser::on_pushButton_2_clicked()
{
    if (ui->RoundTabRadioB->isChecked()) {
        ui->tabWidget->setTabShape(QTabWidget::Rounded);
    }
    if (ui->TriTabRadioB->isChecked()) {
        ui->tabWidget->setTabShape(QTabWidget::Triangular);
    }
}

void Browser::on_pushButton_3_clicked()
{
    bool ok;

    QFont font = QFontDialog::getFont(&ok, QFont("Noto Sans"), this);

    if(ok ) {
        QApplication::setFont(font);
    }
}
