#ifndef __ELEMENTWIDGET_HPP
#define __ELEMENTWIDGET_HPP

#include <QWidget>
#include "Nodes/Element.hpp"
#include <QEvent>
#include <QMouseEvent>

namespace Ui {
    class ElementWidget;
}

class ElementWidget : public QWidget {
    Q_OBJECT

signals:
    void onMouseMove( ElementWidget* aWidget, int deltaX, int deltaY );
public:
    explicit ElementWidget(QWidget *parent = 0);
    ~ElementWidget();
    ElementWidget( Element* aElement, QWidget *parent = 0);
    void setSelected( bool isSelected );
    int getSonNumber();
    void updateUi();
    Element * getPointedElement();
    void setPointedElement( Element * aElement );
    void increaseSons();
private:
    Ui::ElementWidget *ui; // User interface
    Element * theElement; // Pointed element
    int numberOfSons; // Number of son widgets drawn
protected:
    // member variable - flag of click beginning
    bool isMouseClick;
    // Reimplementation processing of mouse events
    void mouseReleaseEvent ( QMouseEvent * e );
    void mousePressEvent ( QMouseEvent * e );
    void mouseMoveEvent( QMouseEvent * e );
};

#endif // __ELEMENTWIDGET_HPP
