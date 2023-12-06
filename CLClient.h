#pragma once
#include "CLservice.h"

namespace NS_Comp_Client
{
	ref class CLclient : public NS_Comp_Svc::CLservices
	{
	private:
		System::String^ sSql;
		int Id;
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
		System::String^ Nom;
		System::String^ Prenom;
		System::String^ Date_Naissance;
		int Nb_Achats;
		int Nb_Achats = 0;


	public:
		CLclient(void);
		CLclient(System::String^ Nom, System::String^ Prenom, System::String^ Date_Naissance, int nb_achats, int Id)
		~CLclient(void);
		System::String^ Insert() override;
		System::String^ Delete(int Id) override;
		System::String^ Update(int Id)override;
		System::String getId(System::String^ Prenom, System::String^ Nom, System::String^ Date_Naissance, int nb_achats)override;
		System::String^ select()override;
		void SelectById(System::String^ PersonId)override;
		void SelectAll() override;
		System::String^ getNom(int Id)override;
		System::String^ getPrenom(void)override;
		void setNom(System::String^)override;
		void setPrenom(System::String^)override;
		void setDateNaissance(System::String^)override;
	};
}
