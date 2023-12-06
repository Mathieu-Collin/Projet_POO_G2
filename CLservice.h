//CLservice.h********************************************************************************
#pragma once
#include "CLmap.h"
#include "CAD.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
		System::String^ sSql;
		
		
	public:
		CLservices(void);
		virtual System::String^ Insert(void);
		virtual System::String^ Delete(void);
		virtual System::String^ Update(void);
		virtual void setId(int);
		virtual int getId(void);
		virtual System::String^ select();
		virtual ~CLservices(void);
		virtual System::String AffichePersonnes();
		virtual void AddPersonne();
		virtual void AffichePersonnesById(System::String^ PersonId);
		virtual void UpdatePersonne();
		virtual void DeletePersonne();
		virtual System::String^ getNom(void);
		virtual System::String^ getPrenom(void);
		virtual void setNom(System::String^);
		virtual void setPrenom(System::String^);
	};
}