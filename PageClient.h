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
	/// Description r�sum�e de PageClient
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
		/// Nettoyage des ressources utilis�es.
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
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code

		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
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
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->OngletsClient->SuspendLayout();
			this->Commande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->richTextBox2->Text = L"Quantit�";
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
			this->Panier->Location = System::Drawing::Point(4, 25);
			this->Panier->Name = L"Panier";
			this->Panier->Padding = System::Windows::Forms::Padding(3);
			this->Panier->Size = System::Drawing::Size(962, 472);
			this->Panier->TabIndex = 2;
			this->Panier->Text = L"Panier";
			this->Panier->UseVisualStyleBackColor = true;
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
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(276, 90);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(349, 295);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
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

		// D�terminez l'image � afficher en fonction de selectedItem
		// Par exemple, si vos images sont nomm�es selon les noms des �l�ments
		String^ imagePath = "Images/Preview_Articles/" + selectedItem->Text + ".jpg";

		try {
			pictureBox1->Image = Image::FromFile(imagePath);
		}
		catch (System::IO::FileNotFoundException^) {
			String^ imagePath = "Images/Preview_Articles/Erreur.jpg"; // ou une image par d�faut si l'image n'est pas trouv�e
			pictureBox1->Image = Image::FromFile(imagePath);
		}
	}
	else {
		pictureBox1->Image = nullptr; // Aucun �l�ment s�lectionn� ou r�initialiser l'image
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
};
}