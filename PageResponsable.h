#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ buttonRetour;
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




	protected:


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonRetour = (gcnew System::Windows::Forms::Button());
			this->tabControlResponsable = (gcnew System::Windows::Forms::TabControl());
			this->tabPagePanierMoyen = (gcnew System::Windows::Forms::TabPage());
			this->tabPageChiffreAffaire = (gcnew System::Windows::Forms::TabPage());
			this->tabPageReaprovisionnement = (gcnew System::Windows::Forms::TabPage());
			this->tabPageTotalParClient = (gcnew System::Windows::Forms::TabPage());
			this->tabPagePlusVendu = (gcnew System::Windows::Forms::TabPage());
			this->tabPageMoinsVendu = (gcnew System::Windows::Forms::TabPage());
			this->tabPageValeurStock = (gcnew System::Windows::Forms::TabPage());
			this->tabPageValeurAchatStock = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxPanierMoyen = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxDateDebut = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxDateFin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxChiffreAffaire = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewReaprovisionnement = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewPrixTotalClient = (gcnew System::Windows::Forms::DataGridView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxValeurStock = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxValeurAchatStock = (gcnew System::Windows::Forms::TextBox());
			this->tabPageSimulation = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabControlSimulation = (gcnew System::Windows::Forms::TabControl());
			this->tabPageTVA1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageTVA2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageTVA3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageMarge5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageMarge10 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageMarge15 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageRemise5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageRemise6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageDemarque2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageDemarque3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageDemarque5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageSimulationPerso = (gcnew System::Windows::Forms::TabPage());
			this->tabControlResponsable->SuspendLayout();
			this->tabPagePanierMoyen->SuspendLayout();
			this->tabPageChiffreAffaire->SuspendLayout();
			this->tabPageReaprovisionnement->SuspendLayout();
			this->tabPageTotalParClient->SuspendLayout();
			this->tabPagePlusVendu->SuspendLayout();
			this->tabPageMoinsVendu->SuspendLayout();
			this->tabPageValeurStock->SuspendLayout();
			this->tabPageValeurAchatStock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewReaprovisionnement))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPrixTotalClient))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPageSimulation->SuspendLayout();
			this->tabControlSimulation->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonRetour
			// 
			this->buttonRetour->Location = System::Drawing::Point(12, 12);
			this->buttonRetour->Name = L"buttonRetour";
			this->buttonRetour->Size = System::Drawing::Size(75, 23);
			this->buttonRetour->TabIndex = 0;
			this->buttonRetour->Text = L"Retour";
			this->buttonRetour->UseVisualStyleBackColor = true;
			this->buttonRetour->Click += gcnew System::EventHandler(this, &PageResponsable::buttonRetour_Click);
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
			this->tabControlResponsable->Location = System::Drawing::Point(2, 41);
			this->tabControlResponsable->Name = L"tabControlResponsable";
			this->tabControlResponsable->SelectedIndex = 0;
			this->tabControlResponsable->Size = System::Drawing::Size(606, 389);
			this->tabControlResponsable->TabIndex = 1;
			// 
			// tabPagePanierMoyen
			// 
			this->tabPagePanierMoyen->Controls->Add(this->textBoxPanierMoyen);
			this->tabPagePanierMoyen->Controls->Add(this->label1);
			this->tabPagePanierMoyen->Location = System::Drawing::Point(4, 22);
			this->tabPagePanierMoyen->Name = L"tabPagePanierMoyen";
			this->tabPagePanierMoyen->Padding = System::Windows::Forms::Padding(3);
			this->tabPagePanierMoyen->Size = System::Drawing::Size(598, 363);
			this->tabPagePanierMoyen->TabIndex = 0;
			this->tabPagePanierMoyen->Text = L"Panier moyen";
			this->tabPagePanierMoyen->UseVisualStyleBackColor = true;
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(141, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Le panier Moyen est de: ";
			// 
			// textBoxPanierMoyen
			// 
			this->textBoxPanierMoyen->Location = System::Drawing::Point(272, 119);
			this->textBoxPanierMoyen->Name = L"textBoxPanierMoyen";
			this->textBoxPanierMoyen->Size = System::Drawing::Size(100, 20);
			this->textBoxPanierMoyen->TabIndex = 1;
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(178, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Date de fin:";
			// 
			// textBoxDateDebut
			// 
			this->textBoxDateDebut->Location = System::Drawing::Point(281, 75);
			this->textBoxDateDebut->Name = L"textBoxDateDebut";
			this->textBoxDateDebut->Size = System::Drawing::Size(100, 20);
			this->textBoxDateDebut->TabIndex = 2;
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
			// textBoxDateFin
			// 
			this->textBoxDateFin->Location = System::Drawing::Point(281, 137);
			this->textBoxDateFin->Name = L"textBoxDateFin";
			this->textBoxDateFin->Size = System::Drawing::Size(100, 20);
			this->textBoxDateFin->TabIndex = 4;
			// 
			// textBoxChiffreAffaire
			// 
			this->textBoxChiffreAffaire->Location = System::Drawing::Point(281, 221);
			this->textBoxChiffreAffaire->Name = L"textBoxChiffreAffaire";
			this->textBoxChiffreAffaire->Size = System::Drawing::Size(100, 20);
			this->textBoxChiffreAffaire->TabIndex = 5;
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
			// dataGridViewReaprovisionnement
			// 
			this->dataGridViewReaprovisionnement->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewReaprovisionnement->Location = System::Drawing::Point(18, 51);
			this->dataGridViewReaprovisionnement->Name = L"dataGridViewReaprovisionnement";
			this->dataGridViewReaprovisionnement->Size = System::Drawing::Size(563, 303);
			this->dataGridViewReaprovisionnement->TabIndex = 1;
			// 
			// dataGridViewPrixTotalClient
			// 
			this->dataGridViewPrixTotalClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPrixTotalClient->Location = System::Drawing::Point(9, 41);
			this->dataGridViewPrixTotalClient->Name = L"dataGridViewPrixTotalClient";
			this->dataGridViewPrixTotalClient->Size = System::Drawing::Size(583, 319);
			this->dataGridViewPrixTotalClient->TabIndex = 0;
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
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(172, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Les 10 articles les plus vendu sont:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 48);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(586, 306);
			this->dataGridView1->TabIndex = 1;
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
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(6, 43);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(586, 317);
			this->dataGridView2->TabIndex = 1;
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
			// textBoxValeurStock
			// 
			this->textBoxValeurStock->Location = System::Drawing::Point(281, 177);
			this->textBoxValeurStock->Name = L"textBoxValeurStock";
			this->textBoxValeurStock->Size = System::Drawing::Size(100, 20);
			this->textBoxValeurStock->TabIndex = 1;
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
			// textBoxValeurAchatStock
			// 
			this->textBoxValeurAchatStock->Location = System::Drawing::Point(296, 149);
			this->textBoxValeurAchatStock->Name = L"textBoxValeurAchatStock";
			this->textBoxValeurAchatStock->Size = System::Drawing::Size(100, 20);
			this->textBoxValeurAchatStock->TabIndex = 1;
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
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(18, 18);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(94, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Action à effectuer:";
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
			this->tabPageTVA1->Location = System::Drawing::Point(4, 22);
			this->tabPageTVA1->Name = L"tabPageTVA1";
			this->tabPageTVA1->Padding = System::Windows::Forms::Padding(3);
			this->tabPageTVA1->Size = System::Drawing::Size(584, 303);
			this->tabPageTVA1->TabIndex = 0;
			this->tabPageTVA1->Text = L"TVA 1";
			this->tabPageTVA1->UseVisualStyleBackColor = true;
			// 
			// tabPageTVA2
			// 
			this->tabPageTVA2->Location = System::Drawing::Point(4, 22);
			this->tabPageTVA2->Name = L"tabPageTVA2";
			this->tabPageTVA2->Padding = System::Windows::Forms::Padding(3);
			this->tabPageTVA2->Size = System::Drawing::Size(584, 303);
			this->tabPageTVA2->TabIndex = 1;
			this->tabPageTVA2->Text = L"TVA 2";
			this->tabPageTVA2->UseVisualStyleBackColor = true;
			// 
			// tabPageTVA3
			// 
			this->tabPageTVA3->Location = System::Drawing::Point(4, 22);
			this->tabPageTVA3->Name = L"tabPageTVA3";
			this->tabPageTVA3->Size = System::Drawing::Size(584, 303);
			this->tabPageTVA3->TabIndex = 2;
			this->tabPageTVA3->Text = L"TVA 3";
			this->tabPageTVA3->UseVisualStyleBackColor = true;
			// 
			// tabPageMarge5
			// 
			this->tabPageMarge5->Location = System::Drawing::Point(4, 22);
			this->tabPageMarge5->Name = L"tabPageMarge5";
			this->tabPageMarge5->Size = System::Drawing::Size(584, 303);
			this->tabPageMarge5->TabIndex = 3;
			this->tabPageMarge5->Text = L"Marge Commerciale 5%";
			this->tabPageMarge5->UseVisualStyleBackColor = true;
			// 
			// tabPageMarge10
			// 
			this->tabPageMarge10->Location = System::Drawing::Point(4, 22);
			this->tabPageMarge10->Name = L"tabPageMarge10";
			this->tabPageMarge10->Size = System::Drawing::Size(584, 303);
			this->tabPageMarge10->TabIndex = 4;
			this->tabPageMarge10->Text = L"Marge Commerciale 1Marge Commerciale 10%";
			this->tabPageMarge10->UseVisualStyleBackColor = true;
			// 
			// tabPageMarge15
			// 
			this->tabPageMarge15->Location = System::Drawing::Point(4, 22);
			this->tabPageMarge15->Name = L"tabPageMarge15";
			this->tabPageMarge15->Size = System::Drawing::Size(584, 303);
			this->tabPageMarge15->TabIndex = 5;
			this->tabPageMarge15->Text = L"Marge Commerciale 15%";
			this->tabPageMarge15->UseVisualStyleBackColor = true;
			// 
			// tabPageRemise5
			// 
			this->tabPageRemise5->Location = System::Drawing::Point(4, 22);
			this->tabPageRemise5->Name = L"tabPageRemise5";
			this->tabPageRemise5->Size = System::Drawing::Size(584, 303);
			this->tabPageRemise5->TabIndex = 6;
			this->tabPageRemise5->Text = L"Remise Commerciale 5%";
			this->tabPageRemise5->UseVisualStyleBackColor = true;
			// 
			// tabPageRemise6
			// 
			this->tabPageRemise6->Location = System::Drawing::Point(4, 22);
			this->tabPageRemise6->Name = L"tabPageRemise6";
			this->tabPageRemise6->Size = System::Drawing::Size(584, 303);
			this->tabPageRemise6->TabIndex = 7;
			this->tabPageRemise6->Text = L"Remise Commerciale 6%";
			this->tabPageRemise6->UseVisualStyleBackColor = true;
			// 
			// tabPageDemarque2
			// 
			this->tabPageDemarque2->Location = System::Drawing::Point(4, 22);
			this->tabPageDemarque2->Name = L"tabPageDemarque2";
			this->tabPageDemarque2->Size = System::Drawing::Size(584, 303);
			this->tabPageDemarque2->TabIndex = 8;
			this->tabPageDemarque2->Text = L"Démarque Inconnue 2%";
			this->tabPageDemarque2->UseVisualStyleBackColor = true;
			// 
			// tabPageDemarque3
			// 
			this->tabPageDemarque3->Location = System::Drawing::Point(4, 22);
			this->tabPageDemarque3->Name = L"tabPageDemarque3";
			this->tabPageDemarque3->Size = System::Drawing::Size(584, 303);
			this->tabPageDemarque3->TabIndex = 9;
			this->tabPageDemarque3->Text = L"Démarque Inconnue 3%";
			this->tabPageDemarque3->UseVisualStyleBackColor = true;
			// 
			// tabPageDemarque5
			// 
			this->tabPageDemarque5->Location = System::Drawing::Point(4, 22);
			this->tabPageDemarque5->Name = L"tabPageDemarque5";
			this->tabPageDemarque5->Size = System::Drawing::Size(584, 303);
			this->tabPageDemarque5->TabIndex = 10;
			this->tabPageDemarque5->Text = L"Démarque Inconnue 5%";
			this->tabPageDemarque5->UseVisualStyleBackColor = true;
			// 
			// tabPageSimulationPerso
			// 
			this->tabPageSimulationPerso->Location = System::Drawing::Point(4, 22);
			this->tabPageSimulationPerso->Name = L"tabPageSimulationPerso";
			this->tabPageSimulationPerso->Size = System::Drawing::Size(584, 303);
			this->tabPageSimulationPerso->TabIndex = 11;
			this->tabPageSimulationPerso->Text = L"Simulation Personnalisée";
			this->tabPageSimulationPerso->UseVisualStyleBackColor = true;
			// 
			// PageResponsable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 429);
			this->Controls->Add(this->tabControlResponsable);
			this->Controls->Add(this->buttonRetour);
			this->Name = L"PageResponsable";
			this->Text = L"PageResponsable";
			this->tabControlResponsable->ResumeLayout(false);
			this->tabPagePanierMoyen->ResumeLayout(false);
			this->tabPagePanierMoyen->PerformLayout();
			this->tabPageChiffreAffaire->ResumeLayout(false);
			this->tabPageChiffreAffaire->PerformLayout();
			this->tabPageReaprovisionnement->ResumeLayout(false);
			this->tabPageReaprovisionnement->PerformLayout();
			this->tabPageTotalParClient->ResumeLayout(false);
			this->tabPageTotalParClient->PerformLayout();
			this->tabPagePlusVendu->ResumeLayout(false);
			this->tabPagePlusVendu->PerformLayout();
			this->tabPageMoinsVendu->ResumeLayout(false);
			this->tabPageMoinsVendu->PerformLayout();
			this->tabPageValeurStock->ResumeLayout(false);
			this->tabPageValeurStock->PerformLayout();
			this->tabPageValeurAchatStock->ResumeLayout(false);
			this->tabPageValeurAchatStock->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewReaprovisionnement))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPrixTotalClient))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPageSimulation->ResumeLayout(false);
			this->tabPageSimulation->PerformLayout();
			this->tabControlSimulation->ResumeLayout(false);
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
};
}
