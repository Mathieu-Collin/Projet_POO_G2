#pragma once
#include "PageEmploye.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de PageConnexionEmploye
	/// </summary>
	public ref class PageConnexionEmploye : public System::Windows::Forms::Form
	{
	public:
		PageConnexionEmploye(void)
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
		~PageConnexionEmploye()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonConnect;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxMdp;



	private: System::Windows::Forms::Label^ labelNom;
	private: System::Windows::Forms::Label^ labelPrenom;
	private: System::Windows::Forms::Label^ labelMdp;



	protected:

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
			this->buttonConnect = (gcnew System::Windows::Forms::Button());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMdp = (gcnew System::Windows::Forms::TextBox());
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->labelPrenom = (gcnew System::Windows::Forms::Label());
			this->labelMdp = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonConnect
			// 
			this->buttonConnect->Location = System::Drawing::Point(161, 223);
			this->buttonConnect->Margin = System::Windows::Forms::Padding(2);
			this->buttonConnect->Name = L"buttonConnect";
			this->buttonConnect->Size = System::Drawing::Size(104, 19);
			this->buttonConnect->TabIndex = 0;
			this->buttonConnect->Text = L"Se connecter";
			this->buttonConnect->UseVisualStyleBackColor = true;
			this->buttonConnect->Click += gcnew System::EventHandler(this, &PageConnexionEmploye::Connect_Button_Click);
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(165, 47);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(100, 20);
			this->textBoxNom->TabIndex = 1;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Location = System::Drawing::Point(165, 111);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(100, 20);
			this->textBoxPrenom->TabIndex = 2;
			// 
			// textBoxMdp
			// 
			this->textBoxMdp->Location = System::Drawing::Point(165, 167);
			this->textBoxMdp->Name = L"textBoxMdp";
			this->textBoxMdp->Size = System::Drawing::Size(100, 20);
			this->textBoxMdp->TabIndex = 3;
			this->textBoxMdp->UseSystemPasswordChar = true;
			// 
			// labelNom
			// 
			this->labelNom->AutoSize = true;
			this->labelNom->Location = System::Drawing::Point(124, 50);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(32, 13);
			this->labelNom->TabIndex = 4;
			this->labelNom->Text = L"Nom:";
			this->labelNom->Click += gcnew System::EventHandler(this, &PageConnexionEmploye::label1_Click);
			// 
			// labelPrenom
			// 
			this->labelPrenom->AutoSize = true;
			this->labelPrenom->Location = System::Drawing::Point(116, 113);
			this->labelPrenom->Name = L"labelPrenom";
			this->labelPrenom->Size = System::Drawing::Size(46, 13);
			this->labelPrenom->TabIndex = 5;
			this->labelPrenom->Text = L"Prénom:";
			// 
			// labelMdp
			// 
			this->labelMdp->AutoSize = true;
			this->labelMdp->Location = System::Drawing::Point(89, 171);
			this->labelMdp->Name = L"labelMdp";
			this->labelMdp->Size = System::Drawing::Size(75, 13);
			this->labelMdp->TabIndex = 6;
			this->labelMdp->Text = L"Mot de Passe:";
			// 
			// PageConnexionEmploye
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 302);
			this->Controls->Add(this->labelMdp);
			this->Controls->Add(this->labelPrenom);
			this->Controls->Add(this->labelNom);
			this->Controls->Add(this->textBoxMdp);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->buttonConnect);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PageConnexionEmploye";
			this->Text = L"PageConnexionEmploye";
			this->Load += gcnew System::EventHandler(this, &PageConnexionEmploye::PageEmploye_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PageEmploye_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonConnect_Click(System::Object^ sender, System::EventArgs^ e) //vérifie si l'employé existe dans la table Employe puis vérifie si les champs sont remplie avant de connecter le ma
	{
	}
		   //private: System::String^ connectionString = "Server=PC-MATHIEU; Database=Projet; Integrated Security=True;";
	private: System::String^ connectionString = "Server=DYGUERG; Database=Projet; Integrated Security=True;";

	private: System::Void Connect_Button_Click(System::Object^ sender, System::EventArgs^ e)// Regarde si l'utilisateur existe et si il existe alors le connecter mais si il n'existe pas, ouvrir une pop up d'erreur
	{
		String^ nom = textBoxNom->Text;
		if (nom == "") {
			MessageBox::Show("Veuillez entrer un nom");
			return;
		}
		String^ prenom = textBoxPrenom->Text;
		if (prenom == "") {
			MessageBox::Show("Veuillez entrer un prénom");
			return;
		}
		String^ mdp = textBoxMdp->Text;
		if (mdp == "") {
			MessageBox::Show("Veuillez entrer un mot de passe");
			return;
		}

		String^ query = "SELECT * FROM Personnel WHERE nom = @nom AND prenom = @prenom AND MotDePasse = @mdp AND role = @employe";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		SqlCommand^ cmd = gcnew SqlCommand(query, con);
		cmd->Parameters->AddWithValue("@nom", nom);
		cmd->Parameters->AddWithValue("@prenom", prenom);
		cmd->Parameters->AddWithValue("@mdp", mdp);
		cmd->Parameters->AddWithValue("@employe", "employe");

		try {
			con->Open();
			SqlDataReader^ dr = cmd->ExecuteReader();
			int count = 0;
			while (dr->Read()) {
				count += 1;
			}
			if (count > 0) {
				MessageBox::Show("Connexion réussie");
				PageEmploye^ pageEmploye = gcnew PageEmploye();
				pageEmploye->ShowDialog();
			}
			else {
				MessageBox::Show("Connexion échouée");
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

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}