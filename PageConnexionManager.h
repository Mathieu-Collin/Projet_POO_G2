#pragma once
#include "PageManager.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de PageConnexionManager
	/// </summary>
	public ref class PageConnexionManager : public System::Windows::Forms::Form
	{
	public:
		PageConnexionManager(void)
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
		~PageConnexionManager()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(73, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Se connecter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PageConnexionManager::button1_Click);
			// 
			// PageConnexionManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->button1);
			this->Name = L"PageConnexionManager";
			this->Text = L"PageConnexionManager";
			this->Load += gcnew System::EventHandler(this, &PageConnexionManager::PageManager_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PageManager_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		PageManager^ pageManagerForm = gcnew PageManager();
		pageManagerForm->ShowDialog();
	}
	};
}