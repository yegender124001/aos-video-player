#include "mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("Video Player");
    this->setLayout(mainLayout);
    mainLayout->setMargin(0);
    mainLayout->setSpacing(0);
    mainLayout->addWidget(youtubePage);
    this->setAttribute( Qt::WA_TranslucentBackground, true );
}
MainWindow::~MainWindow()
{

}
