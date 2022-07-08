#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QVBoxLayout>
#include "youtubepage.h"
#include <QWidget>
#include <pthread.h>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVBoxLayout* mainLayout = new QVBoxLayout();
    YoutubePage* youtubePage = new YoutubePage();
};
#endif // MAINWINDOW_H
