#ifndef CHOOSEOBJECTDIALOG_H
#define CHOOSEOBJECTDIALOG_H

#include <QDialog>

namespace Ui {
class chooseObjectDialog;
}

class chooseObjectDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit chooseObjectDialog(QWidget *parent = 0);
    ~chooseObjectDialog();
    QString getObjectName();
    
private slots:
    void on_insert_clicked();

private:
    Ui::chooseObjectDialog *ui;
    QString objectName;
};

#endif // CHOOSEOBJECTDIALOG_H
