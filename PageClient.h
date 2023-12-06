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

	private: System::Windows::Forms::ImageList^ imageList1;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ AjouterPanier;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom;
	private: System::Windows::Forms::DataGridViewImageColumn^ Image;
	private: System::Windows::Forms::DataGridViewImageColumn^ Prix_TTC;






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
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L"non"));
			System::Windows::Forms::ListViewItem^ listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(L"oui"));
			System::Windows::Forms::ListViewItem^ listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(L"PC_Bureau"));
			System::Windows::Forms::ListViewItem^ listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(L"weeesh"));
			System::Windows::Forms::ListViewItem^ listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(L"non"));
			System::Windows::Forms::ListViewItem^ listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(L"oui"));
			System::Windows::Forms::ListViewItem^ listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(L"PC_Bureau"));
			System::Windows::Forms::ListViewItem^ listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(L"weeesh"));
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PageClient::typeid));
			this->OngletsClient = (gcnew System::Windows::Forms::TabControl());
			this->Commande = (gcnew System::Windows::Forms::TabPage());
			this->AjouterPanier = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Recherche = (gcnew System::Windows::Forms::TextBox());
			this->Compte = (gcnew System::Windows::Forms::TabPage());
			this->Panier = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->Nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Image = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->Prix_TTC = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->OngletsClient->SuspendLayout();
			this->Commande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->OngletsClient->Name = L"OngletsClient";
			this->OngletsClient->SelectedIndex = 0;
			this->OngletsClient->Size = System::Drawing::Size(970, 501);
			this->OngletsClient->TabIndex = 3;
			// 
			// Commande
			// 
			this->Commande->AutoScroll = true;
			this->Commande->Controls->Add(this->AjouterPanier);
			this->Commande->Controls->Add(this->pictureBox1);
			this->Commande->Controls->Add(this->listView2);
			this->Commande->Controls->Add(this->richTextBox5);
			this->Commande->Controls->Add(this->richTextBox4);
			this->Commande->Controls->Add(this->richTextBox3);
			this->Commande->Controls->Add(this->richTextBox2);
			this->Commande->Controls->Add(this->listView1);
			this->Commande->Controls->Add(this->richTextBox1);
			this->Commande->Controls->Add(this->Recherche);
			this->Commande->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Commande->Location = System::Drawing::Point(4, 25);
			this->Commande->Name = L"Commande";
			this->Commande->Padding = System::Windows::Forms::Padding(3);
			this->Commande->Size = System::Drawing::Size(962, 472);
			this->Commande->TabIndex = 0;
			this->Commande->Text = L"Commande";
			this->Commande->UseVisualStyleBackColor = true;
			// 
			// AjouterPanier
			// 
			this->AjouterPanier->Location = System::Drawing::Point(673, 275);
			this->AjouterPanier->Name = L"AjouterPanier";
			this->AjouterPanier->Size = System::Drawing::Size(244, 35);
			this->AjouterPanier->TabIndex = 11;
			this->AjouterPanier->Text = L"Ajouter au panier";
			this->AjouterPanier->UseVisualStyleBackColor = true;
			this->AjouterPanier->Click += gcnew System::EventHandler(this, &PageClient::AjouterPanier_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(276, 90);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(349, 295);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// listView2
			// 
			this->listView2->HideSelection = false;
			listViewItem1->Tag = L"";
			this->listView2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(4) {
				listViewItem1, listViewItem2,
					listViewItem3, listViewItem4
			});
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
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &PageClient::listView2_SelectedIndexChanged);
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(882, 184);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->ReadOnly = true;
			this->richTextBox5->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox5->Size = System::Drawing::Size(53, 24);
			this->richTextBox5->TabIndex = 8;
			this->richTextBox5->Text = L"Couleur";
			this->richTextBox5->TextChanged += gcnew System::EventHandler(this, &PageClient::richTextBox5_TextChanged);
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(655, 90);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->ReadOnly = true;
			this->richTextBox4->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox4->Size = System::Drawing::Size(65, 27);
			this->richTextBox4->TabIndex = 7;
			this->richTextBox4->Text = L"Prix TTC";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(655, 123);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox3->Size = System::Drawing::Size(280, 56);
			this->richTextBox3->TabIndex = 6;
			this->richTextBox3->Text = L"Description";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(655, 185);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox2->Size = System::Drawing::Size(57, 23);
			this->richTextBox2->TabIndex = 5;
			this->richTextBox2->Text = L"Quantité";
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			listViewItem5->Tag = L"";
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(4) {
				listViewItem5, listViewItem6,
					listViewItem7, listViewItem8
			});
			this->listView1->Location = System::Drawing::Point(21, 79);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(236, 326);
			this->listView1->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->listView1->TabIndex = 4;
			this->listView1->Tag = L"listeArticles";
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::List;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &PageClient::listView1_SelectedIndexChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(655, 54);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox1->Size = System::Drawing::Size(75, 30);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"Nom article";
			// 
			// Recherche
			// 
			this->Recherche->Location = System::Drawing::Point(21, 51);
			this->Recherche->Name = L"Recherche";
			this->Recherche->Size = System::Drawing::Size(236, 22);
			this->Recherche->TabIndex = 0;
			this->Recherche->Text = L"Rechercher";
			this->Recherche->TextChanged += gcnew System::EventHandler(this, &PageClient::Recherche_TextChanged);
			// 
			// Compte
			// 
			this->Compte->Location = System::Drawing::Point(4, 25);
			this->Compte->Name = L"Compte";
			this->Compte->Padding = System::Windows::Forms::Padding(3);
			this->Compte->Size = System::Drawing::Size(962, 472);
			this->Compte->TabIndex = 1;
			this->Compte->Text = L"Compte";
			this->Compte->UseVisualStyleBackColor = true;
			this->Compte->Click += gcnew System::EventHandler(this, &PageClient::Compte_Click);
			// 
			// Panier
			// 
			this->Panier->Controls->Add(this->dataGridView1);
			this->Panier->Location = System::Drawing::Point(4, 25);
			this->Panier->Name = L"Panier";
			this->Panier->Padding = System::Windows::Forms::Padding(3);
			this->Panier->Size = System::Drawing::Size(962, 472);
			this->Panier->TabIndex = 2;
			this->Panier->Text = L"Panier";
			this->Panier->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Nom, this->Image,
					this->Prix_TTC
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(898, 393);
			this->dataGridView1->TabIndex = 0;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::IndianRed;
			this->imageList1->Images->SetKeyName(0, L"PC_Bureau.jpg");
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
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
			this->Prix_TTC->Width = 125;
			// 
			// PageClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(970, 499);
			this->Controls->Add(this->OngletsClient);
			this->Name = L"PageClient";
			this->Text = L"PageClient";
			this->Load += gcnew System::EventHandler(this, &PageClient::PageClient_Load);
			this->OngletsClient->ResumeLayout(false);
			this->Commande->ResumeLayout(false);
			this->Commande->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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

	for each (ListViewItem^ itemOrigine in listView2->Items) {
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
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
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
    DataGridViewTextBoxCell^ textBoxCell = gcnew DataGridViewTextBoxCell();
    textBoxCell->Value = listView1->SelectedItems[0]->Text; // Texte à mettre dans la cellule

    // La TextBox est mise dans une cellule spécifique
    dataGridView1->Rows[objetPanier-1]->Cells[0] = textBoxCell;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}