#include "CLEmploye.h"

CLEmploye::CLEmploye(System::String^ nom, System::String^ prenom, System::String^Adresse, System::String^ Superieur, System::String^ Date_Embauche)
{
    this->nom = nom;
    this->prenom = prenom;
    this->Adresse = Adresse;
    this->Superieur = Superieur;
    this->Date_Embauche = Date_Embauche;
}

System::String^ CLEmploye::GetNom()
{
    return nom;
}

void CLEmploye::SetNom(System::String^ nom)
{
    this->nom = nom;
}

System::String^ CLEmploye::GetPrenom()
{
    return prenom;
}

void CLEmploye::SetPrenom(System::String^ prenom)
{
    this->prenom = prenom;
}

System::String^ CLEmploye::GetAdresse()
{
	return Adresse;
}

void CLEmploye::SetAdresse(System::String^ Adresse)
{
	this->Adresse = Adresse;
}

System::String^ CLEmploye::GetSuperieur()
{
	return Superieur;
}

void CLEmploye::SetSuperieur(System::String^ Superieur)
{
	this->Superieur = Superieur;
}

System::String^ CLEmploye::GetDateEmbauche()
{
	return Date_Embauche;
}

void CLEmploye::SetDateEmbauche(System::String^ Date_Embauche)
{
	this->Date_Embauche = Date_Embauche;
}

