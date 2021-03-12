#include "numberbox.h"

NumberBox::NumberBox(QWidget *parent) : QDoubleSpinBox(parent) {
    setFocusPolicy(Qt::StrongFocus);
}

void NumberBox::wheelEvent(QWheelEvent *event) {
    event->ignore();
}