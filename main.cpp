#include <QApplication>
#include <QTextStream>
#include "label.h"
#include "slider.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

//    Label window;
    Slider window;


    window.setWindowTitle("machukhinktato rule the ways");
    window.show();
    return app.exec();
}
