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
	/// Description résumée de PageResponsable
	/// </summary>
	public ref class PageResponsable : public System::Windows::Forms::Form
	{
	public:
		PageResponsable(void)
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
		~PageResponsable()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^ tabControlResponsable;
	private: System::Windows::Forms::TabPage^ tabPagePanierMoyen;
	private: System::Windows::Forms::TabPage^ tabPageChiffreAffaire;
	private: System::Windows::Forms::TabPage^ tabPageReaprovisionnement;
	private: System::Windows::Forms::TabPage^ tabPageTotalParClient;
	private: System::Windows::Forms::TabPage^ tabPagePlusVendu;
	private: System::Windows::Forms::TextBox^ textBoxPanierMoyen;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabPage^ tabPageMoinsVendu;
	private: System::Windows::Forms::TabPage^ tabPageValeurStock;
	private: System::Windows::Forms::TabPage^ tabPageValeurAchatStock;

	private: System::Windows::Forms::TextBox^ textBoxChiffreAffaire;
	private: System::Windows::Forms::TextBox^ textBoxDateFin;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxDateDebut;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridViewReaprovisionnement;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridViewPrixTotalClient;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TextBox^ textBoxValeurStock;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxValeurAchatStock;
	private: System::Windows::Forms::TabPage^ tabPageSimulation;
	private: System::Windows::Forms::TabControl^ tabControlSimulation;
	private: System::Windows::Forms::TabPage^ tabPageTVA1;
	private: System::Windows::Forms::TabPage^ tabPageTVA2;
	private: System::Windows::Forms::TabPage^ tabPageTVA3;
	private: System::Windows::Forms::TabPage^ tabPageMarge5;
	private: System::Windows::Forms::TabPage^ tabPageMarge10;
	private: System::Windows::Forms::TabPage^ tabPageMarge15;
	private: System::Windows::Forms::TabPage^ tabPageRemise5;
	private: System::Windows::Forms::TabPage^ tabPageRemise6;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TabPage^ tabPageDemarque2;
	private: System::Windows::Forms::TabPage^ tabPageDemarque3;
	private: System::Windows::Forms::TabPage^ tabPageDemarque5;
	private: System::Windows::Forms::TabPage^ tabPageSimulationPerso;
	private: System::Windows::Forms::DataGridView^ dataGridViewTVA2;
	private: System::Windows::Forms::DataGridView^ dataGridViewTVA3;
	private: System::Windows::Forms::DataGridView^ dataGridViewMarge5;
	private: System::Windows::Forms::DataGridView^ dataGridViewTVA1;
	private: System::Windows::Forms::DataGridView^ dataGridViewMarge10;
	private: System::Windows::Forms::DataGridView^ dataGridViewMarge15;
	private: System::Windows::Forms::DataGridView^ dataGridViewRemise5;
	private: System::Windows::Forms::DataGridView^ dataGridViewRemise6;
	private: System::Windows::Forms::DataGridView^ dataGridViewDemarque2;
	private: System::Windows::Forms::DataGridView^ dataGridViewDemarque3;
	private: System::Windows::Forms::DataGridView^ dataGridViewDemarque5;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::DataGridView^ dataGridViewPerso;




	protected:


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
			this->tabControlResponsable = (gcnew System::Windows::Forms::TabControl());
			this->tabPagePanierMoyen = (gcnew System::Windows::Forms::TabPage());
			this->textBoxPanierMoyen = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPageChiffreAffaire = (gcnew System::Windows::Forms::TabPage());
			this->textBoxChiffreAffaire = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateFin = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxDateDebut = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPageReaprovisionnement = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewReaprovisionnement = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPageTotalParClient = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewPrixTotalClient = (gcnew System::Windows::Forms::DataGridView());
			this->tabPagePlusVendu = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabPageMoinsVendu = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPageValeurStock = (gcnew System::Windows::Forms::TabPage());
			this->textBoxValeurStock = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabPageValeurAchatStock = (gcnew System::Windows::Forms::TabPage());
			this->textBoxValeurAchatStock = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPageSimulation = (gcnew System::Windows::Forms::TabPage());
			this->tabControlSimulation = (gcnew System::Windows::Forms::TabControl());
			this->tabPageTVA1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewTVA1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageTVA2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewTVA2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageTVA3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewTVA3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageMarge5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewMarge5 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageMarge10 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewMarge10 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageMarge15 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewMarge15 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageRemise5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewRemise5 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageRemise6 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewRemise6 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageDemarque2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewDemarque2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageDemarque3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewDemarque3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageDemarque5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewDemarque5 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageSimulationPerso = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->dataGridViewPerso = (gcnew System::Windows::Forms::DataGridView());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabControlResponsable->SuspendLayout();
			this->tabPagePanierMoyen->SuspendLayout();
			this->tabPageChiffreAffaire->SuspendLayout();
			this->tabPageReaprovisionnement->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewReaprovisionnement))->BeginInit();
			this->tabPageTotalParClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPrixTotalClient))->BeginInit();
			this->tabPagePlusVendu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPageMoinsVendu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPageValeurStock->SuspendLayout();
			this->tabPageValeurAchatStock->SuspendLayout();
			this->tabPageSimulation->SuspendLayout();
			this->tabControlSimulation->SuspendLayout();
			this->tabPageTVA1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTVA1))->BeginInit();
			this->tabPageTVA2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTVA2))->BeginInit();
			this->tabPageTVA3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTVA3))->BeginInit();
			this->tabPageMarge5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMarge5))->BeginInit();
			this->tabPageMarge10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMarge10))->BeginInit();
			this->tabPageMarge15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMarge15))->BeginInit();
			this->tabPageRemise5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRemise5))->BeginInit();
			this->tabPageRemise6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRemise6))->BeginInit();
			this->tabPageDemarque2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDemarque2))->BeginInit();
			this->tabPageDemarque3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDemarque3))->BeginInit();
			this->tabPageDemarque5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDemarque5))->BeginInit();
			this->tabPageSimulationPerso->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPerso))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControlResponsable
			// 
			this->tabControlResponsable->Controls->Add(this->tabPagePanierMoyen);
			this->tabControlResponsable->Controls->Add(this->tabPageChiffreAffaire);
			this->tabControlResponsable->Controls->Add(this->tabPageReaprovisionnement);
			this->tabControlResponsable->Controls->Add(this->tabPageTotalParClient);
			this->tabControlResponsable->Controls->Add(this->tabPagePlusVendu);
			this->tabControlResponsable->Controls->Add(this->tabPageMoinsVendu);
			this->tabControlResponsable->Controls->Add(this->tabPageValeurStock);
			this->tabControlResponsable->Controls->Add(this->tabPageValeurAchatStock);
			this->tabControlResponsable->Controls->Add(this->tabPageSimulation);
			this->tabControlResponsable->Location = System::Drawing::Point(2, 4);
			this->tabControlResponsable->Name = L"tabControlResponsable";
			this->tabControlResponsable->SelectedIndex = 0;
			this->tabControlResponsable->Size = System::Drawing::Size(606, 426);
			this->tabControlResponsable->TabIndex = 1;
			// 
			// tabPagePanierMoyen
			// 
			this->tabPagePanierMoyen->Controls->Add(this->textBoxPanierMoyen);
			this->tabPagePanierMoyen->Controls->Add(this->label1);
			this->tabPagePanierMoyen->Location = System::Drawing::Point(4, 22);
			this->tabPagePanierMoyen->Name = L"tabPagePanierMoyen";
			this->tabPagePanierMoyen->Padding = System::Windows::Forms::Padding(3);
			this->tabPagePanierMoyen->Size = System::Drawing::Size(598, 400);
			this->tabPagePanierMoyen->TabIndex = 0;
			this->tabPagePanierMoyen->Text = L"Panier moyen";
			this->tabPagePanierMoyen->UseVisualStyleBackColor = true;
			// 
			// textBoxPanierMoyen
			// 
			this->textBoxPanierMoyen->Location = System::Drawing::Point(272, 119);
			this->textBoxPanierMoyen->Name = L"textBoxPanierMoyen";
			this->textBoxPanierMoyen->Size = System::Drawing::Size(100, 20);
			this->textBoxPanierMoyen->TabIndex = 1;
			this->textBoxPanierMoyen->Click += gcnew System::EventHandler(this, &PageResponsable::textBoxPanierMoyen_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(141, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Le panier Moyen est de: ";
			// 
			// tabPageChiffreAffaire
			// 
			this->tabPageChiffreAffaire->Controls->Add(this->textBoxChiffreAffaire);
			this->tabPageChiffreAffaire->Controls->Add(this->textBoxDateFin);
			this->tabPageChiffreAffaire->Controls->Add(this->label4);
			this->tabPageChiffreAffaire->Controls->Add(this->textBoxDateDebut);
			this->tabPageChiffreAffaire->Controls->Add(this->label3);
			this->tabPageChiffreAffaire->Controls->Add(this->label2);
			this->tabPageChiffreAffaire->Location = System::Drawing::Point(4, 22);
			this->tabPageChiffreAffaire->Name = L"tabPageChiffreAffaire";
			this->tabPageChiffreAffaire->Padding = System::Windows::Forms::Padding(3);
			this->tabPageChiffreAffaire->Size = System::Drawing::Size(598, 363);
			this->tabPageChiffreAffaire->TabIndex = 1;
			this->tabPageChiffreAffaire->Text = L"Chiffre d\'Affaire";
			this->tabPageChiffreAffaire->UseVisualStyleBackColor = true;
			// 
			// textBoxChiffreAffaire
			// 
			this->textBoxChiffreAffaire->Location = System::Drawing::Point(281, 221);
			this->textBoxChiffreAffaire->Name = L"textBoxChiffreAffaire";
			this->textBoxChiffreAffaire->Size = System::Drawing::Size(100, 20);
			this->textBoxChiffreAffaire->TabIndex = 5;
			// 
			// textBoxDateFin
			// 
			this->textBoxDateFin->Location = System::Drawing::Point(281, 137);
			this->textBoxDateFin->Name = L"textBoxDateFin";
			this->textBoxDateFin->Size = System::Drawing::Size(100, 20);
			this->textBoxDateFin->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(178, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Chiffre d\'affaire:";
			// 
			// textBoxDateDebut
			// 
			this->textBoxDateDebut->Location = System::Drawing::Point(281, 75);
			this->textBoxDateDebut->Name = L"textBoxDateDebut";
			this->textBoxDateDebut->Size = System::Drawing::Size(100, 20);
			this->textBoxDateDebut->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(178, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Date de fin:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(178, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Date de début:";
			this->label2->Click += gcnew System::EventHandler(this, &PageResponsable::label2_Click);
			// 
			// tabPageReaprovisionnement
			// 
			this->tabPageReaprovisionnement->Controls->Add(this->dataGridViewReaprovisionnement);
			this->tabPageReaprovisionnement->Controls->Add(this->label5);
			this->tabPageReaprovisionnement->Location = System::Drawing::Point(4, 22);
			this->tabPageReaprovisionnement->Name = L"tabPageReaprovisionnement";
			this->tabPageReaprovisionnement->Size = System::Drawing::Size(598, 363);
			this->tabPageReaprovisionnement->TabIndex = 2;
			this->tabPageReaprovisionnement->Text = L"Réaprovisionnement";
			this->tabPageReaprovisionnement->UseVisualStyleBackColor = true;
			// 
			// dataGridViewReaprovisionnement
			// 
			this->dataGridViewReaprovisionnement->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewReaprovisionnement->Location = System::Drawing::Point(18, 51);
			this->dataGridViewReaprovisionnement->Name = L"dataGridViewReaprovisionnement";
			this->dataGridViewReaprovisionnement->Size = System::Drawing::Size(563, 303);
			this->dataGridViewReaprovisionnement->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(232, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Les produits à réaprovisionner sont les suivants:";
			this->label5->Click += gcnew System::EventHandler(this, &PageResponsable::label5_Click);
			// 
			// tabPageTotalParClient
			// 
			this->tabPageTotalParClient->Controls->Add(this->label6);
			this->tabPageTotalParClient->Controls->Add(this->dataGridViewPrixTotalClient);
			this->tabPageTotalParClient->Location = System::Drawing::Point(4, 22);
			this->tabPageTotalParClient->Name = L"tabPageTotalParClient";
			this->tabPageTotalParClient->Size = System::Drawing::Size(598, 363);
			this->tabPageTotalParClient->TabIndex = 3;
			this->tabPageTotalParClient->Text = L"Total par Client";
			this->tabPageTotalParClient->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(151, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Prix total des achats par client:";
			this->label6->Click += gcnew System::EventHandler(this, &PageResponsable::label6_Click);
			// 
			// dataGridViewPrixTotalClient
			// 
			this->dataGridViewPrixTotalClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPrixTotalClient->Location = System::Drawing::Point(9, 41);
			this->dataGridViewPrixTotalClient->Name = L"dataGridViewPrixTotalClient";
			this->dataGridViewPrixTotalClient->Size = System::Drawing::Size(583, 319);
			this->dataGridViewPrixTotalClient->TabIndex = 0;
			// 
			// tabPagePlusVendu
			// 
			this->tabPagePlusVendu->Controls->Add(this->dataGridView1);
			this->tabPagePlusVendu->Controls->Add(this->label7);
			this->tabPagePlusVendu->Location = System::Drawing::Point(4, 22);
			this->tabPagePlusVendu->Name = L"tabPagePlusVendu";
			this->tabPagePlusVendu->Size = System::Drawing::Size(598, 363);
			this->tabPagePlusVendu->TabIndex = 4;
			this->tabPagePlusVendu->Text = L"Articles les plus Vendu";
			this->tabPagePlusVendu->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 48);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(586, 306);
			this->dataGridView1->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(172, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Les 10 articles les plus vendu sont:";
			// 
			// tabPageMoinsVendu
			// 
			this->tabPageMoinsVendu->Controls->Add(this->dataGridView2);
			this->tabPageMoinsVendu->Controls->Add(this->label8);
			this->tabPageMoinsVendu->Location = System::Drawing::Point(4, 22);
			this->tabPageMoinsVendu->Name = L"tabPageMoinsVendu";
			this->tabPageMoinsVendu->Size = System::Drawing::Size(598, 363);
			this->tabPageMoinsVendu->TabIndex = 5;
			this->tabPageMoinsVendu->Text = L"Articles les Moins Vendu";
			this->tabPageMoinsVendu->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(6, 43);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(586, 317);
			this->dataGridView2->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 14);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(185, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Les 10 articlzes les moins vendu sont:";
			this->label8->Click += gcnew System::EventHandler(this, &PageResponsable::label8_Click);
			// 
			// tabPageValeurStock
			// 
			this->tabPageValeurStock->Controls->Add(this->textBoxValeurStock);
			this->tabPageValeurStock->Controls->Add(this->label9);
			this->tabPageValeurStock->Location = System::Drawing::Point(4, 22);
			this->tabPageValeurStock->Name = L"tabPageValeurStock";
			this->tabPageValeurStock->Size = System::Drawing::Size(598, 363);
			this->tabPageValeurStock->TabIndex = 6;
			this->tabPageValeurStock->Text = L"Valeur du Stock";
			this->tabPageValeurStock->UseVisualStyleBackColor = true;
			// 
			// textBoxValeurStock
			// 
			this->textBoxValeurStock->Location = System::Drawing::Point(281, 177);
			this->textBoxValeurStock->Name = L"textBoxValeurStock";
			this->textBoxValeurStock->Size = System::Drawing::Size(100, 20);
			this->textBoxValeurStock->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(111, 180);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(164, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"La valeur actuel du Stock est de:";
			// 
			// tabPageValeurAchatStock
			// 
			this->tabPageValeurAchatStock->Controls->Add(this->textBoxValeurAchatStock);
			this->tabPageValeurAchatStock->Controls->Add(this->label10);
			this->tabPageValeurAchatStock->Location = System::Drawing::Point(4, 22);
			this->tabPageValeurAchatStock->Name = L"tabPageValeurAchatStock";
			this->tabPageValeurAchatStock->Size = System::Drawing::Size(598, 363);
			this->tabPageValeurAchatStock->TabIndex = 7;
			this->tabPageValeurAchatStock->Text = L"Valeur d\'achat du Stock";
			this->tabPageValeurAchatStock->UseVisualStyleBackColor = true;
			// 
			// textBoxValeurAchatStock
			// 
			this->textBoxValeurAchatStock->Location = System::Drawing::Point(296, 149);
			this->textBoxValeurAchatStock->Name = L"textBoxValeurAchatStock";
			this->textBoxValeurAchatStock->Size = System::Drawing::Size(100, 20);
			this->textBoxValeurAchatStock->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(120, 152);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(170, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"La valeur d\'achat du Stock est de:";
			this->label10->Click += gcnew System::EventHandler(this, &PageResponsable::label10_Click);
			// 
			// tabPageSimulation
			// 
			this->tabPageSimulation->Controls->Add(this->tabControlSimulation);
			this->tabPageSimulation->Controls->Add(this->label11);
			this->tabPageSimulation->Location = System::Drawing::Point(4, 22);
			this->tabPageSimulation->Name = L"tabPageSimulation";
			this->tabPageSimulation->Size = System::Drawing::Size(598, 363);
			this->tabPageSimulation->TabIndex = 8;
			this->tabPageSimulation->Text = L"Simulation de Valeur Commerciale";
			this->tabPageSimulation->UseVisualStyleBackColor = true;
			// 
			// tabControlSimulation
			// 
			this->tabControlSimulation->Controls->Add(this->tabPageTVA1);
			this->tabControlSimulation->Controls->Add(this->tabPageTVA2);
			this->tabControlSimulation->Controls->Add(this->tabPageTVA3);
			this->tabControlSimulation->Controls->Add(this->tabPageMarge5);
			this->tabControlSimulation->Controls->Add(this->tabPageMarge10);
			this->tabControlSimulation->Controls->Add(this->tabPageMarge15);
			this->tabControlSimulation->Controls->Add(this->tabPageRemise5);
			this->tabControlSimulation->Controls->Add(this->tabPageRemise6);
			this->tabControlSimulation->Controls->Add(this->tabPageDemarque2);
			this->tabControlSimulation->Controls->Add(this->tabPageDemarque3);
			this->tabControlSimulation->Controls->Add(this->tabPageDemarque5);
			this->tabControlSimulation->Controls->Add(this->tabPageSimulationPerso);
			this->tabControlSimulation->Location = System::Drawing::Point(6, 34);
			this->tabControlSimulation->Name = L"tabControlSimulation";
			this->tabControlSimulation->SelectedIndex = 0;
			this->tabControlSimulation->Size = System::Drawing::Size(592, 329);
			this->tabControlSimulation->TabIndex = 1;
			// 
			// tabPageTVA1
			// 
			this->tabPageTVA1->Controls->Add(this->dataGridViewTVA1);
			this->tabPageTVA1->Location = System::Drawing::Point(4, 22);
			this->tabPageTVA1->Name = L"tabPageTVA1";
			this->tabPageTVA1->Padding = System::Windows::Forms::Padding(3);
			this->tabPageTVA1->Size = System::Drawing::Size(584, 303);
			this->tabPageTVA1->TabIndex = 0;
			this->tabPageTVA1->Text = L"TVA 1";
			this->tabPageTVA1->UseVisualStyleBackColor = true;
			// 
			// dataGridViewTVA1
			// 
			this->dataGridViewTVA1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewTVA1->Location = System::Drawing::Point(4, 4);
			this->dataGridViewTVA1->Name = L"dataGridViewTVA1";
			this->dataGridViewTVA1->Size = System::Drawing::Size(574, 296);
			this->dataGridViewTVA1->TabIndex = 0;
			// 
			// tabPageTVA2
			// 
			this->tabPageTVA2->Controls->Add(this->dataGridViewTVA2);
			this->tabPageTVA2->Location = System::Drawing::Point(4, 22);
			this->tabPageTVA2->Name = L"tabPageTVA2";
			this->tabPageTVA2->Padding = System::Windows::Forms::Padding(3);
			this->tabPageTVA2->Size = System::Drawing::Size(584, 303);
			this->tabPageTVA2->TabIndex = 1;
			this->tabPageTVA2->Text = L"TVA 2";
			this->tabPageTVA2->UseVisualStyleBackColor = true;
			// 
			// dataGridViewTVA2
			// 
			this->dataGridViewTVA2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewTVA2->Location = System::Drawing::Point(7, 7);
			this->dataGridViewTVA2->Name = L"dataGridViewTVA2";
			this->dataGridViewTVA2->Size = System::Drawing::Size(571, 291);
			this->dataGridViewTVA2->TabIndex = 0;
			this->dataGridViewTVA2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PageResponsable::dataGridViewTVA2_CellContentClick);
			// 
			// tabPageTVA3
			// 
			this->tabPageTVA3->Controls->Add(this->dataGridViewTVA3);
			this->tabPageTVA3->Location = System::Drawing::Point(4, 22);
			this->tabPageTVA3->Name = L"tabPageTVA3";
			this->tabPageTVA3->Size = System::Drawing::Size(584, 303);
			this->tabPageTVA3->TabIndex = 2;
			this->tabPageTVA3->Text = L"TVA 3";
			this->tabPageTVA3->UseVisualStyleBackColor = true;
			// 
			// dataGridViewTVA3
			// 
			this->dataGridViewTVA3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewTVA3->Location = System::Drawing::Point(4, 4);
			this->dataGridViewTVA3->Name = L"dataGridViewTVA3";
			this->dataGridViewTVA3->Size = System::Drawing::Size(577, 296);
			this->dataGridViewTVA3->TabIndex = 0;
			// 
			// tabPageMarge5
			// 
			this->tabPageMarge5->Controls->Add(this->dataGridViewMarge5);
			this->tabPageMarge5->Location = System::Drawing::Point(4, 22);
			this->tabPageMarge5->Name = L"tabPageMarge5";
			this->tabPageMarge5->Size = System::Drawing::Size(584, 303);
			this->tabPageMarge5->TabIndex = 3;
			this->tabPageMarge5->Text = L"Marge Commerciale 5%";
			this->tabPageMarge5->UseVisualStyleBackColor = true;
			// 
			// dataGridViewMarge5
			// 
			this->dataGridViewMarge5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMarge5->Location = System::Drawing::Point(4, 4);
			this->dataGridViewMarge5->Name = L"dataGridViewMarge5";
			this->dataGridViewMarge5->Size = System::Drawing::Size(577, 294);
			this->dataGridViewMarge5->TabIndex = 0;
			// 
			// tabPageMarge10
			// 
			this->tabPageMarge10->Controls->Add(this->dataGridViewMarge10);
			this->tabPageMarge10->Location = System::Drawing::Point(4, 22);
			this->tabPageMarge10->Name = L"tabPageMarge10";
			this->tabPageMarge10->Size = System::Drawing::Size(584, 303);
			this->tabPageMarge10->TabIndex = 4;
			this->tabPageMarge10->Text = L"Marge Commerciale 10%";
			this->tabPageMarge10->UseVisualStyleBackColor = true;
			// 
			// dataGridViewMarge10
			// 
			this->dataGridViewMarge10->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMarge10->Location = System::Drawing::Point(4, 4);
			this->dataGridViewMarge10->Name = L"dataGridViewMarge10";
			this->dataGridViewMarge10->Size = System::Drawing::Size(577, 296);
			this->dataGridViewMarge10->TabIndex = 0;
			// 
			// tabPageMarge15
			// 
			this->tabPageMarge15->Controls->Add(this->dataGridViewMarge15);
			this->tabPageMarge15->Location = System::Drawing::Point(4, 22);
			this->tabPageMarge15->Name = L"tabPageMarge15";
			this->tabPageMarge15->Size = System::Drawing::Size(584, 303);
			this->tabPageMarge15->TabIndex = 5;
			this->tabPageMarge15->Text = L"Marge Commerciale 15%";
			this->tabPageMarge15->UseVisualStyleBackColor = true;
			// 
			// dataGridViewMarge15
			// 
			this->dataGridViewMarge15->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMarge15->Location = System::Drawing::Point(4, 4);
			this->dataGridViewMarge15->Name = L"dataGridViewMarge15";
			this->dataGridViewMarge15->Size = System::Drawing::Size(577, 294);
			this->dataGridViewMarge15->TabIndex = 0;
			// 
			// tabPageRemise5
			// 
			this->tabPageRemise5->Controls->Add(this->dataGridViewRemise5);
			this->tabPageRemise5->Location = System::Drawing::Point(4, 22);
			this->tabPageRemise5->Name = L"tabPageRemise5";
			this->tabPageRemise5->Size = System::Drawing::Size(584, 303);
			this->tabPageRemise5->TabIndex = 6;
			this->tabPageRemise5->Text = L"Remise Commerciale 5%";
			this->tabPageRemise5->UseVisualStyleBackColor = true;
			// 
			// dataGridViewRemise5
			// 
			this->dataGridViewRemise5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewRemise5->Location = System::Drawing::Point(4, 4);
			this->dataGridViewRemise5->Name = L"dataGridViewRemise5";
			this->dataGridViewRemise5->Size = System::Drawing::Size(577, 296);
			this->dataGridViewRemise5->TabIndex = 0;
			// 
			// tabPageRemise6
			// 
			this->tabPageRemise6->Controls->Add(this->dataGridViewRemise6);
			this->tabPageRemise6->Location = System::Drawing::Point(4, 22);
			this->tabPageRemise6->Name = L"tabPageRemise6";
			this->tabPageRemise6->Size = System::Drawing::Size(584, 303);
			this->tabPageRemise6->TabIndex = 7;
			this->tabPageRemise6->Text = L"Remise Commerciale 6%";
			this->tabPageRemise6->UseVisualStyleBackColor = true;
			// 
			// dataGridViewRemise6
			// 
			this->dataGridViewRemise6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewRemise6->Location = System::Drawing::Point(4, 4);
			this->dataGridViewRemise6->Name = L"dataGridViewRemise6";
			this->dataGridViewRemise6->Size = System::Drawing::Size(577, 294);
			this->dataGridViewRemise6->TabIndex = 0;
			// 
			// tabPageDemarque2
			// 
			this->tabPageDemarque2->Controls->Add(this->dataGridViewDemarque2);
			this->tabPageDemarque2->Location = System::Drawing::Point(4, 22);
			this->tabPageDemarque2->Name = L"tabPageDemarque2";
			this->tabPageDemarque2->Size = System::Drawing::Size(584, 303);
			this->tabPageDemarque2->TabIndex = 8;
			this->tabPageDemarque2->Text = L"Démarque Inconnue 2%";
			this->tabPageDemarque2->UseVisualStyleBackColor = true;
			// 
			// dataGridViewDemarque2
			// 
			this->dataGridViewDemarque2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDemarque2->Location = System::Drawing::Point(4, 4);
			this->dataGridViewDemarque2->Name = L"dataGridViewDemarque2";
			this->dataGridViewDemarque2->Size = System::Drawing::Size(577, 294);
			this->dataGridViewDemarque2->TabIndex = 0;
			// 
			// tabPageDemarque3
			// 
			this->tabPageDemarque3->Controls->Add(this->dataGridViewDemarque3);
			this->tabPageDemarque3->Location = System::Drawing::Point(4, 22);
			this->tabPageDemarque3->Name = L"tabPageDemarque3";
			this->tabPageDemarque3->Size = System::Drawing::Size(584, 303);
			this->tabPageDemarque3->TabIndex = 9;
			this->tabPageDemarque3->Text = L"Démarque Inconnue 3%";
			this->tabPageDemarque3->UseVisualStyleBackColor = true;
			// 
			// dataGridViewDemarque3
			// 
			this->dataGridViewDemarque3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDemarque3->Location = System::Drawing::Point(4, 4);
			this->dataGridViewDemarque3->Name = L"dataGridViewDemarque3";
			this->dataGridViewDemarque3->Size = System::Drawing::Size(577, 296);
			this->dataGridViewDemarque3->TabIndex = 0;
			// 
			// tabPageDemarque5
			// 
			this->tabPageDemarque5->Controls->Add(this->dataGridViewDemarque5);
			this->tabPageDemarque5->Location = System::Drawing::Point(4, 22);
			this->tabPageDemarque5->Name = L"tabPageDemarque5";
			this->tabPageDemarque5->Size = System::Drawing::Size(584, 303);
			this->tabPageDemarque5->TabIndex = 10;
			this->tabPageDemarque5->Text = L"Démarque Inconnue 5%";
			this->tabPageDemarque5->UseVisualStyleBackColor = true;
			// 
			// dataGridViewDemarque5
			// 
			this->dataGridViewDemarque5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDemarque5->Location = System::Drawing::Point(4, 4);
			this->dataGridViewDemarque5->Name = L"dataGridViewDemarque5";
			this->dataGridViewDemarque5->Size = System::Drawing::Size(577, 294);
			this->dataGridViewDemarque5->TabIndex = 0;
			// 
			// tabPageSimulationPerso
			// 
			this->tabPageSimulationPerso->Controls->Add(this->listBox1);
			this->tabPageSimulationPerso->Controls->Add(this->dataGridViewPerso);
			this->tabPageSimulationPerso->Location = System::Drawing::Point(4, 22);
			this->tabPageSimulationPerso->Name = L"tabPageSimulationPerso";
			this->tabPageSimulationPerso->Size = System::Drawing::Size(584, 303);
			this->tabPageSimulationPerso->TabIndex = 11;
			this->tabPageSimulationPerso->Text = L"Simulation Personnalisée";
			this->tabPageSimulationPerso->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(11, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(91, 69);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &PageResponsable::listBox1_SelectedIndexChanged);
			// 
			// dataGridViewPerso
			// 
			this->dataGridViewPerso->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPerso->Location = System::Drawing::Point(11, 126);
			this->dataGridViewPerso->Name = L"dataGridViewPerso";
			this->dataGridViewPerso->Size = System::Drawing::Size(570, 172);
			this->dataGridViewPerso->TabIndex = 0;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(18, 18);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(94, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Action à effectuer:";
			// 
			// PageResponsable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 429);
			this->Controls->Add(this->tabControlResponsable);
			this->Name = L"PageResponsable";
			this->Text = L"PageResponsable";
			this->Load += gcnew System::EventHandler(this, &PageResponsable::PageResponsable_Load);
			this->tabControlResponsable->ResumeLayout(false);
			this->tabPagePanierMoyen->ResumeLayout(false);
			this->tabPagePanierMoyen->PerformLayout();
			this->tabPageChiffreAffaire->ResumeLayout(false);
			this->tabPageChiffreAffaire->PerformLayout();
			this->tabPageReaprovisionnement->ResumeLayout(false);
			this->tabPageReaprovisionnement->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewReaprovisionnement))->EndInit();
			this->tabPageTotalParClient->ResumeLayout(false);
			this->tabPageTotalParClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPrixTotalClient))->EndInit();
			this->tabPagePlusVendu->ResumeLayout(false);
			this->tabPagePlusVendu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPageMoinsVendu->ResumeLayout(false);
			this->tabPageMoinsVendu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPageValeurStock->ResumeLayout(false);
			this->tabPageValeurStock->PerformLayout();
			this->tabPageValeurAchatStock->ResumeLayout(false);
			this->tabPageValeurAchatStock->PerformLayout();
			this->tabPageSimulation->ResumeLayout(false);
			this->tabPageSimulation->PerformLayout();
			this->tabControlSimulation->ResumeLayout(false);
			this->tabPageTVA1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTVA1))->EndInit();
			this->tabPageTVA2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTVA2))->EndInit();
			this->tabPageTVA3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTVA3))->EndInit();
			this->tabPageMarge5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMarge5))->EndInit();
			this->tabPageMarge10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMarge10))->EndInit();
			this->tabPageMarge15->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMarge15))->EndInit();
			this->tabPageRemise5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRemise5))->EndInit();
			this->tabPageRemise6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRemise6))->EndInit();
			this->tabPageDemarque2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDemarque2))->EndInit();
			this->tabPageDemarque3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDemarque3))->EndInit();
			this->tabPageDemarque5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDemarque5))->EndInit();
			this->tabPageSimulationPerso->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPerso))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonRetour_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridViewTVA2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxPanierMoyen_Click(System::Object^ sender, System::EventArgs^ e) //Va chercher dans la table facture les différentes prix et en fait la moyenne
	{
		SqlClient::SqlConnection^ sqlConnection1 = gcnew SqlClient::SqlConnection();
		sqlConnection1->ConnectionString = "Data Source=PC-MATHIEU;Initial Catalog=Projet;Integrated Security=True";
		sqlConnection1->Open();
		SqlClient::SqlCommand^ cmd = gcnew SqlClient::SqlCommand();
		cmd->CommandText = "SELECT AVG(montant_total_TTC) FROM Facture";
		cmd->Connection = sqlConnection1;
		SqlClient::SqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read())
		{
			textBoxPanierMoyen->Text = reader->GetDouble(0).ToString();
		}
		sqlConnection1->Close();
	}
	private: System::Void PageResponsable_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
