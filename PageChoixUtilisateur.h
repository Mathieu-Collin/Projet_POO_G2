#pragma once
#include "PageConnexion.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de PageChoixUtilisateur
	/// </summary>
	public ref class PageChoixUtilisateur : public System::Windows::Forms::Form
	{
	public:
		PageChoixUtilisateur(void)
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
		~PageChoixUtilisateur()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ouvrePageConnexion;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;

	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ouvrePageConnexion = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ouvrePageConnexion
			// 
			this->ouvrePageConnexion->Location = System::Drawing::Point(109, 227);
			this->ouvrePageConnexion->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ouvrePageConnexion->Name = L"ouvrePageConnexion";
			this->ouvrePageConnexion->Size = System::Drawing::Size(76, 24);
			this->ouvrePageConnexion->TabIndex = 0;
			this->ouvrePageConnexion->Text = L"Client";
			this->ouvrePageConnexion->UseVisualStyleBackColor = true;
			this->ouvrePageConnexion->Click += gcnew System::EventHandler(this, &PageChoixUtilisateur::ouvrePageConnexionClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(232, 227);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 24);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Employ�";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PageChoixUtilisateur::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(361, 227);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 24);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Manager";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(462, 227);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 27);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Responsable des ventes";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &PageChoixUtilisateur::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(311, 139);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Vous �tes";
			// 
			// PageChoixUtilisateur
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 425);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->ouvrePageConnexion);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"PageChoixUtilisateur";
			this->Text = L"PageChoixUtilisateur";
			this->Load += gcnew System::EventHandler(this, &PageChoixUtilisateur::PageChoixUtilisateur_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
			//Partie du code qui 

		}
	#pragma endregion
	private: System::Void ouvrePageConnexionClick(System::Object^ sender, System::EventArgs^ e) {
		PageConnexion^ pageConnexionForm = gcnew PageConnexion();
		pageConnexionForm->ShowDialog();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PageChoixUtilisateur_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}