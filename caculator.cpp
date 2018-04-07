#include "caculator.h"
#include "ui_caculator.h"
#include "model.h"
#include <QString>

caculator::caculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::caculator)
{
    ui->setupUi(this);
    this->temp = "";
    this->mode = new model;
    connect(this->ui->btn_0, SIGNAL(clicked(bool)), this, SLOT(getBtn0()));
    connect(this->ui->btn_1, SIGNAL(clicked(bool)), this, SLOT(getBtn1()));
    connect(this->ui->btn_2, SIGNAL(clicked(bool)), this, SLOT(getBtn2()));
}

caculator::~caculator()
{
    delete ui;
}

void caculator::getBtn0(){
    if(this->temp != ""){
        this->temp += this->ui->btn_0->text();
        this->ui->lbl_display->setText(this->temp);
    }
}

void caculator::getBtn1(){
    this->temp += this->ui->btn_1->text();
    this->ui->lbl_display->setText(this->temp);
}

void caculator::getBtn2(){
    this->temp += this->ui->btn_2->text();
    this->ui->lbl_display->setText(this->temp);
}

void caculator::on_btn_3_clicked()
{
    this->temp += this->ui->btn_3->text();
    this->ui->lbl_display->setText(this->temp);
}

void caculator::on_btn_4_clicked()
{
    this->temp += this->ui->btn_4->text();
    this->ui->lbl_display->setText(this->temp);
}

void caculator::on_btn_5_clicked()
{
    this->temp += this->ui->btn_5->text();
    this->ui->lbl_display->setText(this->temp);
}

void caculator::on_btn_6_clicked()
{
    this->temp += this->ui->btn_6->text();
    this->ui->lbl_display->setText(this->temp);
}

void caculator::on_btn_7_clicked()
{
    this->temp += this->ui->btn_7->text();
    this->ui->lbl_display->setText(this->temp);
}

void caculator::on_btn_8_clicked()
{
    this->temp += this->ui->btn_8->text();
    this->ui->lbl_display->setText(this->temp);
}

void caculator::on_btn_9_clicked()
{
    this->temp += this->ui->btn_9->text();
    this->ui->lbl_display->setText(this->temp);
}

void caculator::on_btn_plus_clicked()
{
    int num = this->temp.toInt();
    this->mode->setNum1(num);
    this->temp = "";
    QString flag = this->ui->btn_plus->text();
    this->mode->setFlag(flag);
}

void caculator::on_btn_minus_clicked()
{
    int num = this->temp.toInt();
    this->mode->setNum1(num);
    this->temp = "";
    QString flag = this->ui->btn_minus->text();
    this->mode->setFlag(flag);
}

void caculator::on_btn_by_clicked()
{
    int num = this->temp.toInt();
    this->mode->setNum1(num);
    this->temp = "";
    QString flag = this->ui->btn_by->text();
    this->mode->setFlag(flag);
}

void caculator::on_btn_divide_clicked()
{
    int num = this->temp.toInt();
    this->mode->setNum1(num);
    this->temp = "";
    QString flag = this->ui->btn_divide->text();
    this->mode->setFlag(flag);
}

void caculator::on_btn_equal_clicked()
{
    int num  = this->temp.toInt();
    this->mode->setNum2(num);
    QString result = this->mode->doExpr();
    this->ui->lbl_display->setText(result);
    this->temp = "";
}

void caculator::on_btn_clear_clicked()
{
    this->temp = "";
    this->ui->lbl_display->setText("0");
}
