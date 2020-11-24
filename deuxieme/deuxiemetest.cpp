#include "deuxiemetest.h"
#include "ui_deuxiemetest.h"

deuxiemeTest::deuxiemeTest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::deuxiemeTest)
{
    ui->setupUi(this);
}

deuxiemeTest::~deuxiemeTest()
{
    delete ui;
}

