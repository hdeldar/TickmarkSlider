#ifndef SLIDER_H
#define SLIDER_H

#include <QSlider>

class Slider : public QSlider
{
   Q_OBJECT

public:
    Slider(QWidget *parent);
    ~Slider();

private:
   void paintEvent(QPaintEvent *e);

private:
   int m_firstWidth = 0;
};

#endif // SLIDER_H
