#pragma once
//#include <Windows.h>
//#include <string>
namespace Aufgab4_Ebler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Fenster2
	/// </summary>
	public ref class Fenster2 : public System::Windows::Forms::Form
	{
	public:
		Fenster2(void)
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
		~Fenster2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  viewBut;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::Button^  beendenBut;
	protected: 

	protected: 

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
			this->viewBut = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->beendenBut = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// viewBut
			// 
			this->viewBut->Location = System::Drawing::Point(12, 314);
			this->viewBut->Name = L"viewBut";
			this->viewBut->Size = System::Drawing::Size(75, 23);
			this->viewBut->TabIndex = 0;
			this->viewBut->Text = L"View";
			this->viewBut->UseVisualStyleBackColor = true;
			this->viewBut->Click += gcnew System::EventHandler(this, &Fenster2::viewBut_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(21, 203);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(58, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Tulpen";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(21, 227);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(83, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Ringelblume";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(21, 250);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(70, 17);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Hortensie";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(21, 273);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(56, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Wüste";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// beendenBut
			// 
			this->beendenBut->Location = System::Drawing::Point(362, 314);
			this->beendenBut->Name = L"beendenBut";
			this->beendenBut->Size = System::Drawing::Size(75, 23);
			this->beendenBut->TabIndex = 5;
			this->beendenBut->Text = L"Beenden";
			this->beendenBut->UseVisualStyleBackColor = true;
			this->beendenBut->Click += gcnew System::EventHandler(this, &Fenster2::beendenBut_Click);
			// 
			// Fenster2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 349);
			this->Controls->Add(this->beendenBut);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->viewBut);
			this->Name = L"Fenster2";
			this->Text = L"Bildauswahl";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void beendenBut_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void viewBut_Click(System::Object^  sender, System::EventArgs^  e) {
			checkButton();
		 }
private: void checkButton()
{
	 if (this->radioButton1->Checked)
			 {
			 this->BackgroundImage = gcnew Bitmap("Tulpen.jpg");
				 
			 }
			 if (this->radioButton2->Checked)
			 {
				 this->BackgroundImage = gcnew Bitmap("Ringelblume.jpg");
				

			 }
			 if (this->radioButton3->Checked)
			 {
				 this->BackgroundImage = gcnew Bitmap("Hortensie.jpg");
			 }
			 if (this->radioButton4->Checked)
			 {

				 this->BackgroundImage = gcnew Bitmap("Wueste.jpg");
			 }
			 this->BackgroundImageLayout =ImageLayout::Stretch;
}

//std::string current_working_directory()
//{
//    char working_directory[MAX_PATH+1] ;
//    GetCurrentDirectoryA( sizeof(working_directory), working_directory ) ; // **** win32 specific ****
//    return working_directory ;
//}
};

}
