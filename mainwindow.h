#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_urlBox_returnPressed();

    void on_webView_loadStarted();

    void on_webView_loadFinished(bool arg1);

    void on_tabWidget_tabCloseRequested(int index);

    void on_pushButton_2_clicked();

public:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
