#include "lepoids.h"
#include "ui_lepoids.h"


LePoids::LePoids(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LePoids)
{
    ui->setupUi(this);
}

LePoids::~LePoids()
{
    delete ui;
}

void LePoids::afficherInfos()
{
    double imcs[NBIMC] = {16.5, 18.5, 25, 30, 35, 40};
    QString corpulences[NBCORPULENCE] = {"Famine", "Maigreur", "Normale", "Surpoids", "Obésité modérée", "Obésité sévère", "Obésité morbide"};
    double imc=0;
    // initialisation de poids, taille, âge, nom et prenom
    poids=ui->doubleSpinBoxPoids->value();
    taille=ui->doubleSpinBoxTaille->value();
    age=ui->spinBoxAge->value();
    nom=ui->lineEditNom->text();
    prenom=ui->lineEditPrenom->text();

    // affichage message de bienvenue
    ui->textEditAfficheur->setText("Bonjour");
    // calcul de l'imc
    imc = poids / (taille*taille);
    // affichage de l'imc
    ui->textEditAfficheur->append("Votre indice de masse corporel est de : "+QString::number(imc));
    int indiceCorpulence = 0;
    for (int i = 0; i < NBIMC - 1; i++) {
        if (imc > imcs[i] && imc <= imcs[i + 1]) {
            indiceCorpulence = i + 1;
        }
    }
    // cas extreme
    if (imc < 16.5) {
        indiceCorpulence = 0;
    }
    if (imc > 40) {
       indiceCorpulence = NBCORPULENCE - 1;
    }
    // affichage de la corpulence: corpulences[indiceCorpulence]
    ui->textEditAfficheur->append("Votre corpulence est qualifiée de : "+corpulences[indiceCorpulence]);
}

void LePoids::afficherPoids()
{
    double poidsIdeal = 0;
    if (ui->radioButtonFemme->isChecked()) {
        poidsIdeal = 45.5 + 2.3 * (taille / 0.0254 - 60.0);
    }
    if (ui->radioButtonHomme->isChecked()) {
        poidsIdeal = 50.0 + 2.3 * (taille / 0.0254 - 60.0);
    }
    if (poidsIdeal > 0) {
        ui->textEditAfficheur->append("\nVotre poids ideal avec la formule de devine : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEditAfficheur->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
          ui->textEditAfficheur->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }
}

void LePoids::afficherPoidsLorentz()
{
    double poidsIdeal = 0;
    if (ui->radioButtonFemme->isChecked()) {
        poidsIdeal = taille*100-100-((taille*100-150)/2,5);
    }
    if (ui->radioButtonHomme->isChecked()) {
        poidsIdeal = taille*100-100-((taille*100-150)/4);
    }
    if (poidsIdeal > 0) {
        ui->textEditAfficheur->append("\nVotre poids ideal avec la formule de lorentz : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEditAfficheur->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
          ui->textEditAfficheur->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }
}

void LePoids::afficherPoidsLorentzIdeal()
{
    double poidsIdeal = 0;
    if (ui->radioButtonFemme->isChecked()) {
        poidsIdeal = 50+(taille*100-150)/4+(age-20)/4 ;
    }
    if (ui->radioButtonHomme->isChecked()) {
        poidsIdeal = 50+(taille*100-150)/4+(age-20)/4 ;
    }
    if (poidsIdeal > 0) {
        ui->textEditAfficheur->append("\nVotre poids ideal avec la formule de lorentz : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEditAfficheur->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
          ui->textEditAfficheur->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }
}



void LePoids::on_pushButtonSuite_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
    afficherInfos();
}


void LePoids::on_pushButtonDevine_clicked()
{
    afficherPoids();
}

void LePoids::on_pushButtonLorentz_clicked()
{
    afficherPoidsLorentz();
}

void LePoids::on_pushButtonAge_clicked()
{
    afficherPoidsLorentzIdeal();
}
