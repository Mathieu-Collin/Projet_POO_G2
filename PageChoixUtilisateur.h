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
	/// Description résumée de PageChoixUtilisateur
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
		/// Nettoyage des ressources utilisées.
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
			this->ouvrePageConnexion = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ouvrePageConnexion
			// 
			this->ouvrePageConnexion->Location = System::Drawing::Point(145, 279);
			this->ouvrePageConnexion->Name = L"ouvrePageConnexion";
			this->ouvrePageConnexion->Size = System::Drawing::Size(102, 30);
			this->ouvrePageConnexion->TabIndex = 0;
			this->ouvrePageConnexion->Text = L"Client";
			this->ouvrePageConnexion->UseVisualStyleBackColor = true;
			this->ouvrePageConnexion->Click += gcnew System::EventHandler(this, &PageChoixUtilisateur::ouvrePageConnexionClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(310, 279);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Employé";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PageChoixUtilisateur::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(481, 279);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Manager";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(616, 279);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(204, 33);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Responsable des ventes";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &PageChoixUtilisateur::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(415, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Vous êtes";
			// 
			// PageChoixUtilisateur
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(933, 523);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->ouvrePageConnexion);
			this->Name = L"PageChoixUtilisateur";
			this->Text = L"PageChoixUtilisateur";
			this->ResumeLayout(false);
			this->PerformLayout();

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
};
}