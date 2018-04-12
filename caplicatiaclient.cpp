#include "caplicatiaclient.h"
#include "ui_caplicatiaclient.h"

CAplicatiaClient::CAplicatiaClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CAplicatiaClient)
{
    ui->setupUi(this);
}

CAplicatiaClient::~CAplicatiaClient()
{
    delete ui;
}
