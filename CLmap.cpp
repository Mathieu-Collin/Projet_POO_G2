//CLmap.CPP*****************************************************************************************
#include "CLmap.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
    return "SELECT [id_client], [nom], [prenom] FROM [Projet].[dbo].[Client]";
}

System::String^ NS_Comp_Mappage::CLmapTB::AfficheTBClient(void)
{
    return "SELECT * FROM [Projet].[dbo].[Client]";
}


System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
    return "INSERT INTO Client (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "');";
}

System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
    // Ajoutez votre logique de suppression ici si nécessaire
    return "";
}

System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
    // Ajoutez votre logique de mise à jour ici si nécessaire
    return "";
}

void NS_Comp_Mappage::CLmapTB::setId(int Id)
{
    this->Id = Id;
}

void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
    this->nom = nom;
}

void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
    this->prenom = prenom;
}

int NS_Comp_Mappage::CLmapTB::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }
