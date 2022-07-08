#ifndef YOUTUBETOPBAR_H
#define YOUTUBETOPBAR_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QToolButton>
#include <QObject>
class YoutubeTopBar : public QWidget
{
    Q_OBJECT
public:
    explicit YoutubeTopBar(QWidget *parent = nullptr);
    QHBoxLayout* mainLayout            = new QHBoxLayout();
    QToolButton* ToogleLeftPane        = new QToolButton();
    QToolButton* YoutubeHome           = new QToolButton();
    QToolButton* ToogleDownloadManager = new QToolButton();
    QToolButton* ToogleSettings        = new QToolButton();
    QLineEdit *Search = new QLineEdit();


public slots:
    void ChangeSearchStyleSheet();
signals:

};

#endif // YOUTUBELEFTPANE_H
