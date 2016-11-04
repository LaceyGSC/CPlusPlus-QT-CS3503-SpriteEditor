#include "gifpopup.h"
#include "ui_gifpopup.h"
#include <string>

gifPopup::gifPopup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gifPopup)
{
    ui->setupUi(this);
}

gifPopup::~gifPopup()
{
    delete ui;
}

void gifPopup::on_buttonBox_accepted()
{
    std::string name = ui->gifFileNameBox->text().toStdString();
    if(name.empty())
    {
        emit gifFileNameEntered("untitled");
    }
    else
    {
        emit gifFileNameEntered(name);
    }
    this->close();
}
