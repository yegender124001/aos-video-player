#ifndef YOUTUBEBANNER_H
#define YOUTUBEBANNER_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QPixmap>
#include <QVBoxLayout>
#include <QHBoxLayout>
class YoutubeBanner : public QWidget
{
    Q_OBJECT
public:
    explicit YoutubeBanner(QWidget *parent = nullptr);
    QVBoxLayout* mainLayout = new QVBoxLayout();
    QLabel* devWarning = new QLabel();

signals:

};

#endif // YOUTUBEBANNER_H
