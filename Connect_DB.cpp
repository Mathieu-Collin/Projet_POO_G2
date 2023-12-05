#include "Connect_DB.h"
using namespace System;
using namespace System::Data::SqlClient;

static void ConnectToDatabase()
{
    // Connexion à la base de données
    SqlConnection^ connection = gcnew SqlConnection("Data Source=nomServeur;Initial Catalog=nomBaseDeDonnees;User ID=nomUtilisateur;Password=motDePasse");

    try
    {
        // Ouverture de la connexion
        connection->Open();
    }

    catch (Exception^ ex)
    {
        // Gestion des erreurs
        Console::WriteLine("Erreur de connexion : " + ex->Message);
    }
    finally
    {
        // Fermeture de la connexion dans tous les cas
        connection->Close();
    }
}

static void CloseConnection(SqlConnection^ connection)
{
	// Fermeture de la connexion
	connection->Close();
}
