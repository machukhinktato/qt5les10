#pragma once
#include <QWidget>
#include <QSpinBox>

class Spinbox : public QWidget {
Q_OBJECT

public:
    Spinbox(QWidget *parent=nullptr);

private:
    QSpinBox *spinbox;
};