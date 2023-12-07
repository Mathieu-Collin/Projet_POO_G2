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
	/// Description résumée de PageClient
	/// </summary>
	public ref class PageClient : public System::Windows::Forms::Form
	{
	public:
		PageClient(void)
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
		~PageClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ OngletsClient;
	private: System::Windows::Forms::TabPage^ Commande;
	private: System::Windows::Forms::TabPage^ Compte;
	private: System::Windows::Forms::TabPage^ Panier;
	private: int objetPanier = 0;
	public: System::Windows::Forms::TextBox^ Recherche;


	private: System::Windows::Forms::RichTextBox^ textBoxNom;



	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::RichTextBox^ textBoxCouleur;

	private: System::Windows::Forms::RichTextBox^ textBoxPrixTTC;

	private: System::Windows::Forms::RichTextBox^ textBoxDescription;



	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom;
	private: System::Windows::Forms::DataGridViewImageColumn^ Image;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Prix_TTC;
	private: System::Windows::Forms::DataGridViewButtonColumn^ RetirerArticle;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxModifPrenom;
	private: System::Windows::Forms::TextBox^ textBoxModifDate;

	private: System::Windows::Forms::TextBox^ textBoxModifNom;

















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
			this->OngletsClient = (gcnew System::Windows::Forms::TabControl());
			this->Commande = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->textBoxCouleur = (gcnew System::Windows::Forms::RichTextBox());
			this->textBoxPrixTTC = (gcnew System::Windows::Forms::RichTextBox());
			this->textBoxDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->textBoxNom = (gcnew System::Windows::Forms::RichTextBox());
			this->Recherche = (gcnew System::Windows::Forms::TextBox());
			this->Compte = (gcnew System::Windows::Forms::TabPage());
			this->Panier = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Image = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->Prix_TTC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RetirerArticle = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxModifNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxModifDate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxModifPrenom = (gcnew System::Windows::Forms::TextBox());
			this->OngletsClient->SuspendLayout();
			this->Commande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Compte->SuspendLayout();
			this->Panier->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// OngletsClient
			// 
			this->OngletsClient->Controls->Add(this->Commande);
			this->OngletsClient->Controls->Add(this->Compte);
			this->OngletsClient->Controls->Add(this->Panier);
			this->OngletsClient->Location = System::Drawing::Point(2, 2);
			this->OngletsClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->OngletsClient->Name = L"OngletsClient";
			this->OngletsClient->SelectedIndex = 0;
			this->OngletsClient->Size = System::Drawing::Size(728, 407);
			this->OngletsClient->TabIndex = 3;
			// 
			// Commande
			// 
			this->Commande->AutoScroll = true;
			this->Commande->Controls->Add(this->pictureBox1);
			this->Commande->Controls->Add(this->listView2);
			this->Commande->Controls->Add(this->textBoxCouleur);
			this->Commande->Controls->Add(this->textBoxPrixTTC);
			this->Commande->Controls->Add(this->textBoxDescription);
			this->Commande->Controls->Add(this->listView1);
			this->Commande->Controls->Add(this->textBoxNom);
			this->Commande->Controls->Add(this->Recherche);
			this->Commande->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Commande->Location = System::Drawing::Point(4, 22);
			this->Commande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Commande->Name = L"Commande";
			this->Commande->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Commande->Size = System::Drawing::Size(720, 381);
			this->Commande->TabIndex = 0;
			this->Commande->Text = L"Commande";
			this->Commande->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(207, 73);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(262, 240);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// listView2
			// 
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(98, 138);
			this->listView2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listView2->MultiSelect = false;
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(41, 84);
			this->listView2->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->listView2->TabIndex = 9;
			this->listView2->Tag = L"listeArticles";
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::List;
			this->listView2->Visible = false;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &PageClient::listView2_SelectedIndexChanged);
			// 
			// textBoxCouleur
			// 
			this->textBoxCouleur->Location = System::Drawing::Point(491, 169);
			this->textBoxCouleur->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxCouleur->Name = L"textBoxCouleur";
			this->textBoxCouleur->ReadOnly = true;
			this->textBoxCouleur->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->textBoxCouleur->Size = System::Drawing::Size(86, 20);
			this->textBoxCouleur->TabIndex = 8;
			this->textBoxCouleur->Text = L"Couleur";
			this->textBoxCouleur->TextChanged += gcnew System::EventHandler(this, &PageClient::richTextBox5_TextChanged);
			// 
			// textBoxPrixTTC
			// 
			this->textBoxPrixTTC->Location = System::Drawing::Point(491, 73);
			this->textBoxPrixTTC->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxPrixTTC->Name = L"textBoxPrixTTC";
			this->textBoxPrixTTC->ReadOnly = true;
			this->textBoxPrixTTC->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->textBoxPrixTTC->Size = System::Drawing::Size(50, 23);
			this->textBoxPrixTTC->TabIndex = 7;
			this->textBoxPrixTTC->Text = L"Prix TTC";
			// 
			// textBoxDescription
			// 
			this->textBoxDescription->Location = System::Drawing::Point(491, 100);
			this->textBoxDescription->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxDescription->Name = L"textBoxDescription";
			this->textBoxDescription->ReadOnly = true;
			this->textBoxDescription->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->textBoxDescription->Size = System::Drawing::Size(211, 65);
			this->textBoxDescription->TabIndex = 6;
			this->textBoxDescription->Text = L"Description";
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(16, 64);
			this->listView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(178, 266);
			this->listView1->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->listView1->TabIndex = 4;
			this->listView1->Tag = L"listeArticles";
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::List;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &PageClient::listView1_SelectedIndexChanged);
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(491, 44);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->ReadOnly = true;
			this->textBoxNom->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->textBoxNom->Size = System::Drawing::Size(99, 25);
			this->textBoxNom->TabIndex = 3;
			this->textBoxNom->Text = L"Nom article";
			// 
			// Recherche
			// 
			this->Recherche->Location = System::Drawing::Point(16, 41);
			this->Recherche->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Recherche->Name = L"Recherche";
			this->Recherche->Size = System::Drawing::Size(178, 20);
			this->Recherche->TabIndex = 0;
			this->Recherche->Text = L"Rechercher";
			this->Recherche->TextChanged += gcnew System::EventHandler(this, &PageClient::Recherche_TextChanged);
			// 
			// Compte
			// 
			this->Compte->Controls->Add(this->textBoxModifPrenom);
			this->Compte->Controls->Add(this->textBoxModifDate);
			this->Compte->Controls->Add(this->textBoxModifNom);
			this->Compte->Controls->Add(this->label4);
			this->Compte->Controls->Add(this->label3);
			this->Compte->Controls->Add(this->label2);
			this->Compte->Controls->Add(this->label1);
			this->Compte->Location = System::Drawing::Point(4, 22);
			this->Compte->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Compte->Name = L"Compte";
			this->Compte->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Compte->Size = System::Drawing::Size(720, 381);
			this->Compte->TabIndex = 1;
			this->Compte->Text = L"Compte";
			this->Compte->UseVisualStyleBackColor = true;
			this->Compte->Click += gcnew System::EventHandler(this, &PageClient::Compte_Click);
			// 
			// Panier
			// 
			this->Panier->Controls->Add(this->dataGridView1);
			this->Panier->Location = System::Drawing::Point(4, 22);
			this->Panier->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Panier->Name = L"Panier";
			this->Panier->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Panier->Size = System::Drawing::Size(720, 381);
			this->Panier->TabIndex = 2;
			this->Panier->Text = L"Panier";
			this->Panier->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Nom, this->Image,
					this->Prix_TTC, this->RetirerArticle
			});
			this->dataGridView1->Location = System::Drawing::Point(4, 5);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(674, 319);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PageClient::dataGridView1_CellClick);
			// 
			// Nom
			// 
			this->Nom->HeaderText = L"Nom";
			this->Nom->MinimumWidth = 6;
			this->Nom->Name = L"Nom";
			this->Nom->Width = 125;
			// 
			// Image
			// 
			this->Image->HeaderText = L"Image";
			this->Image->MinimumWidth = 6;
			this->Image->Name = L"Image";
			this->Image->Width = 125;
			// 
			// Prix_TTC
			// 
			this->Prix_TTC->HeaderText = L"Prix TTC";
			this->Prix_TTC->MinimumWidth = 6;
			this->Prix_TTC->Name = L"Prix_TTC";
			this->Prix_TTC->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Prix_TTC->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Prix_TTC->Width = 125;
			// 
			// RetirerArticle
			// 
			this->RetirerArticle->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->RetirerArticle->HeaderText = L"";
			this->RetirerArticle->MinimumWidth = 6;
			this->RetirerArticle->Name = L"RetirerArticle";
			this->RetirerArticle->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->RetirerArticle->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->RetirerArticle->Text = L"";
			this->RetirerArticle->Width = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom:";
			this->label1->Click += gcnew System::EventHandler(this, &PageClient::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(67, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Date de naissance:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(67, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Prenom:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(67, 128);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 3;
			// 
			// textBoxModifNom
			// 
			this->textBoxModifNom->Location = System::Drawing::Point(192, 29);
			this->textBoxModifNom->Name = L"textBoxModifNom";
			this->textBoxModifNom->Size = System::Drawing::Size(100, 20);
			this->textBoxModifNom->TabIndex = 4;
			// 
			// textBoxModifDate
			// 
			this->textBoxModifDate->Location = System::Drawing::Point(192, 179);
			this->textBoxModifDate->Name = L"textBoxModifDate";
			this->textBoxModifDate->Size = System::Drawing::Size(100, 20);
			this->textBoxModifDate->TabIndex = 5;
			this->textBoxModifDate->Click += gcnew System::EventHandler(this, &PageClient::textBoxModifDate_Click);
			// 
			// textBoxModifPrenom
			// 
			this->textBoxModifPrenom->Location = System::Drawing::Point(192, 97);
			this->textBoxModifPrenom->Name = L"textBoxModifPrenom";
			this->textBoxModifPrenom->Size = System::Drawing::Size(100, 20);
			this->textBoxModifPrenom->TabIndex = 6;
			// 
			// PageClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(728, 405);
			this->Controls->Add(this->OngletsClient);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"PageClient";
			this->Text = L"PageClient";
			this->Load += gcnew System::EventHandler(this, &PageClient::PageClient_Load);
			this->OngletsClient->ResumeLayout(false);
			this->Commande->ResumeLayout(false);
			this->Commande->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Compte->ResumeLayout(false);
			this->Compte->PerformLayout();
			this->Panier->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PageClient_Load(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void AjouterPanier_Click(System::Object^ sender, System::EventArgs^ e) {
		//Nombre d'objets dans le panier mis à jour
		objetPanier++;
		// Création cellule si nécessaire
		if (dataGridView1->Rows->Count < objetPanier) {
			dataGridView1->Rows->Add();
		}

		// Création d'une TextBox
		DataGridViewTextBoxCell^ textBoxNom = gcnew DataGridViewTextBoxCell();
		textBoxNom->Value = listView1->SelectedItems[0]->Text; // Texte à mettre dans la cellule

		// La TextBox est mise dans une cellule spécifique
		dataGridView1->Rows[objetPanier - 1]->Cells[0] = textBoxNom;

		// La même chose pour la deuxième cellule avec une image
		DataGridViewImageCell^ imageCell = gcnew DataGridViewImageCell();
		imageCell->Value = pictureBox1->Image;
		dataGridView1->Rows[objetPanier - 1]->Cells[1] = imageCell;

		// La même chose pour la troisième  cellule avec le prix
		DataGridViewTextBoxCell^ textBoxCellPrixTTC = gcnew DataGridViewTextBoxCell();
		textBoxCellPrixTTC->Value = textBoxPrixTTC->Text; // Cellule = Prix TTC de la page commande
		dataGridView1->Rows[objetPanier - 1]->Cells[2] = textBoxCellPrixTTC;

		// La même chose pour la quatrième cellule avec le bouton
		DataGridViewButtonCell^ buttonCell = gcnew DataGridViewButtonCell();
		buttonCell->Value = "Retirer " + listView1->SelectedItems[0]->Text + " du panier";
		dataGridView1->Rows[objetPanier - 1]->Cells[3] = buttonCell;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// Vérifie si le clic est sur une cellule de bouton
		if (e->ColumnIndex == 3 && e->RowIndex >= 0 && !dataGridView1->Rows[e->RowIndex]->IsNewRow) {
			// Arrêter l'édition de la ligne
			dataGridView1->EndEdit();
			// Suppression de la ligne
			dataGridView1->Rows->RemoveAt(e->RowIndex);
			// Mise à jour du nombre d'objets dans le panier
			objetPanier--;
		}
	}
	//private: System::String^ connectionString = "Server=DYGUERG; Database=Projet; Integrated Security=True;";
	private: System::String^ connectionString = "Server=PC-MATHIEU; Database=Projet; Integrated Security=True;";
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

	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBoxModifDate_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}