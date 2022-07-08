#include "youtubetopbar.h"

YoutubeTopBar::YoutubeTopBar(QWidget *parent)
    : QWidget{parent}
{
    this->setWindowTitle("YT Top Bar");
    this->setLayout(mainLayout);
    mainLayout->setMargin(0);
    mainLayout->setSpacing(0);

    mainLayout->addWidget(ToogleLeftPane);
    mainLayout->addWidget(YoutubeHome);
    mainLayout->addWidget(Search);
    mainLayout->addWidget(ToogleDownloadManager);
    mainLayout->addWidget(ToogleSettings);

    ToogleLeftPane->setText("Toogle Left Pane");
    ToogleLeftPane->setStyleSheet("QToolButton{"
                                 "background-color:rgba(0,0,0,0.6);"
                                 "color:white;"
                                 "border:none;"
                                 "margin:5px;"
                                 "padding:10px;"
                                 "}"
                                 "QToolButton::hover{"
                                 "background-color:rgba(255,255,255,0.1);"
                                 "border-radius:5px;"
                                 "}");
    YoutubeHome->setText("Youtube");
    YoutubeHome->setStyleSheet("QToolButton{"
                              "background-color:rgba(0,0,0,0.6);"
                              "color:white;"
                              "border:none;"
                              "margin:5px;"
                              "padding:10px;"
                              "}"
                              "QToolButton::hover{"
                              "background-color:rgba(255,255,255,0.1);"
                              "border-radius:5px;"
                              "}");
    ToogleSettings->setText("Settings");
    ToogleSettings->setStyleSheet("QToolButton{"
                                 "background-color:rgba(0,0,0,0.6);"
                                 "color:white;"
                                 "border:none;"
                                 "margin:5px;"
                                 "padding:10px;"
                                 "}"
                                 "QToolButton::hover{"
                                 "background-color:rgba(255,255,255,0.1);"
                                 "border-radius:5px;"
                                 "}");
    ToogleDownloadManager->setText("Download Manager");
    ToogleDownloadManager->setStyleSheet("QToolButton{"
                                        "background-color:rgba(0,0,0,0.6);"
                                        "color:white;"
                                        "border:none;"
                                        "margin:5px;"
                                        "padding:10px;"
                                        "}"
                                        "QToolButton::hover{"
                                        "background-color:rgba(255,255,255,0.1);"
                                        "border-radius:5px;"
                                        "}");
    Search->setPlaceholderText("Search");
    Search->setStyleSheet("QLineEdit{"
                         "background-color:rgba(0,0,0,0.3);"
                         "border:none;"
                         "margin:5px;"
                         "padding:10px;"
                         "border-radius:5px;"
                         "}"
                         "QLineEdit::hover{"
                         "background-color:rgba(255,255,255,0.1);"
                         "border-radius:5px;"
                         "}");

    QObject::connect(Search, &QLineEdit::textChanged,this,&YoutubeTopBar::ChangeSearchStyleSheet);

}

void YoutubeTopBar::ChangeSearchStyleSheet(){
    if(Search->text().isEmpty()){
        Search->setStyleSheet("QLineEdit{"
                              "background-color:rgba(0,0,0,0.3);"
                              "border:none;"
                              "margin:5px;"
                              "padding:10px;"
                              "border-radius:5px;"
                              "}");
    } else {
        Search->setStyleSheet("QLineEdit{"
                              "background-color:rgba(255,255,255);"
                              "border:none;"
                              "color:black;"
                              "margin:5px;"
                              "padding:10px;"
                              "border-radius:5px;"
                              "}");
    }
}
