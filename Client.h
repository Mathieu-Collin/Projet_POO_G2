#pragma once
ref class Client
{
public:
	Client();
	~Client();
	static System::Data::DataSet^ GetClientById(int Id_client);
	static System::Data::DataSet^ GetAllClients();
	static void AddClient(System::String^ Prenom, System::String^ Nom, System::String^ Date_Naissance, int nb_achats);
	static void DeleteClient(int Id_client);
	static void UpdateClient(int Id_client, System::String^ Prenom, System::String^ Nom, System::String^ Date_Naissance, int nb_achats);
};