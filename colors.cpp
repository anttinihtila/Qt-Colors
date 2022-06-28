#include <QPainter>
#include "colors.h"

Colors::Colors(QWidget* parent)
    : QWidget(parent)
{ }

void Colors::paintEvent(QPaintEvent* e) {

    Q_UNUSED(e);

    doPainting();
}

void Colors::doPainting() {

    QPainter painter(this);
    painter.setPen(QColor("#d4d4d4"));

    painter.setBrush(QBrush("violet"));
    painter.drawRect(10, 15, 90, 60);

    painter.setBrush(QBrush("indigo"));
    painter.drawRect(130, 15, 90, 60);

    painter.setBrush(QBrush("blue"));
    painter.drawRect(250, 15, 90, 60);

    painter.setBrush(QBrush("lightblue"));
    painter.drawRect(10, 105, 90, 60);

    painter.setBrush(QBrush("green"));
    painter.drawRect(130, 105, 90, 60);

    painter.setBrush(QBrush("yellow"));
    painter.drawRect(250, 105, 90, 60);

    painter.setBrush(QBrush("orange"));
    painter.drawRect(10, 195, 90, 60);

    painter.setBrush(QBrush("red"));
    painter.drawRect(130, 195, 90, 60);

    painter.setBrush(QBrush("white"));
    painter.drawRect(250, 195, 90, 60);
}