#ifndef LOADWIDGET_H
#define LOADWIDGET_H

#include "customwidget.h"
#include<QMediaPlayer>
namespace Ui {
class LoadWidget;
}

class LoadWidget : public CustomWidget
{
    Q_OBJECT

public:
    explicit LoadWidget(QWidget *parent = 0);
    ~LoadWidget();
    QMediaPlayer*player;
private:
    Ui::LoadWidget *ui;

private slots:
    void SltLoadFinished();
    void SltStartGame();
};


//////////////////////////////////////////////
///
class WidgetGrass : public CustomWidget {
    Q_OBJECT

public:
    explicit WidgetGrass(QWidget *parent = 0);
    ~WidgetGrass();

signals:
    void signalFinished();
private:

    QPixmap pixmapGrass;
    QPixmap pixmapWood;
    QPixmap pixmapCircle;
    QTimer *m_timer;
protected:
    void paintEvent(QPaintEvent *);
};


#endif // LOADWIDGET_H
