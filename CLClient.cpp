#include "CLClient.h"

CLClient::CLClient(System::String^ nom, System::String^ prenom, System::String^Date_Naissance)
{
    this->nom = nom;
    this->prenom = prenom;
    this->Date_Naissance = Date_Naissance;
}

System::String^ CLClient::GetNom()
{
    return nom;
}

void CLClient::SetNom(System::String^ nom)
{
    this->nom = nom;
}

System::String^ CLClient::GetPrenom()
{
    return prenom;
}

void CLClient::SetPrenom(System::String^ prenom)
{
    this->prenom = prenom;
}

System::String^ CLClient::GetDateNaissance()
{
    return Date_Naissance;
}

void CLClient::SetAge(int age)
{
    this->age = age;
}
