// CLclient.cpp
#include "CLclient.h"
#include "CAD.h"
#include "CLmap.h"

NS_Comp_Client::CLclient::CLclient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}

System::String^ Insert(void) {
	return "SELECT [id_client], [nom], [prenom], [date_naissance], [nb_achat] FROM [Projet].[dbo].[Client]";

}

System::String^ Delete(int Id) //Fonction qui supprime la ligne  le contenue de la ligne selectionner
{
	return "DELETE FROM [Projet].[dbo].[Client] WHERE id_client = " + Id;
}

System::String^ getNom(int Id)
{
	return "SELECT [nom] FROM [Projet].[dbo].[Client] WHERE id_client = " + Id;
}

System::String^ getId(System::String^ Prenom, System::String^ Nom, System::String^ Date_Naissance, int nb_achats)//Fonction qui retourne l'id du client à partir de son nom
{
	//trouver le moyen de retourner l'id client sous le bon type
	return  "SELECT [id_client] FROM [Projet].[dbo].[Client] WHERE nom = '" + Nom + "' AND prenom = '" + Prenom + "' AND date_naissance = '" + Date_Naissance + "' AND nb_achat = " + nb_achats;
}



System::String^ Update(int Id_client, System::String^ Prenom, System::String^ Nom, System::String^ Date_Naissance, int nb_achats) {
	return "UPDATE [Projet].[dbo].[Client] SET nom = '" + Nom + "', prenom = '" + Prenom + "', date_naissance = '" + Date_Naissance + "', nb_achat = " + nb_achats + " WHERE id_client = " + Id_client;
}







void NS_Comp_Client::CLclient::AffichePersonnes()
{
	// Implémentation spécifique pour afficher tous les clients
	System::Data::DataSet^ clientsData = selectionnerToutesLesClients();

	// Utiliser les données pour afficher les clients (remplacez cela par votre logique d'affichage)
	// ...

	// Exemple de sortie pour tester
	System::Console::WriteLine("Liste des clients affichée.");
}

void NS_Comp_Client::CLclient::AddPersonne(System::String^ Nom, System::String^ Prenom, System::String^ Date_Naissance, int Nb_Achats)
{

}

void NS_Comp_Client::CLclient::AffichePersonnesById(System::String^ PersonId)
{
	// Implémentation spécifique pour afficher un client par son ID

}

void NS_Comp_Client::CLclient::UpdatePersonne(System::String^ PersonId)
{

}

void NS_Comp_Client::CLclient::DeletePersonne(System::String^ PersonId)
{

}
