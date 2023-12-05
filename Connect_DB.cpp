#include "Connect_DB.h"
using namespace System;
using namespace System::Data::SqlClient;

void ConnectToDatabase()
{
    // Connexion � la base de donn�es
    SqlConnection^ connection = gcnew SqlConnection("Data Source=PC_MATHIEU;Initial Catalog=Projet;User ID=Test;Password=123");

    try
    {
        // Ouverture de la connexion
        connection->Open();

        // Ex�cution d'une requ�te (remplacez la requ�te par la v�tre)
        String^ query = "SELECT * FROM NomTable";
        SqlCommand^ command = gcnew SqlCommand(query, connection);
        SqlDataReader^ reader = command->ExecuteReader();

        // Traitement des r�sultats
        while (reader->Read())
        {
            // Traitement des donn�es lues depuis la base de donn�es
            // Par exemple : Console::WriteLine(reader->GetString(0));
        }

        // Fermeture du lecteur et de la connexion
        reader->Close();
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
