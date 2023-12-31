#pragma once
#include "PageClient.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de PageConnexion
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
		/// Nettoyage des ressources utilis�es.
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
	private: System::Windows::Forms::TextBox^ textBoxNom;

	private: System::Windows::Forms::TextBox^ textBoxPrenom;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxMdp;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Connect_Button;
	private: System::Windows::Forms::Button^ buttonCrea;




	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxMdp = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Connect_Button = (gcnew System::Windows::Forms::Button());
			this->buttonCrea = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(157, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom: ";
			this->label1->Click += gcnew System::EventHandler(this, &PageConnexion::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Page de Connexion";
			this->label2->Click += gcnew System::EventHandler(this, &PageConnexion::label2_Click);
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(212, 57);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(100, 20);
			this->textBoxNom->TabIndex = 2;
			this->textBoxNom->TextChanged += gcnew System::EventHandler(this, &PageConnexion::textBox1_TextChanged);
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Location = System::Drawing::Point(212, 112);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(100, 20);
			this->textBoxPrenom->TabIndex = 4;
			this->textBoxPrenom->TextChanged += gcnew System::EventHandler(this, &PageConnexion::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(157, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Pr�nom: ";
			// 
			// textBoxMdp
			// 
			this->textBoxMdp->Location = System::Drawing::Point(212, 170);
			this->textBoxMdp->Name = L"textBoxMdp";
			this->textBoxMdp->Size = System::Drawing::Size(100, 20);
			this->textBoxMdp->TabIndex = 6;
			this->textBoxMdp->UseSystemPasswordChar = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(128, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Mot de Passe: ";
			// 
			// Connect_Button
			// 
			this->Connect_Button->Location = System::Drawing::Point(107, 253);
			this->Connect_Button->Name = L"Connect_Button";
			this->Connect_Button->Size = System::Drawing::Size(128, 23);
			this->Connect_Button->TabIndex = 7;
			this->Connect_Button->Text = L"Se Connecter";
			this->Connect_Button->UseVisualStyleBackColor = true;
			this->Connect_Button->Click += gcnew System::EventHandler(this, &PageConnexion::Connect_Button_Click);
			// 
			// buttonCrea
			// 
			this->buttonCrea->Location = System::Drawing::Point(289, 253);
			this->buttonCrea->Name = L"buttonCrea";
			this->buttonCrea->Size = System::Drawing::Size(128, 23);
			this->buttonCrea->TabIndex = 8;
			this->buttonCrea->Text = L"Cr�er un Compte";
			this->buttonCrea->UseVisualStyleBackColor = true;
			this->buttonCrea->Click += gcnew System::EventHandler(this, &PageConnexion::button_Create_Click);
			// 
			// PageConnexion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 322);
			this->Controls->Add(this->buttonCrea);
			this->Controls->Add(this->Connect_Button);
			this->Controls->Add(this->textBoxMdp);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"PageConnexion";
			this->Text = L"PageConnexion";
			this->Load += gcnew System::EventHandler(this, &PageConnexion::PageConnexion_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::String^ connectionString = "Server=DYGUERG; Database=Projet; Integrated Security=True;";
	//private: System::String^ connectionString = "Server=PC-MATHIEU; Database=Projet; Integrated Security=True;";
	private: System::Void Connect_Button_Click(System::Object^ sender, System::EventArgs^ e)// Regarde si l'utilisateur existe et si il existe alors le connecter mais si il n'existe pas, ouvrir une pop up d'erreur
	{
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		int IdDuClient = 0;

		String^ nom = textBoxNom->Text;
		if (nom == "") {
			MessageBox::Show("Veuillez entrer un nom");
			return;
		}
		String^ prenom = textBoxPrenom->Text;
		if (prenom == "") {
			MessageBox::Show("Veuillez entrer un pr�nom");
			return;
		}
		String^ mdp = textBoxMdp->Text;
		if (mdp == "") {
			MessageBox::Show("Veuillez entrer un mot de passe");
			return;
		}

		try {
			con->Open();

			// Requ�te pour obtenir id_client et v�rifier les identifiants
			String^ query = "SELECT id_client FROM Client WHERE nom = @nom AND prenom = @prenom AND MotDePasse = @mdp";
			SqlCommand^ cmd = gcnew SqlCommand(query, con);

			// Param�tres
			cmd->Parameters->AddWithValue("@nom", nom);
			cmd->Parameters->AddWithValue("@prenom", prenom);
			cmd->Parameters->AddWithValue("@mdp", mdp);

			// Ex�cution de la requ�te
			SqlDataReader^ dr = cmd->ExecuteReader();

			if (dr->Read()) {
				// R�cup�ration de l'ID du client
				IdDuClient = dr->GetInt32(0);

				// Connexion r�ussie
				MessageBox::Show("Connexion r�ussie");
				PageClient^ pageClient = gcnew PageClient(IdDuClient);
				pageClient->ShowDialog();
			}
			else {
				// Identifiants incorrects
				MessageBox::Show("Connexion �chou�e");
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Erreur lors de la connexion : " + e->Message);
		}
		finally {
			if (con != nullptr && con->State == ConnectionState::Open)
				con->Close();
		}

	}


	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PageConnexion_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_Create_Click(System::Object^ sender, System::EventArgs^ e) // Fonction qui cr�e un compte si il n'existe et si les champs ne sont pas vides pas d�j� puis ferme la page de connection
	{
		String^ nom = textBoxNom->Text;
		if (String::IsNullOrWhiteSpace(nom)) {
			MessageBox::Show("Veuillez entrer un nom");
			return;
		}
		String^ prenom = textBoxPrenom->Text;
		if (String::IsNullOrWhiteSpace(prenom)) {
			MessageBox::Show("Veuillez entrer un pr�nom");
			return;
		}
		String^ mdp = textBoxMdp->Text;
		if (String::IsNullOrWhiteSpace(mdp)) {
			MessageBox::Show("Veuillez entrer un mot de passe");
			return;
		}

		String^ query = "SELECT * FROM Client WHERE Nom = @nom AND Prenom = @prenom AND MotDePasse = @mdp";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		SqlCommand^ cmd = gcnew SqlCommand(query, con);
		cmd->Parameters->AddWithValue("@nom", nom);
		cmd->Parameters->AddWithValue("@prenom", prenom);
		cmd->Parameters->AddWithValue("@mdp", mdp);
		con->Open();
		SqlDataReader^ dr = cmd->ExecuteReader();
		int count = 0;
		while (dr->Read()) {
			count += 1;
		}
		if (count == 1) {
			MessageBox::Show("Ce compte existe d�j�");
		}
		if (String::IsNullOrWhiteSpace(nom)) {
			MessageBox::Show("Veuillez entrer un nom");
			return;
		}
		if (String::IsNullOrWhiteSpace(prenom)) {
			MessageBox::Show("Veuillez entrer un pr�nom");
			return;
		}
		if (String::IsNullOrWhiteSpace(mdp)) {
			MessageBox::Show("Veuillez entrer un mot de passe");
			return;
		}

		else {
			String^ query2 = "INSERT INTO Client (Nom, Prenom, MotDePasse) VALUES ('" + nom + "', '" + prenom + "', '" + mdp + "')";
			SqlCommand^ cmd2 = gcnew SqlCommand(query2, con);
			dr->Close();
			cmd2->ExecuteNonQuery();
			MessageBox::Show("Compte cr��");
			//PageClient^ pageClient = gcnew PageClient();
			//pageClient->ShowDialog();
		}
		con->Close();
	}
	private: System::Void PageConnexion_Load_1(System::Object^ sender, System::EventArgs^ e) {
	}

};
}