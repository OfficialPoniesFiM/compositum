#include "compositummain.h"
#include "ui_compositummain.h"

compositummain::compositummain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::compositummain)
{
    ui->setupUi(this);
}

compositummain::~compositummain()
{
    delete ui;
}
