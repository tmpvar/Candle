#ifndef NUMBERBOX_H
#define NUMBERBOX_H

#include <QWidget>
#include <QDoubleSpinBox>
#include <QWheelEvent>
#include "widget.h"

class NumberBox : public QDoubleSpinBox {
    Q_OBJECT
    public:
        explicit NumberBox(QWidget *parent = 0);

    protected:
        void wheelEvent(QWheelEvent *event);
        QAbstractSpinBox::StepEnabled stepEnabled() {
            return QAbstractSpinBox::StepNone;
        }
        void stepBy(int steps) {
            return;
        }
};

#endif