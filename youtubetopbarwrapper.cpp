#include "youtubetopbarwrapper.h"

YoutubeTopBarWrapper::YoutubeTopBarWrapper(QWidget *parent)
    : QWidget{parent}
{
    this->setLayout(layout);
    layout->setMargin(0);
    layout->setSpacing(0);
    layout->addWidget(bar);
}
