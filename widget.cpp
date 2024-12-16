#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btnAdd_clicked()
{
    int zahl1 = 0;
    int zahl2 = 0;
    int zahl3 = 0;
    int summe = 0;
    bool ok = false;
    int base = 10;
    QString ausgabeString;

    zahl1 = ui->spinZahl1->value();
    zahl2 = ui->spinZahl2->value();

    zahl3 = ui->edtAusgabe->text().toInt(&ok, base);

    summe = zahl1 + zahl2;
    summe += zahl3;

    ui->spinZahl2->setValue(summe);

    qDebug() << "hier";

    ausgabeString = QString::number(summe);
    ui->edtAusgabe->setText(ausgabeString);
    ui->edtLog->appendPlainText(QString::number(summe));
}











