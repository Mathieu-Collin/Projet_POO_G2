#pragma once
ref class Connect_DB
{
public:
	static void ConnectToDatabase();
	static void CloseConnection();
	static void AddPersonnel(System::String^ Prenom, System::String^ Nom , System::String^Adresse, System::String^Superieur, System::String^ Date_embauche);
	static void DeletePersonnel(int Id_personnel);
	static void UpdatePersonnel(int Id_personnel, System::String^ Prenom, System::String^ Nom, System::String^ Adresse, System::String^ Superieur, System::String^ Date_embauche);
	static void AddClient(System::String^ Prenom, System::String^ Nom, System::String^ Date_Naissance , int nb_achats);
	static void DeleteClient(int Id_client);
	static void UpdateClient(int Id_client, System::String^ Prenom, System::String^ Nom, System::String^ Date_Naissance, int nb_achats);
	static void AddArticle(int Quantite, float Prix_HT, float Prix_Achat, bool reaprovisionnement);
	static void DeleteArticle(int Id_article);
	static void UpdateArticle(int Id_article, int Quantite, float Prix_HT, float Prix_Achat, bool reaprovisionnement);
	static void AddCommande(int Id_client, int Id_article, System::String^ Date_Livraison, System::String^ Date_emission, System::String^ Date_paiement, System::String^ Moyen_paiement, float Solde_Commande, int Quantite);
	static void DeleteCommande(int Id_commande);
	static void UpdateCommande(int Id_commande, int Id_client, int Id_article, System::String^ Date_Livraison, System::String^ Date_emission, System::String^ Date_paiement, System::String^ Moyen_paiement, float Solde_Commande, int Quantite);
	static void AddFacture(int Id_commande, System::String^ Nom_societe, int Nb_Service_Client, System::String^ Lien_logo, float Total_HT, float Total_TTC, float Total_TVA, float Remise);
	static void DeleteFacture(int Id_facture);
	static void UpdateFacture(int Id_facture, int Id_commande, System::String^ Nom_societe, int Nb_Service_Client, System::String^ Lien_logo, float Total_HT, float Total_TTC, float Total_TVA, float Remise);
};
