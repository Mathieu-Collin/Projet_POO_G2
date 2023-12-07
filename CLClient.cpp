#include "CLClient.h"

CLClient::CLClient(System::String^ nom, System::String^ prenom, int age)
{
    this->nom = nom;
    this->prenom = prenom;
    this->age = age;
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

int CLClient::GetAge()
{
    return age;
}

void CLClient::SetAge(int age)
{
    this->age = age;
}
