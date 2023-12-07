#pragma once
ref class CLPersonne abstract
{
public:
    virtual System::String^ GetNom() abstract;
    virtual void SetNom(System::String^ nom) abstract;

    virtual System::String^ GetPrenom() abstract;
    virtual void SetPrenom(System::String^ prenom) abstract;

    virtual int GetAge() abstract;
    virtual void SetAge(int age) abstract;
};
