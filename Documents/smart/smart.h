#ifndef SMART_H
#define SMART_H

#include <QMainWindow>

namespace Ui {
class smart;
}

class smart : public QMainWindow
{
    Q_OBJECT

public:
    explicit smart(QWidget *parent = 0);
    ~smart();

private:
    Ui::smart *ui;
};

private slots:

    void showTime();


#endif // SMART_H
