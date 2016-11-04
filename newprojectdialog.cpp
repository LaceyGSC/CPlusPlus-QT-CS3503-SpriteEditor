#include "newprojectdialog.h"
#include "ui_newprojectdialog.h"

NewProjectDialog::NewProjectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewProjectDialog)
{
    ui->setupUi(this);
    // set the default size to be 10px
    size = 10;

    // populate the combo box
    ui->sizeComboBox->addItem("10x10");
    ui->sizeComboBox->addItem("30x30");
    ui->sizeComboBox->addItem("50x50");
    ui->sizeComboBox->addItem("100x100");

    // make a connection to changes in the values
    connect(ui->sizeComboBox, SIGNAL(activated(int)), this, SLOT(onUpdateSize()));
}

NewProjectDialog::~NewProjectDialog()
{
    delete ui;
}

void NewProjectDialog::onUpdateSize()
{
    // update size variable
    int pixSize = ui->sizeComboBox->currentIndex();
    switch (pixSize)
    {
      case 0:
         size = 10;
         break;
      case 1:
         size = 30;
         break;
      case 2:
         size = 50;
         break;
      case 3:
         size = 100;
         break;
   }
}

void NewProjectDialog::on_buttonBox_accepted()
{
    emit createNewProj(size);
    this->close();
}
