#ifndef COMPOSITUMMAIN_H
#define COMPOSITUMMAIN_H

#include <QMainWindow>

namespace Ui {
class compositummain;
}

class compositummain : public QMainWindow
{
    Q_OBJECT

public:
    explicit compositummain(QWidget *parent = 0);
    ~compositummain();

private:
    Ui::compositummain *ui;
};

#endif // COMPOSITUMMAIN_H
