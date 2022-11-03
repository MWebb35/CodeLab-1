#pragma once
#include <string>
#include <format>

using namespace std;

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
	private: System::Windows::Forms::TextBox^ txtEntryRow;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btnEnter;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtColumn;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtOutput;
	private: System::Windows::Forms::Label^ label4;


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
			this->txtEntryRow = (gcnew System::Windows::Forms::TextBox());
			this->btnEnter = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtColumn = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtEntryRow
			// 
			this->txtEntryRow->Location = System::Drawing::Point(129, 88);
			this->txtEntryRow->Name = L"txtEntryRow";
			this->txtEntryRow->Size = System::Drawing::Size(146, 26);
			this->txtEntryRow->TabIndex = 0;
			// 
			// btnEnter
			// 
			this->btnEnter->Location = System::Drawing::Point(299, 100);
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->Size = System::Drawing::Size(75, 55);
			this->btnEnter->TabIndex = 1;
			this->btnEnter->Text = L"Enter";
			this->btnEnter->UseVisualStyleBackColor = true;
			this->btnEnter->Click += gcnew System::EventHandler(this, &Form1::btnEnter_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(383, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter your position on the chess board";
			// 
			// txtColumn
			// 
			this->txtColumn->Location = System::Drawing::Point(129, 148);
			this->txtColumn->Name = L"txtColumn";
			this->txtColumn->Size = System::Drawing::Size(146, 26);
			this->txtColumn->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Row (number)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Column (char)";
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(102, 253);
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->Size = System::Drawing::Size(146, 26);
			this->txtOutput->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Your square is:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(402, 320);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtColumn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnEnter);
			this->Controls->Add(this->txtEntryRow);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnEnter_Click(System::Object^ sender, System::EventArgs^ e) {
		char user_pos_column = Convert::ToChar(txtColumn->Text); //Converts input from string to char
		int user_pos_row = Convert::ToInt32(txtEntryRow ->Text); //Converts input from string to int

		user_pos_column = user_pos_column - 32; 

		if (user_pos_column == 'a' || user_pos_column == 'c' || user_pos_column == 'e' || user_pos_column == 'g') {
			if (user_pos_row % 2 == 0) {
				txtOutput->Text = "Black"; //Output to the textbox the result using its Text property
			} else {
				txtOutput->Text = "White";
			} 
		}
		else {
			if (user_pos_row % 2 == 0) {
				txtOutput->Text = "White";
			} else {
				txtOutput->Text = "Black";
			}
		}

	}
};
}
