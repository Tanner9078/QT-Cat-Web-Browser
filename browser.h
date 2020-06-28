#ifndef BROWSER_H
#define BROWSER_H

#include <QWidget>

namespace Ui {
class Browser;
}

class Browser : public QWidget
{
    Q_OBJECT

public:
    explicit Browser(QWidget *parent = 0);
    ~Browser();

private slots:
    void on_pushButton_clicked();

    void on_urlBox_returnPressed();

    void on_backButton_clicked();

    void on_forwardButton_clicked();

    void on_refreshButton_clicked();

private:
    Ui::Browser *ui;
};

#endif // BROWSER_H
