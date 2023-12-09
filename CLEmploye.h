#pragma once
#include "CLPersonne.h"

ref class CLEmploye : public CLPersonne
{
private:
    System::String^ nom;
    System::String^ prenom;
    System::String^ adresse;
    System::String^ superieur;
    System::String^ dateEmbauche;

public:
    CLEmploye(System::String^ nom, System::String^ prenom, int age);

    virtual System::String^ GetNom() override;
    virtual void SetNom(System::String^ nom) override;

    virtual System::String^ GetPrenom() override;
    virtual void SetPrenom(System::String^ prenom) override;

    virtual int GetAge() override;
    virtual void SetAge(int age) override;

    virtual System::String^ GetAdresse() override;
    virtual void SetAdresse(System::String^ adresse) override;

    virtual System::String^ GetSuperieur() override;
    virtual void SetSuperieur(System::String^ superieur) override;

    virtual System::String^ GetDateEmbauche() override;
    virtual void SetDateEmbauche(System::String^ dateEmbauche) override;
};
