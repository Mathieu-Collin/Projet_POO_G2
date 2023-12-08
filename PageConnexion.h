#pragma once
#include "PageClient.h"
#include "CLClient.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de PageConnexion
	/// </summary>
	public ref class PageConnexion : public System::Windows::Forms::Form
	{
	public:
		PageConnexion(void)
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
		~PageConnexion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ Connect_Button;
	private: System::Windows::Forms::Button^ buttonCreateAcount;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Connect_Button = (gcnew System::Windows::Forms::Button());
			this->buttonCreateAcount = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;

			this->label1->Location = System::Drawing::Point(209, 74);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom: ";
			this->label1->Click += gcnew System::EventHandler(this, &PageConnexion::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 16);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Page de Connexion";
			this->label2->Click += gcnew System::EventHandler(this, &PageConnexion::label2_Click);
			// 
			// textBox1
			// 

			this->textBox1->Location = System::Drawing::Point(283, 70);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);

			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &PageConnexion::textBox1_TextChanged);
			// 
			// textBox2
			// 

			this->textBox2->Location = System::Drawing::Point(283, 138);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);

			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;

			this->label3->Location = System::Drawing::Point(209, 142);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);

			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Prénom: ";
			// 

			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(283, 209);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(171, 218);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Mot de Passe: ";
			// 

			// Connect_Button
			// 
			this->Connect_Button->Location = System::Drawing::Point(143, 311);
			this->Connect_Button->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Connect_Button->Name = L"Connect_Button";
			this->Connect_Button->Size = System::Drawing::Size(171, 28);
			this->Connect_Button->TabIndex = 7;
			this->Connect_Button->Text = L"Se Connecter";
			this->Connect_Button->UseVisualStyleBackColor = true;
			this->Connect_Button->Click += gcnew System::EventHandler(this, &PageConnexion::Connect_Button_Click);
			// 
			// buttonCreateAcount
			// 

			this->button1->Location = System::Drawing::Point(385, 311);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 28);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Créer un Compte";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PageConnexion::button1_Click);

			// 
			// PageConnexion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

			this->ClientSize = System::Drawing::Size(500, 322);
			this->Controls->Add(this->buttonCreateAcount);

			this->Controls->Add(this->Connect_Button);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"PageConnexion";
			this->Text = L"PageConnexion";
			this->Load += gcnew System::EventHandler(this, &PageConnexion::PageConnexion_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::String^connectionstring = "Server=PC-MATHIEU; Database=Projet; Integrated Security=True;";

		void PageConnexion::Connect_Button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		String^ nom = textBox1->Text;
		String^ prenom = textBox2->Text;
		String^ query = "SELECT * FROM Client WHERE Nom = '" + nom + "' AND Prenom = '" + prenom + "'";
		SqlConnection^ con = gcnew SqlConnection(connectionstring);
		SqlCommand^ cmd = gcnew SqlCommand(query, con);
		SqlDataReader^ reader;
		try {
			con->Open();
			reader = cmd->ExecuteReader();
			int count = 0;
			while (reader->Read()) {
				count++;
			}
			if (count == 1) {
				MessageBox::Show("Connexion réussie");
				PageClient^ pageClientForm = gcnew PageClient();
				pageClientForm->ShowDialog();
			}
			else if (count > 1) {
				MessageBox::Show("Nom et Prénom déjà utilisés");
			}
			else {
				MessageBox::Show("Nom et Prénom incorrects");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void PageConnexion_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonCreateAcount_Click(System::Object^ sender, System::EventArgs^ e) //fonction qui vérifie que le nom et le prénom ne sont pas déjà utilisés et qui crée un compte
{
	String^ nom = textBox1->Text;
	String^ prenom = textBox2->Text;
	String^ query = "SELECT * FROM Client WHERE Nom = '" + nom + "' AND Prenom = '" + prenom + "'";
	SqlConnection^ con = gcnew SqlConnection(connectionstring);
	SqlCommand^ cmd = gcnew SqlCommand(query, con);
	SqlDataReader^ reader;
	try {
		con->Open();
		reader = cmd->ExecuteReader();
		int count = 0;
		while (reader->Read()) {
			count++;
		}
		if (count == 1) {
			MessageBox::Show("Nom et Prénom déjà utilisés");
		}
		else if (count > 1) {
			MessageBox::Show("Nom et Prénom déjà utilisés");
		}
		else {
			MessageBox::Show("Nom et Prénom disponibles");
			String^ query2 = "INSERT INTO Client (Nom, Prenom) VALUES ('" + nom + "', '" + prenom + "')";
			SqlCommand^ cmd2 = gcnew SqlCommand(query2, con);
			cmd2->ExecuteNonQuery();
			MessageBox::Show("Compte créé");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}


