#ifndef TICKMARKSLIDER_H
#define TICKMARKSLIDER_H

#include <QtWidgets/QMainWindow>
#include "ui_tickmarkslider.h"

class TickmarkSlider : public QMainWindow
{
    Q_OBJECT

public:
    TickmarkSlider(QWidget *parent = 0);
    ~TickmarkSlider();

private:
    Ui::TickmarkSliderClass ui;
};

#endif // TICKMARKSLIDER_H
