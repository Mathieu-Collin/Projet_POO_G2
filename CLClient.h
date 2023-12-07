#pragma once
#include "CLPersonne.h"

ref class CLClient : public CLPersonne
{
private:
    System::String^ nom;
    System::String^ prenom;
    System::String^Date_Naissance;

public:
    CLClient(System::String^ nom, System::String^ prenom, System::String^Date_Naissance);

    virtual System::String^ GetNom() override;
    virtual void SetNom(System::String^ nom) override;

    virtual System::String^ GetPrenom() override;
    virtual void SetPrenom(System::String^ prenom) override;

    virtual System::String^ GetDateNaissance() override;
    virtual void SetDateNaissance(System::String^ Date_Naissance) override;
};
