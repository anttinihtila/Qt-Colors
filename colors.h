#pragma once

#include <QWidget>

class Colors : public QWidget {

public:
    Colors(QWidget* parent = 0);

protected:
    void paintEvent(QPaintEvent* e);

private:
    void doPainting();
};