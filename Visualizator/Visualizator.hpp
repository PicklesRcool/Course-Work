#ifndef __VISUALIZATOR_HPP
#define __VISUALIZATOR_HPP

#include <QMainWindow>
#include "Nodes/ElementList.hpp"
#include "Visualizator/ElementWidget.hpp"
#include <QPainter>
#include <QGraphicsScene>

#define START_X  60
#define START_Y  25
#define OFFSET_X_NONRELATED 120
#define OFFSET_X 120
#define OFFSET_Y 85
#define OFFSET_REDUCED_PERC 0.3f


namespace Ui {
    class Visualizator;
}

class Visualizator : public QMainWindow {
    Q_OBJECT
public slots:
    void onWidgetMove( ElementWidget* aWidget, int deltaX, int deltaY );
public:
    explicit Visualizator( ElementList * aElementList, QWidget *parent = 0);
    ~Visualizator();
private:
    Ui::Visualizator *ui; // User interface
    QGraphicsScene * theScene; // Graphics scene used to render vector graphics in background
    std::map<std::string, ElementWidget*> theDrawnWidgetMap;
    void drawElementList(ElementList * aList);
    void drawElementConnections(std::map<std::string, ElementWidget *> aMap);
};

#endif // __VISUALIZATOR_HPP
