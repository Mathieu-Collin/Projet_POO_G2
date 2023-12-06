// CLclient.cpp
#include "CLclient.h"
#include "CAD.h"
#include "CLmap.h"

NS_Comp_Client::CLclient::CLclient(void)
{
	this->Nom = "";
	this->Prenom = "";
	this->Date_Naissance = "";
	this->Nb_Achats = 0;
	this->Id = 0;
}

NS_Comp_Client::CLclient::CLclient(System::String^ Nom, System::String^ Prenom, System::String^ Date_Naissance, int nb_achats, int Id)
{
	this->Nom = Nom;
	this->Prenom = Prenom;
	this->Date_Naissance = Date_Naissance;
	this->Nb_Achats = nb_achats;
	this->Id = Id;
}



System::String^ NS_Comp_Client::CLclient::Insert()
{

}

System::String^ NS_Comp_Client::CLclient::Delete(int Id)
{

}

System::String^ NS_Comp_Client::CLclient::Update(int Id)
{

}

System::String NS_Comp_Client::CLclient::getId(System::String^ Prenom, System::String^ Nom, System::String^ Date_Naissance, int nb_achats)
{

}

System::String^ NS_Comp_Client::CLclient::select()
{

}

void NS_Comp_Client::CLclient::SelectById(System::String^ PersonId)
{

}

void NS_Comp_Client::CLclient::SelectAll()
{

}

System::String^ NS_Comp_Client::CLclient::getNom(int Id)
{

}

System::String^ NS_Comp_Client::CLclient::getPrenom(void)
{

}

void NS_Comp_Client::CLclient::setNom(System::String^)
{

}

void NS_Comp_Client::CLclient::setPrenom(System::String^)
{

}

void NS_Comp_Client::CLclient::setDateNaissance(System::String^)
{

}
