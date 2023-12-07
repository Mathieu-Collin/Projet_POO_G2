#pragma once
#include "CLPersonne.h"

ref class CLManager : public CLPersonne
{
private:
    System::String^ nom;
    System::String^ prenom;
    int age;

public:
    CLManager(System::String^ nom, System::String^ prenom, int age);

    virtual System::String^ GetNom() override;
    virtual void SetNom(System::String^ nom) override;

    virtual System::String^ GetPrenom() override;
    virtual void SetPrenom(System::String^ prenom) override;

    virtual int GetAge() override;
    virtual void SetAge(int age) override;
};
