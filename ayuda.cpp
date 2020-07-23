#include "ayuda.h"
#include "ui_ayuda.h"

Ayuda::Ayuda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ayuda)
{
    ui->setupUi(this);
    connect(ui->btnSalir, SIGNAL(clicked()), this, SLOT(close()));
}

Ayuda::~Ayuda()
{
    delete ui;
}
