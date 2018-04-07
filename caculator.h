#ifndef CACULATOR_H
#define CACULATOR_H

#include <QDialog>
#include <QString>
#include "model.h"

namespace Ui {
class caculator;
}

class caculator : public QDialog
{
    Q_OBJECT

public:
    explicit caculator(QWidget *parent = 0);
    ~caculator();

private slots:
    void getBtn0();
    void getBtn1();
    void getBtn2();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_plus_clicked();

    void on_btn_minus_clicked();

    void on_btn_by_clicked();

    void on_btn_divide_clicked();

    void on_btn_equal_clicked();

    void on_btn_clear_clicked();

private:
    Ui::caculator *ui;
    QString temp;
    model *mode;
};

#endif // CACULATOR_H
