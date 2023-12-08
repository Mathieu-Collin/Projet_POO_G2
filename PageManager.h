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
	public: System::Windows::Forms::RichTextBox^ textBoxCouleur;
	private:
	public: System::Windows::Forms::RichTextBox^ textBoxPrixTTC;
	public: System::Windows::Forms::RichTextBox^ textBoxDescription;
	public: System::Windows::Forms::RichTextBox^ textBoxNom;




	public: System::Windows::Forms::TextBox^ Recherche;
	private:
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::TabControl^ OngletsManager;
	private: System::Windows::Forms::Button^ CreerArticle;
	private: System::Windows::Forms::Button^ ModifArticle;




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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->textBoxCouleur = (gcnew System::Windows::Forms::RichTextBox());
			this->textBoxPrixTTC = (gcnew System::Windows::Forms::RichTextBox());
			this->textBoxDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::RichTextBox());
			this->Recherche = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->OngletsManager = (gcnew System::Windows::Forms::TabControl());
			this->ModifArticle = (gcnew System::Windows::Forms::Button());
			this->CreerArticle = (gcnew System::Windows::Forms::Button());
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
			this->OngletGestionStocks->Controls->Add(this->CreerArticle);
			this->OngletGestionStocks->Controls->Add(this->ModifArticle);
			this->OngletGestionStocks->Controls->Add(this->pictureBox1);
			this->OngletGestionStocks->Controls->Add(this->listView2);
			this->OngletGestionStocks->Controls->Add(this->textBoxCouleur);
			this->OngletGestionStocks->Controls->Add(this->textBoxPrixTTC);
			this->OngletGestionStocks->Controls->Add(this->textBoxDescription);
			this->OngletGestionStocks->Controls->Add(this->textBoxNom);
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
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(263, 79);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(349, 295);
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
			// textBoxCouleur
			// 
			this->textBoxCouleur->Location = System::Drawing::Point(634, 208);
			this->textBoxCouleur->Name = L"textBoxCouleur";
			this->textBoxCouleur->ReadOnly = true;
			this->textBoxCouleur->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->textBoxCouleur->Size = System::Drawing::Size(114, 24);
			this->textBoxCouleur->TabIndex = 8;
			this->textBoxCouleur->Text = L"Couleur";
			this->textBoxCouleur->TextChanged += gcnew System::EventHandler(this, &PageManager::richTextBox5_TextChanged);
			// 
			// textBoxPrixTTC
			// 
			this->textBoxPrixTTC->Location = System::Drawing::Point(634, 90);
			this->textBoxPrixTTC->Name = L"textBoxPrixTTC";
			this->textBoxPrixTTC->ReadOnly = true;
			this->textBoxPrixTTC->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->textBoxPrixTTC->Size = System::Drawing::Size(97, 27);
			this->textBoxPrixTTC->TabIndex = 7;
			this->textBoxPrixTTC->Text = L"Prix TTC";
			// 
			// textBoxDescription
			// 
			this->textBoxDescription->Location = System::Drawing::Point(634, 123);
			this->textBoxDescription->Name = L"textBoxDescription";
			this->textBoxDescription->ReadOnly = true;
			this->textBoxDescription->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->textBoxDescription->Size = System::Drawing::Size(280, 79);
			this->textBoxDescription->TabIndex = 6;
			this->textBoxDescription->Text = L"Description";
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(634, 54);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->ReadOnly = true;
			this->textBoxNom->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->textBoxNom->Size = System::Drawing::Size(280, 30);
			this->textBoxNom->TabIndex = 3;
			this->textBoxNom->Text = L"Nom article";
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
			// ModifArticle
			// 
			this->ModifArticle->Location = System::Drawing::Point(634, 260);
			this->ModifArticle->Name = L"ModifArticle";
			this->ModifArticle->Size = System::Drawing::Size(178, 29);
			this->ModifArticle->TabIndex = 11;
			this->ModifArticle->Text = L"Valider les modifications";
			this->ModifArticle->UseVisualStyleBackColor = true;
			// 
			// CreerArticle
			// 
			this->CreerArticle->Location = System::Drawing::Point(634, 307);
			this->CreerArticle->Name = L"CreerArticle";
			this->CreerArticle->Size = System::Drawing::Size(178, 34);
			this->CreerArticle->TabIndex = 12;
			this->CreerArticle->Text = L"Créer l\'article";
			this->CreerArticle->UseVisualStyleBackColor = true;
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

			// Déterminez l'image à afficher en fonction de selectedItem
			// Par exemple, si vos images sont nommées selon les noms des éléments
			String^ imagePath = "Images/Preview_Articles/" + selectedItem->Text + ".jpg";

			try {
				pictureBox1->Image = Image::FromFile(imagePath);
			}
			catch (System::IO::FileNotFoundException^) {
				String^ imagePath = "Images/Preview_Articles/Erreur.jpg"; // ou une image par défaut si l'image n'est pas trouvée
				pictureBox1->Image = Image::FromFile(imagePath);
			}

			try {
				// Charger les informations de l'article
				SqlConnection^ conn = gcnew SqlConnection(connectionString);
				SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM Presente WHERE nom = @nom", conn);
				cmd->Parameters->AddWithValue("@nom", selectedItem->Text);

				conn->Open();
				SqlDataReader^ reader = cmd->ExecuteReader();

				if (reader->Read()) {
					textBoxNom->Text = reader["nom"]->ToString();
					textBoxDescription->Text = reader["description"]->ToString();
					textBoxPrixTTC->Text = reader["prix_TTC"]->ToString();
					textBoxCouleur->Text = reader["couleur"]->ToString();
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
	private: System::String^ connectionString = "Server=DYGUERG; Database=Projet; Integrated Security=True;";
		   void ChargerArticles()
		   {
			   SqlConnection^ conn = gcnew SqlConnection(connectionString);
			   SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM Presente", conn);

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

	private: System::Void GestionDuPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}