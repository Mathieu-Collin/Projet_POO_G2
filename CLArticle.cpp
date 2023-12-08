#include "CLArticle.h"

CLArticle::CLArticle()
{
    // Initialisation des membres par défaut si nécessaire
    idArticle = 0;
    quantite = 0;
    prixHT = 0.0;
    reapprovisionnement = false;
    prixAchat = 0.0;
    nom = "";
    couleur = "";
    reference = "";
    tauxTVA = 0.0;
    prixTTC = 0.0;
    remise = 0.0;
    description = "";
}

CLArticle::CLArticle(int idArticle, int quantite, double prixHT, bool reapprovisionnement, double prixAchat, String^ nom, String^ couleur, String^ reference, double tauxTVA, double prixTTC, double remise, String^ description)
{
	this->idArticle = idArticle;
	this->quantite = quantite;
	this->prixHT = prixHT;
	this->reapprovisionnement = reapprovisionnement;
	this->prixAchat = prixAchat;
	this->nom = nom;
	this->couleur = couleur;
	this->reference = reference;
	this->tauxTVA = tauxTVA;
	this->prixTTC = prixTTC;
	this->remise = remise;
	this->description = description;
}

int CLArticle::GetIdArticle()
{
    return idArticle;
}

void CLArticle::SetIdArticle(int value)
{
    idArticle = value;
}

int CLArticle::GetQuantite()
{
    return quantite;
}

void CLArticle::SetQuantite(int value)
{
    quantite = value;
}

double CLArticle::GetPrixHT()
{
    return prixHT;
}

void CLArticle::SetPrixHT(double value)
{
    prixHT = value;
}

bool CLArticle::GetReapprovisionnement()
{
    return reapprovisionnement;
}

void CLArticle::SetReapprovisionnement(bool value)
{
    reapprovisionnement = value;
}

double CLArticle::GetPrixAchat()
{
    return prixAchat;
}

void CLArticle::SetPrixAchat(double value)
{
    prixAchat = value;
}

String^ CLArticle::GetNom()
{
    return nom;
}

void CLArticle::SetNom(String^ value)
{
    nom = value;
}

String^ CLArticle::GetCouleur()
{
    return couleur;
}

void CLArticle::SetCouleur(String^ value)
{
    couleur = value;
}

String^ CLArticle::GetReference()
{
    return reference;
}

void CLArticle::SetReference(String^ value)
{
    reference = value;
}

double CLArticle::GetTauxTVA()
{
    return tauxTVA;
}

void CLArticle::SetTauxTVA(double value)
{
    tauxTVA = value;
}

double CLArticle::GetPrixTTC()
{
    return prixTTC;
}

void CLArticle::SetPrixTTC(double value)
{
    prixTTC = value;
}

double CLArticle::GetRemise()
{
    return remise;
}

void CLArticle::SetRemise(double value)
{
    remise = value;
}

String^ CLArticle::GetDescription()
{
    return description;
}

void CLArticle::SetDescription(String^ value)
{
    description = value;
}
