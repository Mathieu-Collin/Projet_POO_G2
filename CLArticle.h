#pragma once

ref class CLArticle
{
private:
    int quantite;
    double prixHT;
    bool reaprovisionnement;
    double prixAchat;

public:
    CLArticle(int quantite, double prixHT, bool reaprovisionnement, double prixAchat);

    // Getter et Setter pour la quantit�
    int GetQuantite();
    void SetQuantite(int quantite);

    // Getter et Setter pour le prix HT
    double GetPrixHT();
    void SetPrixHT(double prixHT);

    // Getter et Setter pour le r�approvisionnement
    bool GetReaprovisionnement();
    void SetReaprovisionnement(bool reaprovisionnement);

    // Getter et Setter pour le prix d'achat
    double GetPrixAchat();
    void SetPrixAchat(double prixAchat);
};
