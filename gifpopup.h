#ifndef GIFPOPUP_H
#define GIFPOPUP_H

#include <QDialog>
#include <string>

namespace Ui {
class gifPopup;
}

class gifPopup : public QDialog
{
    Q_OBJECT

public:
    explicit gifPopup(QWidget *parent = 0);
    ~gifPopup();
signals:
    void gifFileNameEntered(std::string name);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::gifPopup *ui;
};

#endif // GIFPOPUP_H
