#pragma once
#include "CLPersonne.h"

ref class CLClient : public CLPersonne
{
private:
    System::String^ nom;
    System::String^ prenom;
    System::String^ Date_Naissance;
    System::String^ mdp;
    int Nb_Achtats;

public:
    CLClient();
    CLClient(System::String^ nom, System::String^ prenom, System::String^ Date_Naissance, System::String^mdp);

    System::String^ GetNom() override;
    void SetNom(System::String^ nom) override;

    System::String^ GetPrenom() override;
    void SetPrenom(System::String^ prenom) override;

    System::String^ GetDateNaissance() ;
    void SetDateNaissance(System::String^ Date_Naissance) ;

	int GetNbAchtats();
	void SetNbAchtats(int Nb_Achtats);

    System::String^ CLClient::GetMdp();
    void CLClient::SetMdp(System::String^ mdp);

};
