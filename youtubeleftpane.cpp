#include "youtubeleftpane.h"

YoutubeLeftPane::YoutubeLeftPane(QWidget *parent)
    : QWidget{parent}
{
    QString button_stylesheet = "QPushButton{"
                                "width:180px;"
                                "height:40px;"
                                "background-color:rgba(0,0,0,0);"
                                "border:none;"
                                "font-weight:bold;"
                                "margin-right:20px;"
                                "text-align:left;"
                                "padding-left:20px;"
                                "margin-top:5px;"
                                "margin-bottom:5px;"
                                "}"
                                "QPushButton::hover{"
                                "border-top-right-radius:20px;"
                                "background-color:rgba(255,255,255,0.1);"
                                "border-bottom-right-radius:20px;"
                                "}";
    this->setWindowTitle("YT Left Pane");
    this->setLayout(ParentButtonContainerLayout);

    ParentButtonContainerLayout->addWidget(Container0);
    ParentButtonContainerLayout->addWidget(Container1);
    ParentButtonContainerLayout->addWidget(Container2);
    ParentButtonContainerLayout->addWidget(new QWidget,1);
    ParentButtonContainerLayout->setSpacing(0);
    ParentButtonContainerLayout->setMargin(0);

    Container0->setLayout(Container0Layout);
    Container1->setLayout(Container1Layout);
    Container2->setLayout(Container2Layout);

    Container1->setStyleSheet("border-top:0.5px solid rgba(255,255,255,0.5);border-bottom:0.5px solid rgba(255,255,255,0.5);");

    Container0Layout->addWidget(HomeButton);
    Container0Layout->addWidget(SubscriptionsButton);

    Container1Layout->addWidget(LibraryButton);
    Container1Layout->addWidget(HistoryButton);
    Container1Layout->addWidget(WatchLaterButton);

    HomeButton->setText("Home");
    SubscriptionsButton->setText("Subscriptions");
    LibraryButton->setText("Library");
    HistoryButton->setText("History");
    WatchLaterButton->setText("Watch Later");

    HomeButton->setStyleSheet(button_stylesheet);
    SubscriptionsButton->setStyleSheet(button_stylesheet);
    LibraryButton->setStyleSheet(button_stylesheet);
    HistoryButton->setStyleSheet(button_stylesheet);
    WatchLaterButton->setStyleSheet(button_stylesheet);

    //HomeButton.setToolButtonTextStyle(Qt::AlignRight);

    Container0Layout->setMargin(0);
    Container0Layout->setSpacing(0);
    Container1Layout->setMargin(0);
    Container1Layout->setSpacing(0);
    Container2Layout->setMargin(0);
    Container2Layout->setSpacing(0);
}
