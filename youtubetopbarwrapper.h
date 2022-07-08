#ifndef YOUTUBETOPBARWRAPPER_H
#define YOUTUBETOPBARWRAPPER_H

#include <QWidget>
#include <QHBoxLayout>
#include "youtubetopbar.h"
class YoutubeTopBarWrapper : public QWidget
{
    Q_OBJECT
public:
    explicit YoutubeTopBarWrapper(QWidget *parent = nullptr);
    YoutubeTopBar* bar = new YoutubeTopBar();
    QHBoxLayout* layout = new QHBoxLayout();
signals:

};

#endif // YOUTUBETOPBARWRAPPER_H
