#include "youtubepage.h"

YoutubePage::YoutubePage(QWidget *parent)
    : QWidget{parent}
{
    this->setLayout(mainLayout);
    mainLayout->addWidget(topBar);
    mainLayout->setMargin(0);
    mainLayout->setSpacing(0);
    mainLayout->addLayout(bodyLayout,1);
    bodyLayout->addWidget(leftPane);
    leftPane->setMinimumWidth(200);
    this->setStyleSheet("background-color:rgba(0,0,0,0.6);color:white;");
    bodyLayout->addWidget(SampleWidget,1);
    SampleWidget->setStyleSheet("");

    //Some Backed
    YoutubeTopBar::YoutubeTopBar::ToogleLeftPanes;
}
