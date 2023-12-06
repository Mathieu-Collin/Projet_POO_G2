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
		void CLService(void) { oCad = gcnew NS_Comp_Data::CLcad(); }
		virtual System::Data::DataSet^ SelectAll(System::String^ dataTableName) = 0;
		virtual void Insert(System::String^ nom, System::String^ prenom) = 0;

		virtual System::String^ Delete(void) =0;
		virtual System::String^ Update(void) =0;
		virtual int getId() = 0;
		virtual System::String^ select() = 0;
		virtual ~CLservices(void) = 0;
		virtual void SelectById(System::String^ PersonId) = 0;
		virtual System::String^ getNom(void) = 0;
		virtual System::String^ getPrenom(void) = 0;
		virtual void setNom(System::String^) = 0;
		virtual void setPrenom(System::String^) = 0;
	};
}