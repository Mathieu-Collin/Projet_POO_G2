#pragma once
#include "CLPersonne.h"

ref class CLEmploye : public CLPersonne
{
private:
    System::String^ nom;
    System::String^ prenom;
    System::String^ Adresse;
    System::String^ Superieur;
    System::String^ Date_Embauche;

public:
    CLEmploye(System::String^ nom, System::String^ prenom, System::String^Adresse, System::String^ Superieur, System::String^ Date_Embauche);

    virtual System::String^ GetNom() override;
    virtual void SetNom(System::String^ nom) override;

    virtual System::String^ GetPrenom() override;
    virtual void SetPrenom(System::String^ prenom) override;

    virtual System::String^ GetAdresse() override;
    virtual void SetAdresse(System::String^ Adresse) override;

    virtual System::String^ GetSuperieur() override;
    virtual void SetSuperieur(System::String^ Superieur) override;

    virtual System::String^ GetDateEmbauche() override;
    virtual void SetDateEmbauche(System::String^ Date_Embauche) override;
};
