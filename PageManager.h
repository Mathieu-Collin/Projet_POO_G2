#pragma once
#include <iostream>

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Collections::Generic;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Description résumée de PageManager
	/// </summary>
	public ref class PageManager : public System::Windows::Forms::Form
	{
	public:
		PageManager(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			ChargerArticles();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~PageManager()
		{
			if (components)
			{
				delete components;
			}
		}




	private: int objetPanier = 0;
	private: System::Windows::Forms::TabPage^ GestionDuPersonnel;
	private: System::Windows::Forms::TabPage^ OngletGestionStocks;
	public: System::Windows::Forms::PictureBox^ pictureBox1;
	private:














	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::RichTextBox^ couleur;

	private: System::Windows::Forms::RichTextBox^ prix_TTC;
	private: System::Windows::Forms::RichTextBox^ description;




	private: System::Windows::Forms::RichTextBox^ nom;





	private:







	public: System::Windows::Forms::TextBox^ Recherche;
	private:
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::TabControl^ OngletsManager;
	private: System::Windows::Forms::Button^ CreerArticle;
	private: System::Windows::Forms::Button^ ModifArticle;
	private: System::Windows::Forms::RichTextBox^ Id;
	private: System::Windows::Forms::RichTextBox^ reference;
	private: System::Windows::Forms::RichTextBox^ prix_achat;
	private: System::Windows::Forms::RichTextBox^ prix_HT;
	private: System::Windows::Forms::RichTextBox^ remise;
	private: System::Windows::Forms::RichTextBox^ taux_TVA;
	private: System::Windows::Forms::RichTextBox^ quantite;
	private: System::Windows::Forms::RichTextBox^ reaprovisionnement;












	public:



































	private:

	private: System::ComponentModel::IContainer^ components;
	public:

	public:

	public:

	private:

	protected:

	protected:






	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code

		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->GestionDuPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->OngletGestionStocks = (gcnew System::Windows::Forms::TabPage());
			this->prix_achat = (gcnew System::Windows::Forms::RichTextBox());
			this->prix_HT = (gcnew System::Windows::Forms::RichTextBox());
			this->remise = (gcnew System::Windows::Forms::RichTextBox());
			this->taux_TVA = (gcnew System::Windows::Forms::RichTextBox());
			this->quantite = (gcnew System::Windows::Forms::RichTextBox());
			this->reaprovisionnement = (gcnew System::Windows::Forms::RichTextBox());
			this->reference = (gcnew System::Windows::Forms::RichTextBox());
			this->Id = (gcnew System::Windows::Forms::RichTextBox());
			this->CreerArticle = (gcnew System::Windows::Forms::Button());
			this->ModifArticle = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->couleur = (gcnew System::Windows::Forms::RichTextBox());
			this->prix_TTC = (gcnew System::Windows::Forms::RichTextBox());
			this->description = (gcnew System::Windows::Forms::RichTextBox());
			this->nom = (gcnew System::Windows::Forms::RichTextBox());
			this->Recherche = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->OngletsManager = (gcnew System::Windows::Forms::TabControl());
			this->OngletGestionStocks->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->OngletsManager->SuspendLayout();
			this->SuspendLayout();
			// 
			// GestionDuPersonnel
			// 
			this->GestionDuPersonnel->Location = System::Drawing::Point(4, 25);
			this->GestionDuPersonnel->Name = L"GestionDuPersonnel";
			this->GestionDuPersonnel->Padding = System::Windows::Forms::Padding(3);
			this->GestionDuPersonnel->Size = System::Drawing::Size(962, 472);
			this->GestionDuPersonnel->TabIndex = 1;
			this->GestionDuPersonnel->Text = L"Gestion du personnel";
			this->GestionDuPersonnel->UseVisualStyleBackColor = true;
			this->GestionDuPersonnel->Click += gcnew System::EventHandler(this, &PageManager::Compte_Click);
			// 
			// OngletGestionStocks
			// 
			this->OngletGestionStocks->AutoScroll = true;
			this->OngletGestionStocks->Controls->Add(this->prix_achat);
			this->OngletGestionStocks->Controls->Add(this->prix_HT);
			this->OngletGestionStocks->Controls->Add(this->remise);
			this->OngletGestionStocks->Controls->Add(this->taux_TVA);
			this->OngletGestionStocks->Controls->Add(this->quantite);
			this->OngletGestionStocks->Controls->Add(this->reaprovisionnement);
			this->OngletGestionStocks->Controls->Add(this->reference);
			this->OngletGestionStocks->Controls->Add(this->Id);
			this->OngletGestionStocks->Controls->Add(this->CreerArticle);
			this->OngletGestionStocks->Controls->Add(this->ModifArticle);
			this->OngletGestionStocks->Controls->Add(this->pictureBox1);
			this->OngletGestionStocks->Controls->Add(this->listView2);
			this->OngletGestionStocks->Controls->Add(this->couleur);
			this->OngletGestionStocks->Controls->Add(this->prix_TTC);
			this->OngletGestionStocks->Controls->Add(this->description);
			this->OngletGestionStocks->Controls->Add(this->nom);
			this->OngletGestionStocks->Controls->Add(this->Recherche);
			this->OngletGestionStocks->Controls->Add(this->listView1);
			this->OngletGestionStocks->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->OngletGestionStocks->Location = System::Drawing::Point(4, 25);
			this->OngletGestionStocks->Name = L"OngletGestionStocks";
			this->OngletGestionStocks->Padding = System::Windows::Forms::Padding(3);
			this->OngletGestionStocks->Size = System::Drawing::Size(962, 472);
			this->OngletGestionStocks->TabIndex = 0;
			this->OngletGestionStocks->Text = L"Gestion des stocks";
			this->OngletGestionStocks->UseVisualStyleBackColor = true;
			this->OngletGestionStocks->Click += gcnew System::EventHandler(this, &PageManager::GestionDuPersonnel_Click);
			// 
			// prix_achat
			// 
			this->prix_achat->Location = System::Drawing::Point(634, 224);
			this->prix_achat->Name = L"prix_achat";
			this->prix_achat->Size = System::Drawing::Size(280, 21);
			this->prix_achat->TabIndex = 20;
			this->prix_achat->Text = L"Prix d\'achat au fournisseur";
			// 
			// prix_HT
			// 
			this->prix_HT->Location = System::Drawing::Point(634, 251);
			this->prix_HT->Name = L"prix_HT";
			this->prix_HT->Size = System::Drawing::Size(280, 26);
			this->prix_HT->TabIndex = 19;
			this->prix_HT->Text = L"Prix HT";
			// 
			// remise
			// 
			this->remise->Location = System::Drawing::Point(634, 283);
			this->remise->Name = L"remise";
			this->remise->Size = System::Drawing::Size(280, 23);
			this->remise->TabIndex = 18;
			this->remise->Text = L"Remise";
			// 
			// taux_TVA
			// 
			this->taux_TVA->Location = System::Drawing::Point(634, 312);
			this->taux_TVA->Name = L"taux_TVA";
			this->taux_TVA->Size = System::Drawing::Size(280, 23);
			this->taux_TVA->TabIndex = 17;
			this->taux_TVA->Text = L"Taux TVA";
			// 
			// quantite
			// 
			this->quantite->Location = System::Drawing::Point(634, 341);
			this->quantite->Name = L"quantite";
			this->quantite->Size = System::Drawing::Size(280, 27);
			this->quantite->TabIndex = 16;
			this->quantite->Text = L"Quantité";
			// 
			// reaprovisionnement
			// 
			this->reaprovisionnement->Location = System::Drawing::Point(634, 374);
			this->reaprovisionnement->Name = L"reaprovisionnement";
			this->reaprovisionnement->Size = System::Drawing::Size(280, 23);
			this->reaprovisionnement->TabIndex = 15;
			this->reaprovisionnement->Text = L"Réaprovisionnement";
			// 
			// reference
			// 
			this->reference->Location = System::Drawing::Point(634, 191);
			this->reference->Name = L"reference";
			this->reference->Size = System::Drawing::Size(280, 27);
			this->reference->TabIndex = 14;
			this->reference->Text = L"Référence";
			// 
			// Id
			// 
			this->Id->Location = System::Drawing::Point(879, 65);
			this->Id->Name = L"Id";
			this->Id->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->Id->Size = System::Drawing::Size(35, 24);
			this->Id->TabIndex = 13;
			this->Id->Text = L"Id";
			// 
			// CreerArticle
			// 
			this->CreerArticle->Location = System::Drawing::Point(311, 39);
			this->CreerArticle->Name = L"CreerArticle";
			this->CreerArticle->Size = System::Drawing::Size(269, 34);
			this->CreerArticle->TabIndex = 12;
			this->CreerArticle->Text = L"Créer un article";
			this->CreerArticle->UseVisualStyleBackColor = true;
			this->CreerArticle->Click += gcnew System::EventHandler(this, &PageManager::CreerArticle_Click);
			// 
			// ModifArticle
			// 
			this->ModifArticle->Location = System::Drawing::Point(662, 412);
			this->ModifArticle->Name = L"ModifArticle";
			this->ModifArticle->Size = System::Drawing::Size(223, 27);
			this->ModifArticle->TabIndex = 11;
			this->ModifArticle->Text = L"Valider les modifications";
			this->ModifArticle->UseVisualStyleBackColor = true;
			this->ModifArticle->Click += gcnew System::EventHandler(this, &PageManager::ModifArticle_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(263, 90);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(349, 315);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// listView2
			// 
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(130, 170);
			this->listView2->MultiSelect = false;
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(53, 103);
			this->listView2->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->listView2->TabIndex = 9;
			this->listView2->Tag = L"listeArticles";
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::List;
			this->listView2->Visible = false;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &PageManager::listView2_SelectedIndexChanged);
			// 
			// couleur
			// 
			this->couleur->Location = System::Drawing::Point(634, 161);
			this->couleur->Name = L"couleur";
			this->couleur->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->couleur->Size = System::Drawing::Size(280, 24);
			this->couleur->TabIndex = 8;
			this->couleur->Text = L"Couleur";
			this->couleur->TextChanged += gcnew System::EventHandler(this, &PageManager::richTextBox5_TextChanged);
			// 
			// prix_TTC
			// 
			this->prix_TTC->Location = System::Drawing::Point(634, 62);
			this->prix_TTC->Name = L"prix_TTC";
			this->prix_TTC->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->prix_TTC->Size = System::Drawing::Size(97, 27);
			this->prix_TTC->TabIndex = 7;
			this->prix_TTC->Text = L"Prix TTC";
			// 
			// description
			// 
			this->description->Location = System::Drawing::Point(634, 95);
			this->description->Name = L"description";
			this->description->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->description->Size = System::Drawing::Size(280, 60);
			this->description->TabIndex = 6;
			this->description->Text = L"Description";
			// 
			// nom
			// 
			this->nom->Location = System::Drawing::Point(634, 26);
			this->nom->Name = L"nom";
			this->nom->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->nom->Size = System::Drawing::Size(280, 30);
			this->nom->TabIndex = 3;
			this->nom->Text = L"Nom article";
			this->nom->TextChanged += gcnew System::EventHandler(this, &PageManager::nom_TextChanged);
			// 
			// Recherche
			// 
			this->Recherche->Location = System::Drawing::Point(21, 51);
			this->Recherche->Name = L"Recherche";
			this->Recherche->Size = System::Drawing::Size(236, 22);
			this->Recherche->TabIndex = 0;
			this->Recherche->Text = L"Rechercher";
			this->Recherche->TextChanged += gcnew System::EventHandler(this, &PageManager::Recherche_TextChanged);
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(21, 79);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(236, 326);
			this->listView1->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->listView1->TabIndex = 4;
			this->listView1->Tag = L"listeArticles";
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::List;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &PageManager::listView1_SelectedIndexChanged);
			// 
			// OngletsManager
			// 
			this->OngletsManager->Controls->Add(this->OngletGestionStocks);
			this->OngletsManager->Controls->Add(this->GestionDuPersonnel);
			this->OngletsManager->Location = System::Drawing::Point(2, 2);
			this->OngletsManager->Name = L"OngletsManager";
			this->OngletsManager->SelectedIndex = 0;
			this->OngletsManager->Size = System::Drawing::Size(970, 501);
			this->OngletsManager->TabIndex = 3;
			// 
			// PageManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(970, 499);
			this->Controls->Add(this->OngletsManager);
			this->Name = L"PageManager";
			this->Text = L"PageManager";
			this->Load += gcnew System::EventHandler(this, &PageManager::PageManager_Load);
			this->OngletGestionStocks->ResumeLayout(false);
			this->OngletGestionStocks->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->OngletsManager->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PageManager_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Compte_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count > 0) {

			ListViewItem^ selectedItem = listView1->SelectedItems[0];

			String^ imagePath = "Images/Preview_Articles/" + selectedItem->Text + ".jpg";

			try {
				pictureBox1->Image = Image::FromFile(imagePath);
			}
			catch (System::IO::FileNotFoundException^) {
				String^ imagePath = "Images/Preview_Articles/Erreur.jpg"; // Image par défaut si l'image n'est pas trouvée
				pictureBox1->Image = Image::FromFile(imagePath);
			}

			try {
				// Charger les informations de l'article
				SqlConnection^ conn = gcnew SqlConnection(connexionBDD);
				SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM Article WHERE nom = @nom", conn);
				cmd->Parameters->AddWithValue("@nom", selectedItem->Text);

				conn->Open();
				SqlDataReader^ reader = cmd->ExecuteReader();

				if (reader->Read()) {
					nom->Text = reader["nom"]->ToString();
					description->Text = reader["description"]->ToString();
					prix_TTC->Text = reader["prix_TTC"]->ToString();
					couleur->Text = reader["couleur"]->ToString();
					Id->Text = reader["id_Article"]->ToString();
					reference->Text = "Référence : " + reader["reference"]->ToString();
					prix_achat->Text = "Prix d'achat au fournisseur : " + reader["prix_achat"]->ToString();
					prix_HT->Text = "Prix HT : " + reader["prix_HT"]->ToString();
					remise->Text = "Remise : " + reader["remise"]->ToString();
					taux_TVA->Text = "Taux TVA : " + reader["taux_TVA"]->ToString();
					quantite->Text = "Quantité : " + reader["quantite"]->ToString();
					reaprovisionnement->Text = "Réaprovisionnement : " + reader["reaprovisionnement"]->ToString();
				}
				reader->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}
		}
		else {
			pictureBox1->Image = nullptr; // Aucun élément sélectionné ou réinitialiser l'image
		}
	}

	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Recherche_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ recherche = Recherche->Text->ToLower();
		listView1->Items->Clear();

		for each (ListViewItem ^ itemOrigine in listView2->Items) {
			if (itemOrigine->SubItems[0]->Text->ToLower()->Contains(recherche)) {
				ListViewItem^ itemClone = dynamic_cast<ListViewItem^>(itemOrigine->Clone());
				listView1->Items->Add(itemClone);
			}
		}
	}
	private: System::Void listView1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void listView2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::String^ connexionBDD = "Server=DYGUERG; Database=Projet; Integrated Security=True;";
		   void ChargerArticles()
		   {
			   SqlConnection^ conn = gcnew SqlConnection(connexionBDD);
			   SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM Article", conn);

			   try {
				   conn->Open();
				   SqlDataReader^ reader = cmd->ExecuteReader();

				   while (reader->Read()) {
					   ListViewItem^ item = gcnew ListViewItem(reader["nom"]->ToString());
					   item->SubItems->Add(reader["nom"]->ToString());

					   // Ajout d'autres items ICI

					   listView1->Items->Add(item);
					   ClonerListViewItems(listView1, listView2);

				   }
				   reader->Close();
			   }
			   catch (Exception^ e) {
				   MessageBox::Show(e->Message);
			   }
			   finally {
				   if (conn->State == ConnectionState::Open)
					   conn->Close();
			   }
		   }

		   void ClonerListViewItems(ListView^ sourceListView, ListView^ destinationListView) {
			   destinationListView->Items->Clear(); // Effacer les éléments existants dans la destination

			   for each (ListViewItem ^ item in sourceListView->Items) {
				   // Créer un nouvel ListViewItem
				   ListViewItem^ newItem = gcnew ListViewItem(item->Text);

				   // Cloner les sous-éléments
				   for each (ListViewItem::ListViewSubItem ^ subItem in item->SubItems) {
					   newItem->SubItems->Add(subItem->Text);
				   }

				   // Ajouter le nouvel élément cloné à la destination ListView
				   destinationListView->Items->Add(newItem);
			   }
		   }

		   void ModifierTextBox(String^ valeurCondition, RichTextBox^ textBoxModif, String^ nomTable) {
			   // Récupèrer la nouvelle chaîne de caractères dans la textBox
			   String^ nomColonne = textBoxModif->Name;
			   MessageBox::Show(nomColonne);
			   String^ nouvelleValeur = textBoxModif->Text;
			   String^ idArticle = Id->Text;

			   String^ query = "UPDATE " + nomTable + " SET " + nomColonne + " = @nouvelleValeur WHERE id_Article = @idArticle";

			   // Créer la connexion et la commande
			   SqlConnection^ conn = gcnew SqlConnection(connexionBDD);
			   SqlCommand^ cmd = gcnew SqlCommand(query, conn);

			   // Ajouter les paramètres à la commande
			   cmd->Parameters->AddWithValue("@nouvelleValeur", nouvelleValeur);
			   cmd->Parameters->AddWithValue("@idArticle", idArticle);

			   try {
				   // Ouvrir la connexion et exécuter la commande
				   conn->Open();
				   int rowsAffected = cmd->ExecuteNonQuery();

				   // Vérifier si la mise à jour a réussi
				   if (rowsAffected > 0) {
					   MessageBox::Show("Mise à jour réussie.");
				   }
				   else {
					   MessageBox::Show("Aucune donnée mise à jour.");
				   }
			   }
			   catch (Exception^ e) {
				   MessageBox::Show("Erreur lors de la mise à jour : " + e->Message);
			   }
			   finally {
				   // Fermer la connexion
				   if (conn->State == ConnectionState::Open)
					   conn->Close();
			   }
		   }

	private: System::Void GestionDuPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ModifArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count > 0) {
			ListViewItem^ selectedItem = listView1->SelectedItems[0];
			String^ nomArticle = selectedItem->Text;
			String^ nomTable = "Article";

			ModifierTextBox(nomArticle, nom, nomTable);
			ModifierTextBox(nomArticle, description, nomTable);
			ModifierTextBox(nomArticle, prix_TTC, nomTable);
			ModifierTextBox(nomArticle, couleur, nomTable);
			ModifierTextBox(nomArticle, reference, nomTable);
			ModifierTextBox(nomArticle, prix_achat, nomTable);
			ModifierTextBox(nomArticle, prix_HT, nomTable);
			ModifierTextBox(nomArticle, remise, nomTable);
			ModifierTextBox(nomArticle, taux_TVA, nomTable);
			ModifierTextBox(nomArticle, quantite, nomTable);
			ModifierTextBox(nomArticle, reaprovisionnement, nomTable);
		}
		else {
			MessageBox::Show("Veuillez modifer un article.");
		}
	}
	private: System::Void nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void CreerArticle_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}