#include "CLManager.h"

CLManager::CLManager(System::String^ nom, System::String^ prenom, int age)
{
    this->nom = nom;
    this->prenom = prenom;
    this->age = age;
}

System::String^ CLManager::GetNom()
{
    return nom;
}

void CLManager::SetNom(System::String^ nom)
{
    this->nom = nom;
}

System::String^ CLManager::GetPrenom()
{
    return prenom;
}

void CLManager::SetPrenom(System::String^ prenom)
{
    this->prenom = prenom;
}

int CLManager::GetAge()
{
    return age;
}

void CLManager::SetAge(int age)
{
    this->age = age;
}
