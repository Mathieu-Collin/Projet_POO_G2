#include "CLEmploye.h"

CLEmploye::CLEmploye(System::String^ nom, System::String^ prenom, int age)
{
	this->nom = nom;
	this->prenom = prenom;
	this-> adresse = adresse;
	this-> superieur = superieur;
	this-> dateEmbauche = dateEmbauche;
}

System::String^ CLEmploye::GetNom()
{
	return this->nom;
}

System::String^ CLEmploye::GetPrenom()
{
	return this->prenom;
}

System::String^ CLEmploye::GetAdresse()
{
	return this->adresse;
}

System::String^ CLEmploye::GetSuperieur()
{
	return this->superieur;
}

System::String^ CLEmploye::GetDateEmbauche()
{
	return this->dateEmbauche;
}

void CLEmploye::SetNom(System::String^ nom)
{
	this->nom = nom;
}

void CLEmploye::SetPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}

void CLEmploye::SetAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}

void CLEmploye::SetSuperieur(System::String^ superieur)
{
	this->superieur = superieur;
}

void CLEmploye::SetDateEmbauche(System::String^ dateEmbauche)
{
	this->dateEmbauche = dateEmbauche;
}

