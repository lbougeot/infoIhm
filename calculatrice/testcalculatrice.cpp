#include "testcalculatrice.h"
#include "testcalculatrice.h"
#include "ui_testcalculatrice.h"


TestCalculatrice::TestCalculatrice(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TestCalculatrice)
{
    ui->setupUi(this);
    connect(ui->pushButton0,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
    connect(ui->pushButton1,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
   connect(ui->pushButton2,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
   connect(ui->pushButton3,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
   connect(ui->pushButton4,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
   connect(ui->pushButton5,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
    connect(ui->pushButton6,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
    connect(ui->pushButton7,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
    connect(ui->pushButton8,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
    connect(ui->pushButton9,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);

    connect(ui->pushButtonPlus,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
    connect(ui->pushButtonMoins,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
    connect(ui->pushButtonMultiplier,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
    connect(ui->pushButtonDiviser,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
    connect(ui->pushButtonEgal,&QPushButton::clicked,this,&TestCalculatrice::TraiterChiffre);
}

TestCalculatrice::~TestCalculatrice()
{
    delete ui;
}


void TestCalculatrice::TraiterChiffre()
{
    QPushButton *pbouton = static_cast<QPushButton *>(sender());
    QString texteBouton = pbouton->text();
    ui->lineEditAfficheur->insert(texteBouton);
}




void TestCalculatrice::on_pushButton7_clicked()
{

}

void TestCalculatrice::on_pushButton8_clicked()
{

}

void TestCalculatrice::on_pushButton9_clicked()
{

}

void TestCalculatrice::on_pushButton4_clicked()
{

}

void TestCalculatrice::on_pushButton5_clicked()
{

}

void TestCalculatrice::on_pushButton6_clicked()
{

}



void TestCalculatrice::on_pushButton1_clicked()
{

}

void TestCalculatrice::on_pushButton2_clicked()
{

}


void TestCalculatrice::on_pushButton3_clicked()
{

}



void TestCalculatrice::on_pushButton0_clicked()
{

}

void TestCalculatrice::on_pushButtonPlus_clicked()
{

}

void TestCalculatrice::on_pushButtonMoins_clicked()
{

}

void TestCalculatrice::on_pushButtonMultiplier_clicked()
{

}

void TestCalculatrice::on_pushButtonDiviser_clicked()
{

}

void TestCalculatrice::on_pushButtonEgal_clicked()
{

}
