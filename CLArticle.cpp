#include "CLArticle.h"

CLArticle::CLArticle(int quantite, double prixHT, bool reaprovisionnement, double prixAchat)
{
    this->quantite = quantite;
    this->prixHT = prixHT;
    this->reaprovisionnement = reaprovisionnement;
    this->prixAchat = prixAchat;
}

// Implémentation des getters et setters
int CLArticle::GetQuantite()
{
    return quantite;
}

void CLArticle::SetQuantite(int quantite)
{
    this->quantite = quantite;
}

double CLArticle::GetPrixHT()
{
    return prixHT;
}

void CLArticle::SetPrixHT(double prixHT)
{
    this->prixHT = prixHT;
}

bool CLArticle::GetReaprovisionnement()
{
    return reaprovisionnement;
}

void CLArticle::SetReaprovisionnement(bool reaprovisionnement)
{
    this->reaprovisionnement = reaprovisionnement;
}

double CLArticle::GetPrixAchat()
{
    return prixAchat;
}

void CLArticle::SetPrixAchat(double prixAchat)
{
    this->prixAchat = prixAchat;
}
