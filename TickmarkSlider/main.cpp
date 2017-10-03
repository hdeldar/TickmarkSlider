#include "tickmarkslider.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TickmarkSlider w;
    w.show();
    return a.exec();
}
