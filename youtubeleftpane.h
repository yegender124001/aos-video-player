#ifndef YOUTUBELEFTPANE_H
#define YOUTUBELEFTPANE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
class YoutubeLeftPane : public QWidget
{
    Q_OBJECT
public:
    explicit YoutubeLeftPane(QWidget *parent = nullptr);
    // Chlildren Containers
    QWidget* Container0 = new QWidget();
    QWidget* Container1 = new QWidget();
    QWidget* Container2 = new QWidget();

    // Layouts
    QVBoxLayout* ParentButtonContainerLayout = new QVBoxLayout();

    //Children Layouts
    QVBoxLayout* Container0Layout = new QVBoxLayout();
    QVBoxLayout* Container1Layout = new QVBoxLayout();
    QVBoxLayout* Container2Layout = new QVBoxLayout();

    //Buttons
    QPushButton* HomeButton = new QPushButton; //container 0 button
    QPushButton* SubscriptionsButton = new QPushButton; //container 0 button

    QPushButton* LibraryButton = new QPushButton; //container 1 button
    QPushButton* HistoryButton = new QPushButton; //container 1 button
    QPushButton* WatchLaterButton = new QPushButton; //container 1 button



signals:

};

#endif // YOUTUBELEFTPANE_H
