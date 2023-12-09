#include "CLClient.h"

#include "CLClient.h"

CLClient::CLClient()
{
	this->nom = "";
	this->prenom = "";
	this->Date_Naissance = "";
	this->Nb_Achtats = 0;
	this->mdp = "";
}

CLClient::CLClient(System::String^ nom, System::String^ prenom, System::String^ Date_Naissance, System::String^mdp)
{
    this->nom = nom;
    this->prenom = prenom;
    this-> Date_Naissance = Date_Naissance;
    this->mdp = mdp;
    this->Nb_Achtats = Nb_Achtats;
    
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

void CLClient::SetDateNaissance(System::String^ Date_Naissance)
{
	this->Date_Naissance = Date_Naissance;
}

int CLClient::GetNbAchtats()
{
	return Nb_Achtats;
}

void CLClient::SetNbAchtats(int Nb_Achtats)
{
	this->Nb_Achtats = Nb_Achtats;
}

System::String^ CLClient::GetMdp()
{
	return mdp;
}

void CLClient::SetMdp(System::String^ mdp)
{
	this->mdp = mdp;
}