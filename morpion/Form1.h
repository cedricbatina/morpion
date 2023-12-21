#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ case_0_2;
	private: System::Windows::Forms::PictureBox^ case_1_1;
	private: System::Windows::Forms::PictureBox^ case_1_2;
	private: System::Windows::Forms::PictureBox^ case_2_1;
	protected:

	protected:



	private: System::Windows::Forms::PictureBox^ case_2_2;

	private: System::Windows::Forms::PictureBox^ case_2_0;
	private: System::Windows::Forms::PictureBox^ case_1_0;



	private: System::Windows::Forms::PictureBox^ case_0_0;
	private: System::Windows::Forms::PictureBox^ case_0_1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ labelNomJoueur1;
	private: System::Windows::Forms::Label^ labelNomJoueur2;
	private: System::Windows::Forms::Label^ labelScoreJoueur1;
	private: System::Windows::Forms::Label^ labelScoreJoueur2;
	private: System::Windows::Forms::Label^ labelJoueurCourant;
	private: System::Windows::Forms::Label^ Challenge;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->case_0_2 = (gcnew System::Windows::Forms::PictureBox());
			this->case_1_1 = (gcnew System::Windows::Forms::PictureBox());
			this->case_1_2 = (gcnew System::Windows::Forms::PictureBox());
			this->case_2_1 = (gcnew System::Windows::Forms::PictureBox());
			this->case_2_2 = (gcnew System::Windows::Forms::PictureBox());
			this->case_2_0 = (gcnew System::Windows::Forms::PictureBox());
			this->case_1_0 = (gcnew System::Windows::Forms::PictureBox());
			this->case_0_0 = (gcnew System::Windows::Forms::PictureBox());
			this->case_0_1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelNomJoueur1 = (gcnew System::Windows::Forms::Label());
			this->labelNomJoueur2 = (gcnew System::Windows::Forms::Label());
			this->labelScoreJoueur1 = (gcnew System::Windows::Forms::Label());
			this->labelScoreJoueur2 = (gcnew System::Windows::Forms::Label());
			this->labelJoueurCourant = (gcnew System::Windows::Forms::Label());
			this->Challenge = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_0_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_1_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_1_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_2_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_2_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_2_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_1_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_0_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_0_1))->BeginInit();
			this->SuspendLayout();
			// 
			// case_0_2
			// 
			this->case_0_2->BackColor = System::Drawing::SystemColors::Window;
			this->case_0_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->case_0_2->Location = System::Drawing::Point(309, 277);
			this->case_0_2->Name = L"case_0_2";
			this->case_0_2->Size = System::Drawing::Size(60, 60);
			this->case_0_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->case_0_2->TabIndex = 0;
			this->case_0_2->TabStop = false;
			// 
			// case_1_1
			// 
			this->case_1_1->BackColor = System::Drawing::SystemColors::Window;
			this->case_1_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->case_1_1->Location = System::Drawing::Point(375, 343);
			this->case_1_1->Name = L"case_1_1";
			this->case_1_1->Size = System::Drawing::Size(60, 60);
			this->case_1_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->case_1_1->TabIndex = 1;
			this->case_1_1->TabStop = false;
			// 
			// case_1_2
			// 
			this->case_1_2->BackColor = System::Drawing::SystemColors::Window;
			this->case_1_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->case_1_2->Location = System::Drawing::Point(375, 277);
			this->case_1_2->Name = L"case_1_2";
			this->case_1_2->Size = System::Drawing::Size(60, 60);
			this->case_1_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->case_1_2->TabIndex = 2;
			this->case_1_2->TabStop = false;
			// 
			// case_2_1
			// 
			this->case_2_1->BackColor = System::Drawing::SystemColors::Window;
			this->case_2_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->case_2_1->Location = System::Drawing::Point(443, 343);
			this->case_2_1->Name = L"case_2_1";
			this->case_2_1->Size = System::Drawing::Size(60, 60);
			this->case_2_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->case_2_1->TabIndex = 3;
			this->case_2_1->TabStop = false;
			// 
			// case_2_2
			// 
			this->case_2_2->BackColor = System::Drawing::SystemColors::Window;
			this->case_2_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->case_2_2->Location = System::Drawing::Point(443, 277);
			this->case_2_2->Name = L"case_2_2";
			this->case_2_2->Size = System::Drawing::Size(60, 60);
			this->case_2_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->case_2_2->TabIndex = 4;
			this->case_2_2->TabStop = false;
			// 
			// case_2_0
			// 
			this->case_2_0->BackColor = System::Drawing::SystemColors::Window;
			this->case_2_0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->case_2_0->Location = System::Drawing::Point(443, 409);
			this->case_2_0->Name = L"case_2_0";
			this->case_2_0->Size = System::Drawing::Size(60, 60);
			this->case_2_0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->case_2_0->TabIndex = 5;
			this->case_2_0->TabStop = false;
			// 
			// case_1_0
			// 
			this->case_1_0->BackColor = System::Drawing::SystemColors::Window;
			this->case_1_0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->case_1_0->Location = System::Drawing::Point(375, 409);
			this->case_1_0->Name = L"case_1_0";
			this->case_1_0->Size = System::Drawing::Size(60, 60);
			this->case_1_0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->case_1_0->TabIndex = 6;
			this->case_1_0->TabStop = false;
			// 
			// case_0_0
			// 
			this->case_0_0->BackColor = System::Drawing::SystemColors::Window;
			this->case_0_0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->case_0_0->Location = System::Drawing::Point(309, 409);
			this->case_0_0->Name = L"case_0_0";
			this->case_0_0->Size = System::Drawing::Size(60, 60);
			this->case_0_0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->case_0_0->TabIndex = 7;
			this->case_0_0->TabStop = false;
			// 
			// case_0_1
			// 
			this->case_0_1->BackColor = System::Drawing::SystemColors::Window;
			this->case_0_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->case_0_1->Location = System::Drawing::Point(309, 343);
			this->case_0_1->Name = L"case_0_1";
			this->case_0_1->Size = System::Drawing::Size(60, 60);
			this->case_0_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->case_0_1->TabIndex = 8;
			this->case_0_1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(585, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 32);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Quitter";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(75, 437);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 32);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Nouvelle Partie";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// labelNomJoueur1
			// 
			this->labelNomJoueur1->AutoSize = true;
			this->labelNomJoueur1->Location = System::Drawing::Point(71, 343);
			this->labelNomJoueur1->Name = L"labelNomJoueur1";
			this->labelNomJoueur1->Size = System::Drawing::Size(67, 20);
			this->labelNomJoueur1->TabIndex = 11;
			this->labelNomJoueur1->Text = L"Joueur1";
			// 
			// labelNomJoueur2
			// 
			this->labelNomJoueur2->AutoSize = true;
			this->labelNomJoueur2->Location = System::Drawing::Point(641, 343);
			this->labelNomJoueur2->Name = L"labelNomJoueur2";
			this->labelNomJoueur2->Size = System::Drawing::Size(67, 20);
			this->labelNomJoueur2->TabIndex = 12;
			this->labelNomJoueur2->Text = L"Joueur2";
			// 
			// labelScoreJoueur1
			// 
			this->labelScoreJoueur1->AutoSize = true;
			this->labelScoreJoueur1->Location = System::Drawing::Point(184, 343);
			this->labelScoreJoueur1->Name = L"labelScoreJoueur1";
			this->labelScoreJoueur1->Size = System::Drawing::Size(18, 20);
			this->labelScoreJoueur1->TabIndex = 13;
			this->labelScoreJoueur1->Text = L"0";
			// 
			// labelScoreJoueur2
			// 
			this->labelScoreJoueur2->AutoSize = true;
			this->labelScoreJoueur2->Location = System::Drawing::Point(581, 343);
			this->labelScoreJoueur2->Name = L"labelScoreJoueur2";
			this->labelScoreJoueur2->Size = System::Drawing::Size(18, 20);
			this->labelScoreJoueur2->TabIndex = 14;
			this->labelScoreJoueur2->Text = L"0";
			// 
			// labelJoueurCourant
			// 
			this->labelJoueurCourant->AutoSize = true;
			this->labelJoueurCourant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelJoueurCourant->Location = System::Drawing::Point(324, 220);
			this->labelJoueurCourant->Name = L"labelJoueurCourant";
			this->labelJoueurCourant->Size = System::Drawing::Size(171, 20);
			this->labelJoueurCourant->TabIndex = 15;
			this->labelJoueurCourant->Text = L"LE JOUEUR1 JOUE";
			this->labelJoueurCourant->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// Challenge
			// 
			this->Challenge->AutoSize = true;
			this->Challenge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Challenge->Location = System::Drawing::Point(214, 103);
			this->Challenge->Name = L"Challenge";
			this->Challenge->Size = System::Drawing::Size(375, 29);
			this->Challenge->TabIndex = 16;
			this->Challenge->Text = L"G�nie Logiciel - Challenge c++";
			this->Challenge->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 656);
			this->Controls->Add(this->Challenge);
			this->Controls->Add(this->labelJoueurCourant);
			this->Controls->Add(this->labelScoreJoueur2);
			this->Controls->Add(this->labelScoreJoueur1);
			this->Controls->Add(this->labelNomJoueur2);
			this->Controls->Add(this->labelNomJoueur1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->case_0_1);
			this->Controls->Add(this->case_0_0);
			this->Controls->Add(this->case_1_0);
			this->Controls->Add(this->case_2_0);
			this->Controls->Add(this->case_2_2);
			this->Controls->Add(this->case_2_1);
			this->Controls->Add(this->case_1_2);
			this->Controls->Add(this->case_1_1);
			this->Controls->Add(this->case_0_2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Jeu de morpion - @rtful Batina Creative Studios";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_0_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_1_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_1_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_2_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_2_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_2_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_1_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_0_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->case_0_1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
