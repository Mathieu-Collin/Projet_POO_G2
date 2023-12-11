#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de PageCommande
	/// </summary>
	public ref class PageCommande : public System::Windows::Forms::Form
	{
	public:
		int idCurrentClient = 0;
		int quantite = 0;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	public:
		String^ prixTotal = "";

		PageCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

		PageCommande(int pIdCurrentClient, int pQuantite, String^ pPrixTotal)
		{
			idCurrentClient = pIdCurrentClient;
			quantite = pQuantite;
			prixTotal = pPrixTotal;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~PageCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxCommandeDateCommande;
	private: System::Windows::Forms::TextBox^ textBoxCommandeDateLivraison;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxCommandeDatePaiement;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxCommandePrixTotal;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxCommandeQuantite;

	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::Button^ button1;

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
			this->textBoxCommandeDateCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCommandeDateLivraison = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxCommandeDatePaiement = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxCommandePrixTotal = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxCommandeQuantite = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBoxCommandeDateCommande
			// 
			this->textBoxCommandeDateCommande->Location = System::Drawing::Point(601, 261);
			this->textBoxCommandeDateCommande->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCommandeDateCommande->Name = L"textBoxCommandeDateCommande";
			this->textBoxCommandeDateCommande->ReadOnly = true;
			this->textBoxCommandeDateCommande->Size = System::Drawing::Size(132, 22);
			this->textBoxCommandeDateCommande->TabIndex = 0;
			this->textBoxCommandeDateCommande->TextChanged += gcnew System::EventHandler(this, &PageCommande::textBox1_TextChanged);
			// 
			// textBoxCommandeDateLivraison
			// 
			this->textBoxCommandeDateLivraison->Location = System::Drawing::Point(232, 261);
			this->textBoxCommandeDateLivraison->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCommandeDateLivraison->Name = L"textBoxCommandeDateLivraison";
			this->textBoxCommandeDateLivraison->ReadOnly = true;
			this->textBoxCommandeDateLivraison->Size = System::Drawing::Size(132, 22);
			this->textBoxCommandeDateLivraison->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(445, 265);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Date de la commande";
			this->label1->Click += gcnew System::EventHandler(this, &PageCommande::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(124, 265);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Date Livraison";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(76, 320);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Date de Paiement";
			this->label4->Click += gcnew System::EventHandler(this, &PageCommande::label4_Click);
			// 
			// textBoxCommandeDatePaiement
			// 
			this->textBoxCommandeDatePaiement->Location = System::Drawing::Point(232, 316);
			this->textBoxCommandeDatePaiement->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCommandeDatePaiement->Name = L"textBoxCommandeDatePaiement";
			this->textBoxCommandeDatePaiement->ReadOnly = true;
			this->textBoxCommandeDatePaiement->Size = System::Drawing::Size(132, 22);
			this->textBoxCommandeDatePaiement->TabIndex = 6;
			this->textBoxCommandeDatePaiement->TextChanged += gcnew System::EventHandler(this, &PageCommande::textBox4_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(171, 124);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Prix Total:";
			// 
			// textBoxCommandePrixTotal
			// 
			this->textBoxCommandePrixTotal->Location = System::Drawing::Point(251, 121);
			this->textBoxCommandePrixTotal->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCommandePrixTotal->Name = L"textBoxCommandePrixTotal";
			this->textBoxCommandePrixTotal->ReadOnly = true;
			this->textBoxCommandePrixTotal->Size = System::Drawing::Size(132, 22);
			this->textBoxCommandePrixTotal->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(456, 320);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Moyen de paiement:";
			// 
			// textBoxCommandeQuantite
			// 
			this->textBoxCommandeQuantite->Location = System::Drawing::Point(508, 121);
			this->textBoxCommandeQuantite->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCommandeQuantite->Name = L"textBoxCommandeQuantite";
			this->textBoxCommandeQuantite->ReadOnly = true;
			this->textBoxCommandeQuantite->Size = System::Drawing::Size(132, 22);
			this->textBoxCommandeQuantite->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(433, 124);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Quantité:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(309, 430);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 28);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Valider la commande";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PageCommande::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Carte", L"PayPal", L"Virement", L"Chèque" });
			this->comboBox1->Location = System::Drawing::Point(601, 320);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(132, 24);
			this->comboBox1->TabIndex = 17;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &PageCommande::comboBox1_SelectedIndexChanged);
			// 
			// PageCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(824, 501);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxCommandeQuantite);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxCommandePrixTotal);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxCommandeDatePaiement);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxCommandeDateLivraison);
			this->Controls->Add(this->textBoxCommandeDateCommande);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PageCommande";
			this->Text = L"PageCommande";
			this->Load += gcnew System::EventHandler(this, &PageCommande::PageCommande_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PageCommande_Load(System::Object^ sender, System::EventArgs^ e) {
		DateTime dateAujourdhui = DateTime::Now;
		String^ aujourdhui = dateAujourdhui.ToString("dd-MM-yyyy");

		DateTime dateJPlus3 = dateAujourdhui.AddDays(3);
		String^ JPlus3 = dateJPlus3.ToString("dd-MM-yyyy");


		textBoxCommandePrixTotal->Text = prixTotal;
		textBoxCommandeQuantite->Text = quantite.ToString();
		textBoxCommandeDateCommande->Text = aujourdhui;
		textBoxCommandeDatePaiement->Text = aujourdhui;
		textBoxCommandeDateLivraison->Text = JPlus3;
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime dateAujourdhui = DateTime::Now;
		DateTime dateJPlus1 = dateAujourdhui.AddDays(1);
		String^ JPlus1 = dateJPlus1.ToString("dd-MM-yyyy");

		List<String^>^ nomColonnes = gcnew List<String^>;
		nomColonnes->Add("date_commande");
		nomColonnes->Add("date_livraison");
		nomColonnes->Add("date_emission");
		nomColonnes->Add("date_paiement");
		nomColonnes->Add("moyen_paiement");
		nomColonnes->Add("solde_commande");
		nomColonnes->Add("quantite_article");
		nomColonnes->Add("id_client");

		List<String^>^ valeurs = gcnew List<String^>;
		valeurs->Add(textBoxCommandeDateCommande->Text);
		valeurs->Add(textBoxCommandeDateLivraison->Text);
		valeurs->Add(JPlus1);
		valeurs->Add(textBoxCommandeDatePaiement->Text);
		valeurs->Add(comboBox1->Text);
		valeurs->Add(textBoxCommandePrixTotal->Text);
		valeurs->Add(textBoxCommandeQuantite->Text);
		valeurs->Add(idCurrentClient.ToString());

		String^ nomTable = "Commande";

		CreerObjet(nomTable, valeurs, nomColonnes);
	}

	private: System::String^ connexionBDD = "Server=DYGUERG; Database=Projet; Integrated Security=True;";

	void CreerObjet(String^ nomTable, List<String^>^ listeValeurs, List<String^>^ listNomColonnes) {

		String^ nomColonnes = String::Join(", ", listNomColonnes);
		String^ parametres = "";

		for (int i = 0; i < listNomColonnes->Count; i++) {
			parametres += (i > 0 ? ", " : "") + "@" + listNomColonnes[i];
		}

		String^ query = "INSERT INTO " + nomTable + " (" + nomColonnes + ") VALUES (" + parametres + ")";

		// Créer la connexion et la commande
		SqlConnection^ conn = gcnew SqlConnection(connexionBDD);
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);

		// Ajouter les paramètres à la commande
		for (int i = 0; i < listeValeurs->Count; i++) {
			cmd->Parameters->AddWithValue("@" + listNomColonnes[i], listeValeurs[i]);
		}

		try {
			// Ouvrir la connexion et exécuter la commande
			conn->Open();
			int rowsAffected = cmd->ExecuteNonQuery();
			MessageBox::Show("Commande validée !");
		}
		catch (Exception^ e) {
			MessageBox::Show("Erreur lors de la création : " + e->Message);
		}
		finally {
			// Fermer la connexion
			if (conn->State == ConnectionState::Open)
				conn->Close();
		}
		this->Close();
	}
};
}
