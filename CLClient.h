#pragma once
#include "CLservice.h"

namespace NS_Comp_Client
{
	ref class CLclient : public NS_Comp_Svc::CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
		System::String^ Nom;
		System::String^ Prenom;
		System::String^ Date_Naissance;
		int Nb_Achats;

	public:
		CLclient(void);
		~CLclient(void);
		System::String^ Insert(void) override;
		System::String^ Delete(int Id) override;
		System::String^ Update(int Id)override;
		void setId(int)override;
		System::String getId(System::String^Nom,System::String^Prenom, )override;
		System::String^ select()override;
		System::String AffichePersonnes()override;
		void AddPersonne()override;
		void AffichePersonnesById(System::String^ PersonId)override;
		void UpdatePersonne()override;
		System::String^ getNom(int Id)override;
		System::String^ getPrenom(void)override;
		void setNom(System::String^)override;
		void setPrenom(System::String^)override;
		void setDateNaissance(System::String^)override;

		// Méthode pour afficher tous les clients
		virtual void AffichePersonnes() override;

		// Méthode pour ajouter un nouveau client
		virtual void AddPersonne(System::String ^Nom, System::String^Prenom, System::String^Date_Naissance, int Nb_Achats) override;

		// Méthode pour afficher un client par son ID
		virtual void AffichePersonnesById(System::String^ PersonId) override;

		// Méthode pour mettre à jour un client
		virtual void UpdatePersonne(System::String^ PersonId) override;

		// Méthode pour supprimer un client
		virtual void DeletePersonne(System::String^ PersonId) override;
	};
}
