#include "CLEmploye.h"

CLEmploye::CLEmploye(System::String^ nom, System::String^ prenom, int age)
{
    this->nom = nom;
    this->prenom = prenom;
    this->age = age;
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
