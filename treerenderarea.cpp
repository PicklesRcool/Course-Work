    #include "treerenderarea.h"
#include <QPainter>

TreeRenderArea::TreeRenderArea(QWidget *parent) : QWidget(parent)
{

}

void TreeRenderArea::paintEvent(QPaintEvent */*event*/)
{
    QPainter painter{this};
    painter.setRenderHint(QPainter::Antialiasing);

    QPen pen;

    pen.setBrush(QColor{100, 176, 220});
    pen.setWidth(7);

    painter.setPen(pen);


    painter.drawEllipse(50, 50, 200, 100);
}
