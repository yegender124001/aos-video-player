#include "youtubebanner.h"

YoutubeBanner::YoutubeBanner(QWidget *parent)
    : QWidget{parent}
{
    this->setWindowTitle("Youtube Banner");
    this->setStyleSheet("background-color:red");
    devWarning->setText("<h1 align='center'>NOTE! THIS SECTION IS UNDER DEVELOPMENT</h1>");
    this->setLayout(mainLayout);
    mainLayout->addWidget(devWarning);
}
