#pragma once

using namespace System;

ref class CLArticle
{
private:
    int idArticle;
    int quantite;
    double prixHT;
    bool reapprovisionnement;
    double prixAchat;
    String^ nom;
    String^ couleur;
    String^ reference;
    double tauxTVA;
    double prixTTC;
    double remise;
    String^ description;

public:
    CLArticle();
CLArticle(int idArticle, int quantite, double prixHT, bool reapprovisionnement, double prixAchat, String^ nom, String^ couleur, String^ reference, double tauxTVA, double prixTTC, double remise, String^ description);

    int GetIdArticle();
    void SetIdArticle(int value);

    int GetQuantite();
    void SetQuantite(int value);

    double GetPrixHT();
    void SetPrixHT(double value);

    bool GetReapprovisionnement();
    void SetReapprovisionnement(bool value);

    double GetPrixAchat();
    void SetPrixAchat(double value);

    String^ GetNom();
    void SetNom(String^ value);

    String^ GetCouleur();
    void SetCouleur(String^ value);

    String^ GetReference();
    void SetReference(String^ value);

    double GetTauxTVA();
    void SetTauxTVA(double value);

    double GetPrixTTC();
    void SetPrixTTC(double value);

    double GetRemise();
    void SetRemise(double value);

    String^ GetDescription();
    void SetDescription(String^ value);
};
