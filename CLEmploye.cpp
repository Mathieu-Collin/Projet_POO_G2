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

int CLEmploye::GetAge()
{
    return age;
}

void CLEmploye::SetAge(int age)
{
    this->age = age;
}
