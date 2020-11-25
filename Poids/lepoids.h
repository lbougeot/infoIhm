#ifndef LEPOIDS_H
#define LEPOIDS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LePoids; }
QT_END_NAMESPACE

class LePoids : public QMainWindow
{
    Q_OBJECT

public:
    LePoids(QWidget *parent = nullptr);
    ~LePoids();

private slots:


    void on_pushButtonSuite_clicked();

    void on_pushButtonDevine_clicked();

    void on_pushButtonLorentz_clicked();

    void on_pushButtonAge_clicked();

private:
    void afficherInfos();
    void afficherPoids();
    void afficherPoidsLorentz();
    void afficherPoidsLorentzIdeal();
    double poids;
    double taille;
    QString nom;
    QString prenom;
    int age;
    static const int NBIMC=6;
    static const int NBCORPULENCE=7;
    Ui::LePoids *ui;
};
#endif // LEPOIDS_H
