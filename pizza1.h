#ifndef PIZZA1_H
#define PIZZA1_H

#include <QDialog>

namespace Ui {
class pizza1;
}

class pizza1 : public QDialog
{
    Q_OBJECT

public:
    explicit pizza1(QWidget *parent = nullptr);
    ~pizza1();

private:
    Ui::pizza1 *ui;
};

#endif // PIZZA1_H
