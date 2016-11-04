#ifndef NEWPROJECTDIALOG_H
#define NEWPROJECTDIALOG_H

#include <QDialog>

namespace Ui {
class NewProjectDialog;
}

class NewProjectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewProjectDialog(QWidget *parent = 0);
    ~NewProjectDialog();
signals:
    void createNewProj(int pixSize);
public slots:
    void onUpdateSize();
private slots:
    void on_buttonBox_accepted();

private:
    Ui::NewProjectDialog *ui;
    int size;
};

#endif // NEWPROJECTDIALOG_H
