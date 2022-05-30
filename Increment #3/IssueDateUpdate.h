#pragma once
#include <msclr\marshal_cppstd.h>
#include<iostream>
#include<fstream>
#include<ctime>
#include<string>
#include<cstdlib>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IssueDateUpdate
	/// </summary>
	public ref class IssueDateUpdate : public System::Windows::Forms::Form
	{
	public:
		String^ cnic;
		IssueDateUpdate(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		IssueDateUpdate(String ^k)
		{
			cnic = k;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IssueDateUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IssueDateUpdate::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Enabled = false;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(711, 640);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &IssueDateUpdate::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(582, 662);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(115, 20);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Data is correct";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &IssueDateUpdate::checkBox1_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Location = System::Drawing::Point(26, 371);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(291, 2);
			this->panel1->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(155, 442);
			this->dateTimePicker1->MaxDate = System::DateTime(2024, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2000, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(119, 26);
			this->dateTimePicker1->TabIndex = 5;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &IssueDateUpdate::dateTimePicker1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label2->Location = System::Drawing::Point(22, 442);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Issue Date:";
			// 
			// IssueDateUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1341, 686);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Name = L"IssueDateUpdate";
			this->Text = L"IssueDateUpdate";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void IntToChar(char b[], int a) {


			int n = 1000;
			for (int i = 0; i < 4; i++) {
				b[i] = (char)((a / n) + 48);
				a = a % n;
				n /= 10;
			}
			b[4] = '\0';

		}
		bool isNumber(const std::string& str)
		{
			for (char const& c : str) {
				if (std::isdigit(c) == 0) return false;
			}
			return true;
		}
		std::string expiryDate(std::string i_date) {
			char year[5];
			int slashCounter = 0;
			int j = 6;

			for (int i = 0; j < 11; i++) {
				year[i] = i_date[j++];
			}
			std::string e_date = i_date;
			j = 6;
			int YEAR = atoi(year);
			YEAR += 10;
			slashCounter = 0;
			IntToChar(year, YEAR);
			for (int i = 0; j < 11; i++) {
				e_date[j++] = year[i];
			}

			return e_date;

		}
		bool strcomp(std::string NIC, std::string b) {
			bool flag = false;
			for (int i = 0; NIC[i] != '\0' && b[i] != '\0'; i++) {
				if (NIC[i] == b[i]) {
					flag = true;
				}
				else {
					flag = false;
				}
			}

			return flag;
		}
		void NADRAFileUpdate(std::string CNIC, std::string i_date)
		{

			std::ifstream fin;
			fin.open("NADRA.txt", std::ios::in);

			std::ofstream fout("temp.txt", std::ios::app);


			std::string e_date = expiryDate(i_date);
			std::string DataFromNADRA;

			bool flag = false;
			bool found = false;
			while (!fin.eof()) {
				getline(fin, DataFromNADRA, ',');
				if (strcomp(CNIC, DataFromNADRA)) {
					getline(fin, DataFromNADRA, '\n');
					fout << CNIC << ',' << i_date << ',' << e_date << '\n';
					found = true;
				}
				else if (DataFromNADRA != "\n" && DataFromNADRA != "") {
					fout << DataFromNADRA << ',';
					getline(fin, DataFromNADRA, '\n');
					fout << DataFromNADRA << '\n';
				}


			}
			if (!found) {
				std::cout << CNIC << " was not found";
			}
			fin.close();
			fout.close();

			remove("NADRA.txt");
			int e = rename("temp.txt", "NADRA.txt");
			return;

		}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		std::string i_date = msclr::interop::marshal_as<std::string>(dateTimePicker1->Text);
		msclr::interop::marshal_context context;
		std::string c = context.marshal_as<std::string>(cnic);

		NADRAFileUpdate(c, i_date);
		this->Close();
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			button1->Enabled = true;
			button1->Visible = true;
		}
		else {
			button1->Enabled = false;
			button1->Visible = true;
		}
	}
	};
}