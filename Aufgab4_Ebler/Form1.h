#include "Fenster2.h"
#pragma once

namespace Aufgab4_Ebler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  beendenBut;
	protected: 
	private: System::Windows::Forms::Button^  nextWinBut;
	private: System::Windows::Forms::CheckBox^  freiCheck;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->beendenBut = (gcnew System::Windows::Forms::Button());
			this->nextWinBut = (gcnew System::Windows::Forms::Button());
			this->freiCheck = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// beendenBut
			// 
			this->beendenBut->Location = System::Drawing::Point(197, 146);
			this->beendenBut->Name = L"beendenBut";
			this->beendenBut->Size = System::Drawing::Size(75, 23);
			this->beendenBut->TabIndex = 0;
			this->beendenBut->Text = L"Beenden";
			this->beendenBut->UseVisualStyleBackColor = true;
			this->beendenBut->Click += gcnew System::EventHandler(this, &Form1::beendenBut_Click);
			// 
			// nextWinBut
			// 
			this->nextWinBut->Location = System::Drawing::Point(134, 44);
			this->nextWinBut->Name = L"nextWinBut";
			this->nextWinBut->Size = System::Drawing::Size(138, 65);
			this->nextWinBut->TabIndex = 1;
			this->nextWinBut->Text = L"Nächstes Fenster";
			this->nextWinBut->UseVisualStyleBackColor = true;
			this->nextWinBut->Click += gcnew System::EventHandler(this, &Form1::nextWinBut_Click);
			// 
			// freiCheck
			// 
			this->freiCheck->AutoSize = true;
			this->freiCheck->Location = System::Drawing::Point(29, 69);
			this->freiCheck->Name = L"freiCheck";
			this->freiCheck->Size = System::Drawing::Size(67, 17);
			this->freiCheck->TabIndex = 2;
			this->freiCheck->Text = L"Freigabe";
			this->freiCheck->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 179);
			this->Controls->Add(this->freiCheck);
			this->Controls->Add(this->nextWinBut);
			this->Controls->Add(this->beendenBut);
			this->Name = L"Form1";
			this->Text = L"Aufgabe 4 Ebler";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void beendenBut_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void nextWinBut_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (this->freiCheck->Checked)
				 {
				 Fenster2^ myFenster2 = gcnew Fenster2();
					myFenster2->ShowDialog();
				 }
			 }
	};
}

