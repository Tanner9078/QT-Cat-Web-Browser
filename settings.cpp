#include "settings.h"
#include "ui_settings.h"
#include "browser.h"
#include "mainwindow.h"

Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
}

Settings::~Settings()
{
    delete ui;
}
