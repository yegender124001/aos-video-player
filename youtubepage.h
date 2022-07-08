#ifndef YOUTUBEPAGE_H
#define YOUTUBEPAGE_H

#include <QWidget>
#include "youtubeleftpane.h"
#include "youtubetopbarwrapper.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
class YoutubePage : public QWidget
{
    Q_OBJECT
public:
    explicit YoutubePage(QWidget *parent = nullptr);
    YoutubeLeftPane* leftPane = new YoutubeLeftPane();
    YoutubeTopBarWrapper* topBar = new YoutubeTopBarWrapper();
    QVBoxLayout* mainLayout = new QVBoxLayout();
    QHBoxLayout* bodyLayout = new QHBoxLayout();
    QWidget* SampleWidget = new QWidget();
signals:

};

#endif // YOUTUBEPAGE_H
