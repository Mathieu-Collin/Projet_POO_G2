#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de PageEmploye
	/// </summary>
	public ref class PageEmploye : public System::Windows::Forms::Form
	{
	public:
		PageEmploye(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~PageEmploye()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBoxRecherche;

	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::TextBox^ textBoxNomArticle;
	private: System::Windows::Forms::TextBox^ textBoxPrix;
	private: System::Windows::Forms::TextBox^ textBoxDescription;
	private: System::Windows::Forms::TextBox^ textBoxCouleur;
	private: System::Windows::Forms::Button^ buttonAfficher;
	private: System::Windows::Forms::TextBox^ textBoxQuantite;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxMdp;


	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::Button^ buttonCreerCompte;
	private: System::Windows::Forms::Button^ buttonRetour;









	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonAfficher = (gcnew System::Windows::Forms::Button());
			this->textBoxQuantite = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrix = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDescription = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCouleur = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomArticle = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRecherche = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->buttonCreerCompte = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMdp = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->buttonRetour = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(687, 489);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->buttonRetour);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->buttonAfficher);
			this->tabPage1->Controls->Add(this->textBoxQuantite);
			this->tabPage1->Controls->Add(this->textBoxPrix);
			this->tabPage1->Controls->Add(this->textBoxDescription);
			this->tabPage1->Controls->Add(this->textBoxCouleur);
			this->tabPage1->Controls->Add(this->textBoxNomArticle);
			this->tabPage1->Controls->Add(this->textBoxRecherche);
			this->tabPage1->Controls->Add(this->listView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(679, 463);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Gestion des Stocks";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(240, 66);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(179, 216);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// buttonAfficher
			// 
			this->buttonAfficher->Location = System::Drawing::Point(452, 328);
			this->buttonAfficher->Name = L"buttonAfficher";
			this->buttonAfficher->Size = System::Drawing::Size(203, 23);
			this->buttonAfficher->TabIndex = 7;
			this->buttonAfficher->Text = L"Afficher le stock disponible";
			this->buttonAfficher->UseVisualStyleBackColor = true;
			// 
			// textBoxQuantite
			// 
			this->textBoxQuantite->Location = System::Drawing::Point(452, 391);
			this->textBoxQuantite->Name = L"textBoxQuantite";
			this->textBoxQuantite->Size = System::Drawing::Size(203, 20);
			this->textBoxQuantite->TabIndex = 6;
			this->textBoxQuantite->Text = L"Quantité";
			// 
			// textBoxPrix
			// 
			this->textBoxPrix->Location = System::Drawing::Point(452, 97);
			this->textBoxPrix->Name = L"textBoxPrix";
			this->textBoxPrix->Size = System::Drawing::Size(203, 20);
			this->textBoxPrix->TabIndex = 5;
			this->textBoxPrix->Text = L"Prix TTC";
			// 
			// textBoxDescription
			// 
			this->textBoxDescription->Location = System::Drawing::Point(452, 144);
			this->textBoxDescription->Multiline = true;
			this->textBoxDescription->Name = L"textBoxDescription";
			this->textBoxDescription->Size = System::Drawing::Size(203, 100);
			this->textBoxDescription->TabIndex = 4;
			this->textBoxDescription->Text = L"Description";
			// 
			// textBoxCouleur
			// 
			this->textBoxCouleur->Location = System::Drawing::Point(452, 262);
			this->textBoxCouleur->Name = L"textBoxCouleur";
			this->textBoxCouleur->Size = System::Drawing::Size(203, 20);
			this->textBoxCouleur->TabIndex = 3;
			this->textBoxCouleur->Text = L"Couleur";
			// 
			// textBoxNomArticle
			// 
			this->textBoxNomArticle->Location = System::Drawing::Point(452, 39);
			this->textBoxNomArticle->Name = L"textBoxNomArticle";
			this->textBoxNomArticle->Size = System::Drawing::Size(203, 20);
			this->textBoxNomArticle->TabIndex = 2;
			this->textBoxNomArticle->Text = L"Nom de L\'article";
			// 
			// textBoxRecherche
			// 
			this->textBoxRecherche->Location = System::Drawing::Point(23, 66);
			this->textBoxRecherche->Name = L"textBoxRecherche";
			this->textBoxRecherche->Size = System::Drawing::Size(187, 20);
			this->textBoxRecherche->TabIndex = 1;
			this->textBoxRecherche->Text = L"Recherche";
			this->textBoxRecherche->TextChanged += gcnew System::EventHandler(this, &PageEmploye::textBoxRecherche_TextChanged);
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(23, 97);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(187, 340);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &PageEmploye::listView1_SelectedIndexChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->buttonCreerCompte);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->textBoxPrenom);
			this->tabPage2->Controls->Add(this->textBoxMdp);
			this->tabPage2->Controls->Add(this->textBoxNom);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(679, 463);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Création Compte client";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// buttonCreerCompte
			// 
			this->buttonCreerCompte->Location = System::Drawing::Point(236, 370);
			this->buttonCreerCompte->Name = L"buttonCreerCompte";
			this->buttonCreerCompte->Size = System::Drawing::Size(177, 23);
			this->buttonCreerCompte->TabIndex = 7;
			this->buttonCreerCompte->Text = L"Créer le compte";
			this->buttonCreerCompte->UseVisualStyleBackColor = true;
			this->buttonCreerCompte->Click += gcnew System::EventHandler(this, &PageEmploye::buttonCreerCompte_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Création d\'un compte client";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(191, 240);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Mot de passe";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(216, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Prénom:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(230, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nom:";
			this->label1->Click += gcnew System::EventHandler(this, &PageEmploye::label1_Click);
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Location = System::Drawing::Point(324, 170);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(100, 20);
			this->textBoxPrenom->TabIndex = 2;
			// 
			// textBoxMdp
			// 
			this->textBoxMdp->Location = System::Drawing::Point(324, 233);
			this->textBoxMdp->Name = L"textBoxMdp";
			this->textBoxMdp->Size = System::Drawing::Size(100, 20);
			this->textBoxMdp->TabIndex = 1;
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(324, 106);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(100, 20);
			this->textBoxNom->TabIndex = 0;
			// 
			// buttonRetour
			// 
			this->buttonRetour->Location = System::Drawing::Point(23, 18);
			this->buttonRetour->Name = L"buttonRetour";
			this->buttonRetour->Size = System::Drawing::Size(75, 23);
			this->buttonRetour->TabIndex = 9;
			this->buttonRetour->Text = L"Retour";
			this->buttonRetour->UseVisualStyleBackColor = true;
			this->buttonRetour->Click += gcnew System::EventHandler(this, &PageEmploye::buttonRetour_Click);
			// 
			// PageEmploye
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 487);
			this->Controls->Add(this->tabControl1);
			this->Name = L"PageEmploye";
			this->Text = L"PageEmploye";
			this->Load += gcnew System::EventHandler(this, &PageEmploye::PageEmploye_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PageEmploye_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   //private: System::String^ connectionString = "Server=DYGUERG; Database=Projet; Integrated Security=True;";
	private: System::String^ connectionString = "Server=PC-MATHIEU; Database=Projet; Integrated Security=True;";

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
					textBoxNomArticle->Text = reader["nom"]->ToString();
					textBoxDescription->Text = reader["description"]->ToString();
					textBoxPrix->Text = reader["prix_TTC"]->ToString();
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
	private: System::Void textBoxRecherche_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ recherche = textBoxRecherche->Text->ToLower();
		listView1->Items->Clear();

		for each (ListViewItem ^ itemOrigine in listView1->Items) {
			if (itemOrigine->SubItems[0]->Text->ToLower()->Contains(recherche)) {
				ListViewItem^ itemClone = dynamic_cast<ListViewItem^>(itemOrigine->Clone());
				listView1->Items->Add(itemClone);
			}
		};


	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonCreerCompte_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		SqlConnection^ conn = gcnew SqlConnection(connectionString);
		//vérification si le compte existe déjà et retunr un message d'erreur si c'est le cas
		SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM Client WHERE nom = @nom AND prenom = @prenom AND mdp = @mdp", conn);
		cmd->Parameters->AddWithValue("@nom", textBoxNom->Text);
		cmd->Parameters->AddWithValue("@prenom", textBoxPrenom->Text);
		cmd->Parameters->AddWithValue("@mdp", textBoxMdp->Text);
		if (cmd->ExecuteReader()->HasRows) {
			MessageBox::Show("Ce compte existe déjà");
			return;
		}

		if (textBoxNom->Text == "" || textBoxPrenom->Text == "" || textBoxMdp->Text == "") {
			MessageBox::Show("Veuillez remplir tous les champs");
			return;
		}
		
		SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO Client (nom, prenom, mdp) VALUES (@nom, @prenom, @mdp)", conn);
		cmd->Parameters->AddWithValue("@nom", textBoxNom->Text);
		cmd->Parameters->AddWithValue("@prenom", textBoxPrenom->Text);
		cmd->Parameters->AddWithValue("@mdp", textBoxMdp->Text);

		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();

		MessageBox::Show("Compte créé avec succès");
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
}
private: System::Void buttonRetour_Click(System::Object^ sender, System::EventArgs^ e) {
	PageChoixUtilisateur^ pageChoixUtilisateurForm = gcnew PageChoixUtilisateur();
	pageChoixUtilisateurForm->Show();
	PageEmploye::Close();
}
};
}
