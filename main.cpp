#include <QApplication>
#include "colors.h"

int main(int argc, char* argv[]) {

    QApplication app(argc, argv);

    Colors window;

    window.resize(360, 280);
    window.setWindowTitle("Colors");
    window.show();
    return app.exec();
}