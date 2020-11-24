#ifndef TESTCALCULATRICE_H
#define TESTCALCULATRICE_H

#include <QMainWindow>
#include <QScriptEngine>


QT_BEGIN_NAMESPACE
namespace Ui { class TestCalculatrice; }
QT_END_NAMESPACE

class TestCalculatrice : public QMainWindow
{
    Q_OBJECT

public:
    TestCalculatrice(QWidget *parent = nullptr);
    ~TestCalculatrice();

private slots:
    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton0_clicked();

    void on_pushButtonPlus_clicked();

    void TraiterChiffre();

    void on_pushButtonMoins_clicked();

    void on_pushButtonMultiplier_clicked();

    void on_pushButtonDiviser_clicked();

    void on_pushButtonEgal_clicked();

private:
    Ui::TestCalculatrice *ui;
};
#endif // TESTCALCULATRICE_H
