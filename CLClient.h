//CLClient.h********************************************************************************
#pragma once
#include "CLmap.h"
#include "CAD.h"

namespace NS_Comp_Client
{
	ref class CLClient
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLClient(void);
		System::Data::DataSet^ AfficherToutClient(System::String^);
		void ajouterUnePersonne(System::String^, System::String^);
	};
}