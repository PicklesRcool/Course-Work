#ifndef TREERENDERAREA_H
#define TREERENDERAREA_H

#include <QWidget>

class TreeRenderArea : public QWidget
{
public:
    TreeRenderArea(QWidget *parent);

protected:
    void paintEvent(QPaintEvent */*event*/) override;
};

#endif // TREERENDERAREA_H
