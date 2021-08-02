#include <QApplication>
#include <QTextStream>
#include "label.h"
#include "slider.h"
#include "combobox.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

//    Label window;
//    Slider window;
    ComboBoxEx window;

    window.resize(300,150);
    window.setWindowTitle("machukhinktato rule the ways");
    window.show();
    return app.exec();
}
