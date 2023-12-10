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
			ChargerListView(listView1, listView2, "Article", "nom");
			ChargerListView(listViewPersonnel1, listViewPersonnel2, "Personnel", "nom");
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
	private: System::Windows::Forms::TabPage^ OngletGestionPersonnel;

	private: System::Windows::Forms::RichTextBox^ date_embauche;








	private: System::Windows::Forms::RichTextBox^ superieurPersonnel;
	private: System::Windows::Forms::RichTextBox^ titreDate_embauche;









	private: System::Windows::Forms::RichTextBox^ IdPersonnel;
	private: System::Windows::Forms::RichTextBox^ titreSuperieurPersonnel;




	private: System::Windows::Forms::RichTextBox^ prenomPersonnel;
	private: System::Windows::Forms::RichTextBox^ adressePersonnel;
	private: System::Windows::Forms::RichTextBox^ nomPersonnelRichTextBox;






	public: System::Windows::Forms::TextBox^ RecherchePersonnel;
	private:


	private: System::Windows::Forms::Button^ CréerPersonnel;
	private: System::Windows::Forms::Button^ modifPersonnel;
	public:
	private:

	private:

	public:


	private: System::Windows::Forms::ListView^ listViewPersonnel2;
	private: System::Windows::Forms::ListView^ listViewPersonnel1;
	public:

	public:

	public:
	private:


	public:

	private: System::Windows::Forms::TabPage^ OngletGestionStocks;
	private: System::Windows::Forms::Button^ SupprimerArticle;
	private: System::Windows::Forms::RichTextBox^ reaprovisionnement;
	private: System::Windows::Forms::RichTextBox^ quantite;
	private: System::Windows::Forms::RichTextBox^ taux_TVA;
	private: System::Windows::Forms::RichTextBox^ remise;
	private: System::Windows::Forms::RichTextBox^ prix_HT;
	private: System::Windows::Forms::RichTextBox^ prix_achat;
	private: System::Windows::Forms::RichTextBox^ reference;
	private: System::Windows::Forms::RichTextBox^ couleur;
	private: System::Windows::Forms::RichTextBox^ titrePrix_achat;
	private: System::Windows::Forms::RichTextBox^ titrePrix_HT;
	private: System::Windows::Forms::RichTextBox^ titreRemise;
	private: System::Windows::Forms::RichTextBox^ titreTaux_TVA;
	private: System::Windows::Forms::RichTextBox^ titreQuantite;
	private: System::Windows::Forms::RichTextBox^ titreReaprovisionnement;
	private: System::Windows::Forms::RichTextBox^ titreReference;
	private: System::Windows::Forms::RichTextBox^ Id;
	private: System::Windows::Forms::RichTextBox^ titreCouleur;
	private: System::Windows::Forms::RichTextBox^ prix_TTC;
	private: System::Windows::Forms::RichTextBox^ description;
	private: System::Windows::Forms::RichTextBox^ nom;
	public: System::Windows::Forms::TextBox^ Recherche;
	private:
	private: System::Windows::Forms::Button^ CreerArticle;
	public:
	private: System::Windows::Forms::Button^ ModifArticle;
	public: System::Windows::Forms::PictureBox^ pictureBox1;
	private:
	private: System::Windows::Forms::ListView^ listView2;
	public:
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::TabControl^ OngletsManager;
private: System::Windows::Forms::Button^ SupprimerPersonnel;
private: System::Windows::Forms::RichTextBox^ motDePassePersonnel;



	private:
































	private:








	private:












































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
			this->OngletGestionPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->date_embauche = (gcnew System::Windows::Forms::RichTextBox());
			this->superieurPersonnel = (gcnew System::Windows::Forms::RichTextBox());
			this->titreDate_embauche = (gcnew System::Windows::Forms::RichTextBox());
			this->IdPersonnel = (gcnew System::Windows::Forms::RichTextBox());
			this->titreSuperieurPersonnel = (gcnew System::Windows::Forms::RichTextBox());
			this->prenomPersonnel = (gcnew System::Windows::Forms::RichTextBox());
			this->adressePersonnel = (gcnew System::Windows::Forms::RichTextBox());
			this->nomPersonnelRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->RecherchePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->CréerPersonnel = (gcnew System::Windows::Forms::Button());
			this->modifPersonnel = (gcnew System::Windows::Forms::Button());
			this->listViewPersonnel2 = (gcnew System::Windows::Forms::ListView());
			this->listViewPersonnel1 = (gcnew System::Windows::Forms::ListView());
			this->OngletGestionStocks = (gcnew System::Windows::Forms::TabPage());
			this->SupprimerArticle = (gcnew System::Windows::Forms::Button());
			this->reaprovisionnement = (gcnew System::Windows::Forms::RichTextBox());
			this->quantite = (gcnew System::Windows::Forms::RichTextBox());
			this->taux_TVA = (gcnew System::Windows::Forms::RichTextBox());
			this->remise = (gcnew System::Windows::Forms::RichTextBox());
			this->prix_HT = (gcnew System::Windows::Forms::RichTextBox());
			this->prix_achat = (gcnew System::Windows::Forms::RichTextBox());
			this->reference = (gcnew System::Windows::Forms::RichTextBox());
			this->couleur = (gcnew System::Windows::Forms::RichTextBox());
			this->titrePrix_achat = (gcnew System::Windows::Forms::RichTextBox());
			this->titrePrix_HT = (gcnew System::Windows::Forms::RichTextBox());
			this->titreRemise = (gcnew System::Windows::Forms::RichTextBox());
			this->titreTaux_TVA = (gcnew System::Windows::Forms::RichTextBox());
			this->titreQuantite = (gcnew System::Windows::Forms::RichTextBox());
			this->titreReaprovisionnement = (gcnew System::Windows::Forms::RichTextBox());
			this->titreReference = (gcnew System::Windows::Forms::RichTextBox());
			this->Id = (gcnew System::Windows::Forms::RichTextBox());
			this->titreCouleur = (gcnew System::Windows::Forms::RichTextBox());
			this->prix_TTC = (gcnew System::Windows::Forms::RichTextBox());
			this->description = (gcnew System::Windows::Forms::RichTextBox());
			this->nom = (gcnew System::Windows::Forms::RichTextBox());
			this->Recherche = (gcnew System::Windows::Forms::TextBox());
			this->CreerArticle = (gcnew System::Windows::Forms::Button());
			this->ModifArticle = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->OngletsManager = (gcnew System::Windows::Forms::TabControl());
			this->SupprimerPersonnel = (gcnew System::Windows::Forms::Button());
			this->motDePassePersonnel = (gcnew System::Windows::Forms::RichTextBox());
			this->OngletGestionPersonnel->SuspendLayout();
			this->OngletGestionStocks->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->OngletsManager->SuspendLayout();
			this->SuspendLayout();
			// 
			// OngletGestionPersonnel
			// 
			this->OngletGestionPersonnel->AutoScroll = true;
			this->OngletGestionPersonnel->Controls->Add(this->motDePassePersonnel);
			this->OngletGestionPersonnel->Controls->Add(this->SupprimerPersonnel);
			this->OngletGestionPersonnel->Controls->Add(this->date_embauche);
			this->OngletGestionPersonnel->Controls->Add(this->superieurPersonnel);
			this->OngletGestionPersonnel->Controls->Add(this->titreDate_embauche);
			this->OngletGestionPersonnel->Controls->Add(this->IdPersonnel);
			this->OngletGestionPersonnel->Controls->Add(this->titreSuperieurPersonnel);
			this->OngletGestionPersonnel->Controls->Add(this->prenomPersonnel);
			this->OngletGestionPersonnel->Controls->Add(this->adressePersonnel);
			this->OngletGestionPersonnel->Controls->Add(this->nomPersonnelRichTextBox);
			this->OngletGestionPersonnel->Controls->Add(this->RecherchePersonnel);
			this->OngletGestionPersonnel->Controls->Add(this->CréerPersonnel);
			this->OngletGestionPersonnel->Controls->Add(this->modifPersonnel);
			this->OngletGestionPersonnel->Controls->Add(this->listViewPersonnel2);
			this->OngletGestionPersonnel->Controls->Add(this->listViewPersonnel1);
			this->OngletGestionPersonnel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->OngletGestionPersonnel->Location = System::Drawing::Point(4, 22);
			this->OngletGestionPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->OngletGestionPersonnel->Name = L"OngletGestionPersonnel";
			this->OngletGestionPersonnel->Padding = System::Windows::Forms::Padding(2);
			this->OngletGestionPersonnel->Size = System::Drawing::Size(720, 381);
			this->OngletGestionPersonnel->TabIndex = 2;
			this->OngletGestionPersonnel->Text = L"Gestion du personnel";
			this->OngletGestionPersonnel->UseVisualStyleBackColor = true;
			// 
			// date_embauche
			// 
			this->date_embauche->AccessibleName = L"date_embauche";
			this->date_embauche->Location = System::Drawing::Point(574, 155);
			this->date_embauche->Margin = System::Windows::Forms::Padding(2);
			this->date_embauche->Name = L"date_embauche";
			this->date_embauche->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->date_embauche->Size = System::Drawing::Size(112, 23);
			this->date_embauche->TabIndex = 22;
			this->date_embauche->Text = L"";
			// 
			// superieurPersonnel
			// 
			this->superieurPersonnel->AccessibleName = L"superieur";
			this->superieurPersonnel->Location = System::Drawing::Point(533, 131);
			this->superieurPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->superieurPersonnel->Name = L"superieurPersonnel";
			this->superieurPersonnel->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->superieurPersonnel->Size = System::Drawing::Size(154, 20);
			this->superieurPersonnel->TabIndex = 21;
			this->superieurPersonnel->Text = L"";
			// 
			// titreDate_embauche
			// 
			this->titreDate_embauche->Location = System::Drawing::Point(476, 155);
			this->titreDate_embauche->Margin = System::Windows::Forms::Padding(2);
			this->titreDate_embauche->Name = L"titreDate_embauche";
			this->titreDate_embauche->ReadOnly = true;
			this->titreDate_embauche->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->titreDate_embauche->Size = System::Drawing::Size(94, 23);
			this->titreDate_embauche->TabIndex = 14;
			this->titreDate_embauche->Text = L"Date d\'embauche";
			this->titreDate_embauche->TextChanged += gcnew System::EventHandler(this, &PageManager::date_embauche_TextChanged);
			// 
			// IdPersonnel
			// 
			this->IdPersonnel->Location = System::Drawing::Point(401, 26);
			this->IdPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->IdPersonnel->Name = L"IdPersonnel";
			this->IdPersonnel->ReadOnly = true;
			this->IdPersonnel->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->IdPersonnel->Size = System::Drawing::Size(58, 20);
			this->IdPersonnel->TabIndex = 13;
			this->IdPersonnel->Text = L"Id";
			this->IdPersonnel->Visible = false;
			// 
			// titreSuperieurPersonnel
			// 
			this->titreSuperieurPersonnel->Location = System::Drawing::Point(476, 131);
			this->titreSuperieurPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->titreSuperieurPersonnel->Name = L"titreSuperieurPersonnel";
			this->titreSuperieurPersonnel->ReadOnly = true;
			this->titreSuperieurPersonnel->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->titreSuperieurPersonnel->Size = System::Drawing::Size(54, 20);
			this->titreSuperieurPersonnel->TabIndex = 8;
			this->titreSuperieurPersonnel->Text = L"Supérieur";
			// 
			// prenomPersonnel
			// 
			this->prenomPersonnel->AccessibleName = L"prenom";
			this->prenomPersonnel->Location = System::Drawing::Point(230, 106);
			this->prenomPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->prenomPersonnel->Name = L"prenomPersonnel";
			this->prenomPersonnel->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->prenomPersonnel->Size = System::Drawing::Size(210, 23);
			this->prenomPersonnel->TabIndex = 7;
			this->prenomPersonnel->Text = L"Prénom";
			// 
			// adressePersonnel
			// 
			this->adressePersonnel->AccessibleName = L"adresse";
			this->adressePersonnel->Location = System::Drawing::Point(476, 77);
			this->adressePersonnel->Margin = System::Windows::Forms::Padding(2);
			this->adressePersonnel->Name = L"adressePersonnel";
			this->adressePersonnel->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->adressePersonnel->Size = System::Drawing::Size(211, 50);
			this->adressePersonnel->TabIndex = 6;
			this->adressePersonnel->Text = L"Adresse";
			// 
			// nomPersonnelRichTextBox
			// 
			this->nomPersonnelRichTextBox->AccessibleName = L"nom";
			this->nomPersonnelRichTextBox->Location = System::Drawing::Point(229, 77);
			this->nomPersonnelRichTextBox->Margin = System::Windows::Forms::Padding(2);
			this->nomPersonnelRichTextBox->Name = L"nomPersonnelRichTextBox";
			this->nomPersonnelRichTextBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->nomPersonnelRichTextBox->Size = System::Drawing::Size(211, 25);
			this->nomPersonnelRichTextBox->TabIndex = 3;
			this->nomPersonnelRichTextBox->Text = L"Nom Personnel";
			// 
			// RecherchePersonnel
			// 
			this->RecherchePersonnel->Location = System::Drawing::Point(16, 41);
			this->RecherchePersonnel->Margin = System::Windows::Forms::Padding(2);
			this->RecherchePersonnel->Name = L"RecherchePersonnel";
			this->RecherchePersonnel->Size = System::Drawing::Size(178, 20);
			this->RecherchePersonnel->TabIndex = 0;
			this->RecherchePersonnel->Text = L"Rechercher";
			this->RecherchePersonnel->TextChanged += gcnew System::EventHandler(this, &PageManager::RecherchePersonnel_TextChanged);
			// 
			// CréerPersonnel
			// 
			this->CréerPersonnel->Location = System::Drawing::Point(476, 253);
			this->CréerPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->CréerPersonnel->Name = L"CréerPersonnel";
			this->CréerPersonnel->Size = System::Drawing::Size(211, 28);
			this->CréerPersonnel->TabIndex = 12;
			this->CréerPersonnel->Text = L"CRÉER LE PERSONNEL";
			this->CréerPersonnel->UseVisualStyleBackColor = true;
			this->CréerPersonnel->Click += gcnew System::EventHandler(this, &PageManager::CréerPersonnel_Click);
			// 
			// modifPersonnel
			// 
			this->modifPersonnel->Location = System::Drawing::Point(503, 200);
			this->modifPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->modifPersonnel->Name = L"modifPersonnel";
			this->modifPersonnel->Size = System::Drawing::Size(167, 22);
			this->modifPersonnel->TabIndex = 11;
			this->modifPersonnel->Text = L"Valider les modifications";
			this->modifPersonnel->UseVisualStyleBackColor = true;
			this->modifPersonnel->Click += gcnew System::EventHandler(this, &PageManager::modifPersonnel_Click);
			// 
			// listViewPersonnel2
			// 
			this->listViewPersonnel2->HideSelection = false;
			this->listViewPersonnel2->Location = System::Drawing::Point(98, 138);
			this->listViewPersonnel2->Margin = System::Windows::Forms::Padding(2);
			this->listViewPersonnel2->MultiSelect = false;
			this->listViewPersonnel2->Name = L"listViewPersonnel2";
			this->listViewPersonnel2->Size = System::Drawing::Size(41, 84);
			this->listViewPersonnel2->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->listViewPersonnel2->TabIndex = 9;
			this->listViewPersonnel2->Tag = L"listeArticles";
			this->listViewPersonnel2->UseCompatibleStateImageBehavior = false;
			this->listViewPersonnel2->View = System::Windows::Forms::View::List;
			this->listViewPersonnel2->Visible = false;
			// 
			// listViewPersonnel1
			// 
			this->listViewPersonnel1->HideSelection = false;
			this->listViewPersonnel1->Location = System::Drawing::Point(16, 64);
			this->listViewPersonnel1->Margin = System::Windows::Forms::Padding(2);
			this->listViewPersonnel1->MultiSelect = false;
			this->listViewPersonnel1->Name = L"listViewPersonnel1";
			this->listViewPersonnel1->Size = System::Drawing::Size(178, 266);
			this->listViewPersonnel1->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->listViewPersonnel1->TabIndex = 4;
			this->listViewPersonnel1->Tag = L"listeArticles";
			this->listViewPersonnel1->UseCompatibleStateImageBehavior = false;
			this->listViewPersonnel1->View = System::Windows::Forms::View::List;
			this->listViewPersonnel1->SelectedIndexChanged += gcnew System::EventHandler(this, &PageManager::listViewPersonnel1_SelectedIndexChanged);
			// 
			// OngletGestionStocks
			// 
			this->OngletGestionStocks->AutoScroll = true;
			this->OngletGestionStocks->Controls->Add(this->SupprimerArticle);
			this->OngletGestionStocks->Controls->Add(this->reaprovisionnement);
			this->OngletGestionStocks->Controls->Add(this->quantite);
			this->OngletGestionStocks->Controls->Add(this->taux_TVA);
			this->OngletGestionStocks->Controls->Add(this->remise);
			this->OngletGestionStocks->Controls->Add(this->prix_HT);
			this->OngletGestionStocks->Controls->Add(this->prix_achat);
			this->OngletGestionStocks->Controls->Add(this->reference);
			this->OngletGestionStocks->Controls->Add(this->couleur);
			this->OngletGestionStocks->Controls->Add(this->titrePrix_achat);
			this->OngletGestionStocks->Controls->Add(this->titrePrix_HT);
			this->OngletGestionStocks->Controls->Add(this->titreRemise);
			this->OngletGestionStocks->Controls->Add(this->titreTaux_TVA);
			this->OngletGestionStocks->Controls->Add(this->titreQuantite);
			this->OngletGestionStocks->Controls->Add(this->titreReaprovisionnement);
			this->OngletGestionStocks->Controls->Add(this->titreReference);
			this->OngletGestionStocks->Controls->Add(this->Id);
			this->OngletGestionStocks->Controls->Add(this->titreCouleur);
			this->OngletGestionStocks->Controls->Add(this->prix_TTC);
			this->OngletGestionStocks->Controls->Add(this->description);
			this->OngletGestionStocks->Controls->Add(this->nom);
			this->OngletGestionStocks->Controls->Add(this->Recherche);
			this->OngletGestionStocks->Controls->Add(this->CreerArticle);
			this->OngletGestionStocks->Controls->Add(this->ModifArticle);
			this->OngletGestionStocks->Controls->Add(this->pictureBox1);
			this->OngletGestionStocks->Controls->Add(this->listView2);
			this->OngletGestionStocks->Controls->Add(this->listView1);
			this->OngletGestionStocks->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->OngletGestionStocks->Location = System::Drawing::Point(4, 22);
			this->OngletGestionStocks->Margin = System::Windows::Forms::Padding(2);
			this->OngletGestionStocks->Name = L"OngletGestionStocks";
			this->OngletGestionStocks->Padding = System::Windows::Forms::Padding(2);
			this->OngletGestionStocks->Size = System::Drawing::Size(720, 381);
			this->OngletGestionStocks->TabIndex = 0;
			this->OngletGestionStocks->Text = L"Gestion des stocks";
			this->OngletGestionStocks->UseVisualStyleBackColor = true;
			this->OngletGestionStocks->Click += gcnew System::EventHandler(this, &PageManager::GestionDuPersonnel_Click);
			// 
			// SupprimerArticle
			// 
			this->SupprimerArticle->Location = System::Drawing::Point(197, 335);
			this->SupprimerArticle->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerArticle->Name = L"SupprimerArticle";
			this->SupprimerArticle->Size = System::Drawing::Size(262, 39);
			this->SupprimerArticle->TabIndex = 29;
			this->SupprimerArticle->Text = L"SUPPRIMER L\'ARTICLE";
			this->SupprimerArticle->UseVisualStyleBackColor = true;
			this->SupprimerArticle->Click += gcnew System::EventHandler(this, &PageManager::SupprimerArticle_Click);
			// 
			// reaprovisionnement
			// 
			this->reaprovisionnement->AccessibleName = L"reaprovisionnement";
			this->reaprovisionnement->Location = System::Drawing::Point(589, 304);
			this->reaprovisionnement->Margin = System::Windows::Forms::Padding(2);
			this->reaprovisionnement->Name = L"reaprovisionnement";
			this->reaprovisionnement->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->reaprovisionnement->Size = System::Drawing::Size(98, 19);
			this->reaprovisionnement->TabIndex = 28;
			this->reaprovisionnement->Text = L"";
			// 
			// quantite
			// 
			this->quantite->AccessibleName = L"quantite";
			this->quantite->Location = System::Drawing::Point(533, 277);
			this->quantite->Margin = System::Windows::Forms::Padding(2);
			this->quantite->Name = L"quantite";
			this->quantite->Size = System::Drawing::Size(153, 23);
			this->quantite->TabIndex = 27;
			this->quantite->Text = L"";
			// 
			// taux_TVA
			// 
			this->taux_TVA->AccessibleName = L"taux_TVA";
			this->taux_TVA->Location = System::Drawing::Point(533, 254);
			this->taux_TVA->Margin = System::Windows::Forms::Padding(2);
			this->taux_TVA->Name = L"taux_TVA";
			this->taux_TVA->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->taux_TVA->Size = System::Drawing::Size(153, 19);
			this->taux_TVA->TabIndex = 26;
			this->taux_TVA->Text = L"";
			// 
			// remise
			// 
			this->remise->AccessibleName = L"remise";
			this->remise->Location = System::Drawing::Point(533, 230);
			this->remise->Margin = System::Windows::Forms::Padding(2);
			this->remise->Name = L"remise";
			this->remise->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->remise->Size = System::Drawing::Size(153, 19);
			this->remise->TabIndex = 25;
			this->remise->Text = L"";
			// 
			// prix_HT
			// 
			this->prix_HT->AccessibleName = L"prix_HT";
			this->prix_HT->Location = System::Drawing::Point(523, 204);
			this->prix_HT->Margin = System::Windows::Forms::Padding(2);
			this->prix_HT->Name = L"prix_HT";
			this->prix_HT->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->prix_HT->Size = System::Drawing::Size(164, 22);
			this->prix_HT->TabIndex = 24;
			this->prix_HT->Text = L"";
			// 
			// prix_achat
			// 
			this->prix_achat->AccessibleName = L"prix_achat";
			this->prix_achat->Location = System::Drawing::Point(614, 182);
			this->prix_achat->Margin = System::Windows::Forms::Padding(2);
			this->prix_achat->Name = L"prix_achat";
			this->prix_achat->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->prix_achat->Size = System::Drawing::Size(73, 18);
			this->prix_achat->TabIndex = 23;
			this->prix_achat->Text = L"";
			this->prix_achat->TextChanged += gcnew System::EventHandler(this, &PageManager::prix_achat_TextChanged);
			// 
			// reference
			// 
			this->reference->AccessibleName = L"reference";
			this->reference->Location = System::Drawing::Point(542, 155);
			this->reference->Margin = System::Windows::Forms::Padding(2);
			this->reference->Name = L"reference";
			this->reference->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->reference->Size = System::Drawing::Size(144, 23);
			this->reference->TabIndex = 22;
			this->reference->Text = L"";
			// 
			// couleur
			// 
			this->couleur->AccessibleName = L"couleur";
			this->couleur->Location = System::Drawing::Point(523, 131);
			this->couleur->Margin = System::Windows::Forms::Padding(2);
			this->couleur->Name = L"couleur";
			this->couleur->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->couleur->Size = System::Drawing::Size(164, 20);
			this->couleur->TabIndex = 21;
			this->couleur->Text = L"";
			// 
			// titrePrix_achat
			// 
			this->titrePrix_achat->Location = System::Drawing::Point(476, 182);
			this->titrePrix_achat->Margin = System::Windows::Forms::Padding(2);
			this->titrePrix_achat->Name = L"titrePrix_achat";
			this->titrePrix_achat->ReadOnly = true;
			this->titrePrix_achat->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->titrePrix_achat->Size = System::Drawing::Size(134, 18);
			this->titrePrix_achat->TabIndex = 20;
			this->titrePrix_achat->Text = L"Prix d\'achat au fournisseur";
			// 
			// titrePrix_HT
			// 
			this->titrePrix_HT->Location = System::Drawing::Point(476, 204);
			this->titrePrix_HT->Margin = System::Windows::Forms::Padding(2);
			this->titrePrix_HT->Name = L"titrePrix_HT";
			this->titrePrix_HT->ReadOnly = true;
			this->titrePrix_HT->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->titrePrix_HT->Size = System::Drawing::Size(44, 22);
			this->titrePrix_HT->TabIndex = 19;
			this->titrePrix_HT->Text = L"Prix HT";
			// 
			// titreRemise
			// 
			this->titreRemise->Location = System::Drawing::Point(476, 230);
			this->titreRemise->Margin = System::Windows::Forms::Padding(2);
			this->titreRemise->Name = L"titreRemise";
			this->titreRemise->ReadOnly = true;
			this->titreRemise->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->titreRemise->Size = System::Drawing::Size(54, 19);
			this->titreRemise->TabIndex = 18;
			this->titreRemise->Text = L"Remise";
			// 
			// titreTaux_TVA
			// 
			this->titreTaux_TVA->Location = System::Drawing::Point(476, 254);
			this->titreTaux_TVA->Margin = System::Windows::Forms::Padding(2);
			this->titreTaux_TVA->Name = L"titreTaux_TVA";
			this->titreTaux_TVA->ReadOnly = true;
			this->titreTaux_TVA->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->titreTaux_TVA->Size = System::Drawing::Size(54, 19);
			this->titreTaux_TVA->TabIndex = 17;
			this->titreTaux_TVA->Text = L"Taux TVA";
			// 
			// titreQuantite
			// 
			this->titreQuantite->Location = System::Drawing::Point(476, 277);
			this->titreQuantite->Margin = System::Windows::Forms::Padding(2);
			this->titreQuantite->Name = L"titreQuantite";
			this->titreQuantite->ReadOnly = true;
			this->titreQuantite->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->titreQuantite->Size = System::Drawing::Size(54, 23);
			this->titreQuantite->TabIndex = 16;
			this->titreQuantite->Text = L"Quantité";
			// 
			// titreReaprovisionnement
			// 
			this->titreReaprovisionnement->Location = System::Drawing::Point(476, 304);
			this->titreReaprovisionnement->Margin = System::Windows::Forms::Padding(2);
			this->titreReaprovisionnement->Name = L"titreReaprovisionnement";
			this->titreReaprovisionnement->ReadOnly = true;
			this->titreReaprovisionnement->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->titreReaprovisionnement->Size = System::Drawing::Size(109, 19);
			this->titreReaprovisionnement->TabIndex = 15;
			this->titreReaprovisionnement->Text = L"Réaprovisionnement";
			this->titreReaprovisionnement->TextChanged += gcnew System::EventHandler(this, &PageManager::titreReaprovisionnement_TextChanged);
			// 
			// titreReference
			// 
			this->titreReference->Location = System::Drawing::Point(476, 155);
			this->titreReference->Margin = System::Windows::Forms::Padding(2);
			this->titreReference->Name = L"titreReference";
			this->titreReference->ReadOnly = true;
			this->titreReference->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->titreReference->Size = System::Drawing::Size(63, 23);
			this->titreReference->TabIndex = 14;
			this->titreReference->Text = L"Référence";
			// 
			// Id
			// 
			this->Id->Location = System::Drawing::Point(628, 53);
			this->Id->Margin = System::Windows::Forms::Padding(2);
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->Id->Size = System::Drawing::Size(58, 20);
			this->Id->TabIndex = 13;
			this->Id->Text = L"Id";
			this->Id->Visible = false;
			// 
			// titreCouleur
			// 
			this->titreCouleur->Location = System::Drawing::Point(476, 131);
			this->titreCouleur->Margin = System::Windows::Forms::Padding(2);
			this->titreCouleur->Name = L"titreCouleur";
			this->titreCouleur->ReadOnly = true;
			this->titreCouleur->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->titreCouleur->Size = System::Drawing::Size(44, 20);
			this->titreCouleur->TabIndex = 8;
			this->titreCouleur->Text = L"Couleur";
			this->titreCouleur->TextChanged += gcnew System::EventHandler(this, &PageManager::richTextBox5_TextChanged);
			// 
			// prix_TTC
			// 
			this->prix_TTC->AccessibleName = L"prix_TTC";
			this->prix_TTC->Location = System::Drawing::Point(476, 50);
			this->prix_TTC->Margin = System::Windows::Forms::Padding(2);
			this->prix_TTC->Name = L"prix_TTC";
			this->prix_TTC->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->prix_TTC->Size = System::Drawing::Size(74, 23);
			this->prix_TTC->TabIndex = 7;
			this->prix_TTC->Text = L"Prix TTC";
			// 
			// description
			// 
			this->description->AccessibleName = L"description";
			this->description->Location = System::Drawing::Point(476, 77);
			this->description->Margin = System::Windows::Forms::Padding(2);
			this->description->Name = L"description";
			this->description->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->description->Size = System::Drawing::Size(211, 50);
			this->description->TabIndex = 6;
			this->description->Text = L"Description";
			this->description->TextChanged += gcnew System::EventHandler(this, &PageManager::description_TextChanged);
			// 
			// nom
			// 
			this->nom->AccessibleName = L"nom";
			this->nom->Location = System::Drawing::Point(476, 21);
			this->nom->Margin = System::Windows::Forms::Padding(2);
			this->nom->Name = L"nom";
			this->nom->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->nom->Size = System::Drawing::Size(211, 25);
			this->nom->TabIndex = 3;
			this->nom->Text = L"Nom article";
			this->nom->TextChanged += gcnew System::EventHandler(this, &PageManager::nom_TextChanged);
			// 
			// Recherche
			// 
			this->Recherche->Location = System::Drawing::Point(16, 41);
			this->Recherche->Margin = System::Windows::Forms::Padding(2);
			this->Recherche->Name = L"Recherche";
			this->Recherche->Size = System::Drawing::Size(178, 20);
			this->Recherche->TabIndex = 0;
			this->Recherche->Text = L"Rechercher";
			this->Recherche->TextChanged += gcnew System::EventHandler(this, &PageManager::Recherche_TextChanged);
			// 
			// CreerArticle
			// 
			this->CreerArticle->Location = System::Drawing::Point(197, 37);
			this->CreerArticle->Margin = System::Windows::Forms::Padding(2);
			this->CreerArticle->Name = L"CreerArticle";
			this->CreerArticle->Size = System::Drawing::Size(262, 28);
			this->CreerArticle->TabIndex = 12;
			this->CreerArticle->Text = L"CRÉER L\'ARTICLE";
			this->CreerArticle->UseVisualStyleBackColor = true;
			this->CreerArticle->Click += gcnew System::EventHandler(this, &PageManager::CreerArticle_Click);
			// 
			// ModifArticle
			// 
			this->ModifArticle->Location = System::Drawing::Point(496, 335);
			this->ModifArticle->Margin = System::Windows::Forms::Padding(2);
			this->ModifArticle->Name = L"ModifArticle";
			this->ModifArticle->Size = System::Drawing::Size(167, 22);
			this->ModifArticle->TabIndex = 11;
			this->ModifArticle->Text = L"Valider les modifications";
			this->ModifArticle->UseVisualStyleBackColor = true;
			this->ModifArticle->Click += gcnew System::EventHandler(this, &PageManager::ModifArticle_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(197, 73);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(262, 256);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// listView2
			// 
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(98, 138);
			this->listView2->Margin = System::Windows::Forms::Padding(2);
			this->listView2->MultiSelect = false;
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(41, 84);
			this->listView2->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->listView2->TabIndex = 9;
			this->listView2->Tag = L"listeArticles";
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::List;
			this->listView2->Visible = false;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &PageManager::listView2_SelectedIndexChanged);
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(16, 64);
			this->listView1->Margin = System::Windows::Forms::Padding(2);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(178, 266);
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
			this->OngletsManager->Controls->Add(this->OngletGestionPersonnel);
			this->OngletsManager->Location = System::Drawing::Point(2, 2);
			this->OngletsManager->Margin = System::Windows::Forms::Padding(2);
			this->OngletsManager->Name = L"OngletsManager";
			this->OngletsManager->SelectedIndex = 0;
			this->OngletsManager->Size = System::Drawing::Size(728, 407);
			this->OngletsManager->TabIndex = 3;
			// 
			// SupprimerPersonnel
			// 
			this->SupprimerPersonnel->Location = System::Drawing::Point(476, 308);
			this->SupprimerPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerPersonnel->Name = L"SupprimerPersonnel";
			this->SupprimerPersonnel->Size = System::Drawing::Size(211, 39);
			this->SupprimerPersonnel->TabIndex = 29;
			this->SupprimerPersonnel->Text = L"SUPPRIMER LE PERSONNEL";
			this->SupprimerPersonnel->UseVisualStyleBackColor = true;
			this->SupprimerPersonnel->Click += gcnew System::EventHandler(this, &PageManager::SupprimerPersonnel_Click);
			// 
			// motDePassePersonnel
			// 
			this->motDePassePersonnel->AccessibleName = L"MotDePasse";
			this->motDePassePersonnel->Location = System::Drawing::Point(230, 134);
			this->motDePassePersonnel->Name = L"motDePassePersonnel";
			this->motDePassePersonnel->Size = System::Drawing::Size(210, 23);
			this->motDePassePersonnel->TabIndex = 30;
			this->motDePassePersonnel->Text = L"Mot de passe";
			// 
			// PageManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(728, 405);
			this->Controls->Add(this->OngletsManager);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PageManager";
			this->Text = L"PageManager";
			this->Load += gcnew System::EventHandler(this, &PageManager::PageManager_Load);
			this->OngletGestionPersonnel->ResumeLayout(false);
			this->OngletGestionPersonnel->PerformLayout();
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
					reference->Text = reader["reference"]->ToString();
					prix_achat->Text = reader["prix_achat"]->ToString();
					prix_HT->Text = reader["prix_HT"]->ToString();
					remise->Text = reader["remise"]->ToString();
					taux_TVA->Text = reader["taux_TVA"]->ToString();
					quantite->Text = reader["quantite"]->ToString();
					reaprovisionnement->Text = reader["reaprovisionnement"]->ToString();
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

	private: System::Void listViewPersonnel1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ListViewItem^ selectedItem = nullptr;

		if (listViewPersonnel1->SelectedItems->Count > 0) {
			selectedItem = listViewPersonnel1->SelectedItems[0];
		}

		if (selectedItem != nullptr){
			try {
				// Charger les informations de l'article
				SqlConnection^ conn = gcnew SqlConnection(connexionBDD);
				SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM Personnel WHERE nom = @nom", conn);
				cmd->Parameters->AddWithValue("@nom", selectedItem->Text);

				conn->Open();
				SqlDataReader^ reader = cmd->ExecuteReader();

				if (reader->Read()) {
					nomPersonnelRichTextBox->Text = reader["nom"]->ToString();
					prenomPersonnel->Text = reader["prenom"]->ToString();
					adressePersonnel->Text = reader["adresse"]->ToString();
					superieurPersonnel->Text = reader["superieur"]->ToString();
					date_embauche->Text = reader["date_embauche"]->ToString();
					IdPersonnel->Text = reader["id_Personnel"]->ToString();
					motDePassePersonnel->Text = reader["MotDePasse"]->ToString();
				}
				reader->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}
		}
	}

	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Recherche_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		Rechercher(listView1, listView2, Recherche);
	}

	private: System::Void RecherchePersonnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		Rechercher(listViewPersonnel1, listViewPersonnel2, RecherchePersonnel);
	}

	void Rechercher(ListView^ list1, ListView^ list2, TextBox^ boxRecherche) {
		String^ recherche = boxRecherche->Text->ToLower();
		list1->Items->Clear();

		for each (ListViewItem ^ itemOrigine in list2->Items) {
			if (itemOrigine->SubItems[0]->Text->ToLower()->Contains(recherche)) {
				ListViewItem^ itemClone = dynamic_cast<ListViewItem^>(itemOrigine->Clone());
				list1->Items->Add(itemClone);
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
	//private: System::String^ connexionBDD = "Server=PC-MATHIEU; Database=Projet; User ID=Test; Password=123";

	void ChargerListView(ListView^ list1, ListView^ list2, String^ nomTable, String^ nomObjet)
	{
		SqlConnection^ conn = gcnew SqlConnection(connexionBDD);
		SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM " + nomTable, conn);

		try {
			conn->Open();
			SqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read()) {
				ListViewItem^ item = gcnew ListViewItem(reader[nomObjet]->ToString());
				item->SubItems->Add(reader[nomObjet]->ToString());

				// Ajout d'autres items ICI

				list1->Items->Add(item);
				ClonerListViewItems(list1, list2);

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

	void ModifierTextBox(ListView^ list1, ListView^ list2, String^ nomObjet, RichTextBox^ textBoxModif, String^ nomTable, String^ Where, RichTextBox^ boxId) {
		// Récupèrer la nouvelle chaîne de caractères dans la textBox
		String^ nomColonne = textBoxModif->AccessibleName;
		//MessageBox::Show(nomColonne); // Afficher le nom de la colonne qui vient d'être modifiée
		String^ nouvelleValeur = textBoxModif->Text;
		String^ idObjet = boxId->Text;

		String^ query = "UPDATE " + nomTable + " SET " + nomColonne + " = @nouvelleValeur WHERE " + Where + " = @idObjet";

		// Créer la connexion et la commande
		SqlConnection^ conn = gcnew SqlConnection(connexionBDD);
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);

		// Ajouter les paramètres à la commande
		cmd->Parameters->AddWithValue("@nouvelleValeur", nouvelleValeur);
		cmd->Parameters->AddWithValue("@idObjet", idObjet);

		try {
			// Ouvrir la connexion et exécuter la commande
			conn->Open();
			int rowsAffected = cmd->ExecuteNonQuery();

			// Vérifier si la mise à jour a réussi
			/*/
			if (rowsAffected > 0) {
				MessageBox::Show("Mise à jour réussie.");
			}
			else {
				MessageBox::Show("Aucune donnée mise à jour.");
			}
			*/
		}
		catch (Exception^ e) {
			MessageBox::Show("Erreur lors de la mise à jour : " + e->Message);
		}
		finally {
			// Fermer la connexion
			if (conn->State == ConnectionState::Open)
				conn->Close();
		}
		majGridView(list1, list2, nomTable, "nom");
	}

	void SupprimerSelectionne(ListView^ list1, ListView^ list2, String^ nomObjet, String^ nomTable) {
		String^ query = "DELETE FROM " + nomTable + " WHERE nom = @nomObjet";

		// Créer la connexion et la commande
		SqlConnection^ conn = gcnew SqlConnection(connexionBDD);
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);

		// Ajouter les paramètres à la commande
		cmd->Parameters->AddWithValue("@nomObjet", nomObjet);

		try {
			// Ouvrir la connexion et exécuter la commande
			conn->Open();
			int rowsAffected = cmd->ExecuteNonQuery();

			// Vérifier si la mise à jour a réussi
			if (rowsAffected > 0) {
				MessageBox::Show("Suppression réussie.");
			}
			else {
				MessageBox::Show("Aucune donnée supprimée.");
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Erreur lors de la suppression : " + e->Message);
		}
		finally {
			// Fermer la connexion
			if (conn->State == ConnectionState::Open)
				conn->Close();
		}
		majGridView(list1, list2, nomTable, "nom");
	}

	void CreerObjet(ListView^ list1, ListView^ list2, String^ nomTable, List<String^>^ listeValeurs, List<String^>^ listNomColonnes) {

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
		}
		catch (Exception^ e) {
			MessageBox::Show("Erreur lors de la création : " + e->Message);
		}
		finally {
			// Fermer la connexion
			if (conn->State == ConnectionState::Open)
				conn->Close();
		}
		majGridView(list1, list2, nomTable, "nom");
	}

	void majGridView(ListView^ list1, ListView^ list2, String^ nomTable, String^ nomObjet) {
		// Mise à jour de la gridView
		list1->Items->Clear();
		ChargerListView(list1, list2, nomTable, nomObjet);
	}

	private: System::Void GestionDuPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void ModifArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		ListView^ list1 = listView1;
		ListView^ list2 = listView2;
		String^ nomTable = "Article";
		String^ Where = "id_Article";
		RichTextBox^ boxId = Id;

		List<RichTextBox^>^ boxModifier = gcnew List<RichTextBox^>;
		boxModifier->Add(nom);
		boxModifier->Add(description);
		boxModifier->Add(prix_TTC);
		boxModifier->Add(couleur);
		boxModifier->Add(reference);
		boxModifier->Add(prix_achat);
		boxModifier->Add(prix_HT);
		boxModifier->Add(remise);
		boxModifier->Add(taux_TVA);
		boxModifier->Add(quantite);
		boxModifier->Add(reaprovisionnement);

		if (list1->SelectedItems->Count > 0) {
			ListViewItem^ selectedItem = listView1->SelectedItems[0];
			String^ nomObjet = selectedItem->Text;

			for each (RichTextBox^ element in boxModifier) {
				ModifierTextBox(list1, list2, nomObjet, element, nomTable, Where, boxId);
			}
			
			/*
			ModifierTextBox(list1, list2, nomObjet, nom, nomTable);
			ModifierTextBox(list1, list2, nomObjet, description, nomTable);
			ModifierTextBox(list1, list2, nomObjet, prix_TTC, nomTable);
			ModifierTextBox(list1, list2, nomObjet, couleur, nomTable);
			ModifierTextBox(list1, list2, nomObjet, reference, nomTable);
			ModifierTextBox(list1, list2, nomObjet, prix_achat, nomTable);
			ModifierTextBox(list1, list2, nomObjet, prix_HT, nomTable);
			ModifierTextBox(list1, list2, nomObjet, remise, nomTable);
			ModifierTextBox(list1, list2, nomObjet, taux_TVA, nomTable);
			ModifierTextBox(list1, list2, nomObjet, quantite, nomTable);
			ModifierTextBox(list1, list2, nomObjet, reaprovisionnement, nomTable);
			*/
		}
		else {
			MessageBox::Show("Veuillez sélectionner un article.");
		}
	}
	private: System::Void nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CreerArticle_Click(System::Object^ sender, System::EventArgs^ e) {

		List<String^>^ nomColonnes = gcnew List<String^>;
		nomColonnes->Add("nom");
		nomColonnes->Add("description");
		nomColonnes->Add("prix_TTC");
		nomColonnes->Add("couleur");
		nomColonnes->Add("reference");
		nomColonnes->Add("prix_achat");
		nomColonnes->Add("prix_HT");
		nomColonnes->Add("remise");
		nomColonnes->Add("taux_TVA");
		nomColonnes->Add("quantite");
		nomColonnes->Add("reaprovisionnement");


		List<String^>^ valeurs = gcnew List<String^>;
		valeurs->Add(nom->Text);
		valeurs->Add(description->Text);
		valeurs->Add(prix_TTC->Text);
		valeurs->Add(couleur->Text);
		valeurs->Add(reference->Text);
		valeurs->Add(prix_achat->Text);
		valeurs->Add(prix_HT->Text);
		valeurs->Add(remise->Text);
		valeurs->Add(taux_TVA->Text);
		valeurs->Add(quantite->Text);
		valeurs->Add(reaprovisionnement->Text);

		String^ nomTable = "Article";

		ListView^ list1 = listView1;
		ListView^ list2 = listView2;

		CreerObjet(list1, list2, nomTable, valeurs, nomColonnes);
		
		/*
		String^ query = "INSERT INTO Article (nom, description, prix_TTC, couleur, reference, prix_achat, prix_HT, remise, taux_TVA, quantite, reaprovisionnement) VALUES (@nom, @description, @prix_TTC, @couleur, @reference, @prix_achat, @prix_HT, @remise, @taux_TVA, @quantite, @reaprovisionnement)";

		// Créer la connexion et la commande
		SqlConnection^ conn = gcnew SqlConnection(connexionBDD);
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);

		// Ajouter les paramètres à la commande
		cmd->Parameters->AddWithValue("@nom", nomArticle);
		cmd->Parameters->AddWithValue("@description", descriptionArticle);
		cmd->Parameters->AddWithValue("@prix_TTC", prix_TTC_Article);
		cmd->Parameters->AddWithValue("@couleur", couleurArticle);
		cmd->Parameters->AddWithValue("@reference", referenceArticle);
		cmd->Parameters->AddWithValue("@prix_achat", prix_achatArticle);
		cmd->Parameters->AddWithValue("@prix_HT", prix_HT_Article);
		cmd->Parameters->AddWithValue("@remise", remiseArticle);
		cmd->Parameters->AddWithValue("@taux_TVA", taux_TVA_Article);
		cmd->Parameters->AddWithValue("@quantite", quantiteArticle);
		cmd->Parameters->AddWithValue("@reaprovisionnement", reaprovisionnementArticle);

		try {
			// Ouvrir la connexion et exécuter la commande
			conn->Open();
			int rowsAffected = cmd->ExecuteNonQuery();
		}
		catch (Exception^ e) {
			MessageBox::Show("Erreur lors de la création : " + e->Message);
		}
		finally {
			// Fermer la connexion
			if (conn->State == ConnectionState::Open)
				conn->Close();
		}
		majGridView(listView1, listView2, "Article", "nom");
		*/
	}

	private: System::Void prix_achat_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SupprimerArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count > 0) {
			ListViewItem^ selectedItem = listView1->SelectedItems[0];
			String^ nomArticle = selectedItem->Text;
			String^ nomTable = "Article";

			SupprimerSelectionne(listView1, listView2, nomArticle, nomTable);
		}
		else {
			MessageBox::Show("Veuillez sélectionner un article.");
		}
	}
private: System::Void modifPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	ListView^ list1 = listViewPersonnel1;
	ListView^ list2 = listViewPersonnel2;
	String^ nomTable = "Personnel";
	String^ Where = "id_personnel";
	RichTextBox^ boxId = IdPersonnel;

	List<RichTextBox^>^ boxModifier = gcnew List<RichTextBox^>;
	boxModifier->Add(nomPersonnelRichTextBox);
	boxModifier->Add(prenomPersonnel);
	boxModifier->Add(adressePersonnel);
	boxModifier->Add(superieurPersonnel);
	boxModifier->Add(date_embauche);
	boxModifier->Add(motDePassePersonnel);

	if (listViewPersonnel1->SelectedItems->Count > 0) {
		ListViewItem^ selectedItem = listViewPersonnel1->SelectedItems[0];
		String^ nomPersonnel = selectedItem->Text;
		
		for each (RichTextBox^ element in boxModifier) {
			ModifierTextBox(list1, list2, nomPersonnel, element, nomTable, Where, boxId);
		}

		/*
		ModifierTextBox(list1, list2, nomPersonnel, nomPersonnelRichTextBox, nomTable);
		ModifierTextBox(list1, list2, nomPersonnel, prenomPersonnel, nomTable);
		ModifierTextBox(list1, list2, nomPersonnel, adressePersonnel, nomTable);
		ModifierTextBox(list1, list2, nomPersonnel, superieurPersonnel, nomTable);
		ModifierTextBox(list1, list2, nomPersonnel, date_embauche, nomTable);
		*/
	}
	else {
		MessageBox::Show("Veuillez sélectionner un personnel.");
	}
}
private: System::Void CréerPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nomPersonnel = nomPersonnelRichTextBox->Text;
	String^ nomTable = "Personnel";

	List<String^>^ nomColonnes = gcnew List<String^>;
	nomColonnes->Add("nom");
	nomColonnes->Add("prenom");
	nomColonnes->Add("adresse");
	nomColonnes->Add("superieur");
	nomColonnes->Add("date_embauche");
	nomColonnes->Add("MotDePasse");

	List<String^>^ valeurs = gcnew List<String^>;
	valeurs->Add(nomPersonnel);
	valeurs->Add(prenomPersonnel->Text);
	valeurs->Add(adressePersonnel->Text);
	valeurs->Add(superieurPersonnel->Text);
	valeurs->Add(date_embauche->Text);
	valeurs->Add(motDePassePersonnel->Text);

	ListView^ list1 = listViewPersonnel1;
	ListView^ list2 = listViewPersonnel2;

	CreerObjet(list1, list2, nomTable, valeurs, nomColonnes);
}
private: System::Void SupprimerPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listViewPersonnel1->SelectedItems->Count > 0) {
		ListViewItem^ selectedItem = listViewPersonnel1->SelectedItems[0];
		String^ nomPersonnel = selectedItem->Text;
		String^ nomTable = "Personnel";

		SupprimerSelectionne(listViewPersonnel1, listViewPersonnel2, nomPersonnel, nomTable);
	}
	else {
		MessageBox::Show("Veuillez sélectionner un personnel.");
	}
}
private: System::Void description_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void titreReaprovisionnement_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void date_embauche_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}