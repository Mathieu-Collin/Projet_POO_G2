#include "CLResponsable.h"

CLResponsable::CLResponsable(System::String^ nom, System::String^ prenom, int age)
{
    this->nom = nom;
    this->prenom = prenom;
    this->age = age;
}

System::String^ CLResponsable::GetNom()
{
    return nom;
}

void CLResponsable::SetNom(System::String^ nom)
{
    this->nom = nom;
}

System::String^ CLResponsable::GetPrenom()
{
    return prenom;
}

void CLResponsable::SetPrenom(System::String^ prenom)
{
    this->prenom = prenom;
}

int CLResponsable::GetAge()
{
    return age;
}

void CLResponsable::SetAge(int age)
{
    this->age = age;
}
