#include "hectorcomponent.h"
#include "ui_hectorcomponent.h"

HectorComponent::HectorComponent(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HectorComponent)
{
    ui->setupUi(this);
}

HectorComponent::~HectorComponent()
{
    delete ui;
}

