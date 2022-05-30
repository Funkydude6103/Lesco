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
	/// Summary for CustomerDataUpdate
	/// </summary>
	public ref class CustomerDataUpdate : public System::Windows::Forms::Form
	{
	public:
		CustomerDataUpdate(void)
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
		~CustomerDataUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ nic;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ name;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ address;
	private: System::Windows::Forms::TextBox^ phone;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ MeterReading;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ PeakHours;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::ComboBox^ CustomerType;

	private: System::Windows::Forms::ComboBox^ MeterType;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ id;

	private: System::Windows::Forms::Panel^ panel7;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerDataUpdate::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->nic = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->phone = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->MeterReading = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->PeakHours = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->CustomerType = (gcnew System::Windows::Forms::ComboBox());
			this->MeterType = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->ForeColor = System::Drawing::Color::Aqua;
			this->button1->Location = System::Drawing::Point(559, 737);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"SAVE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CustomerDataUpdate::button1_Click);
			// 
			// nic
			// 
			this->nic->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->nic->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->nic->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->nic->Location = System::Drawing::Point(19, 297);
			this->nic->Name = L"nic";
			this->nic->Size = System::Drawing::Size(383, 19);
			this->nic->TabIndex = 1;
			this->nic->TextChanged += gcnew System::EventHandler(this, &CustomerDataUpdate::nic_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(15, 264);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"CNIC: ";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(19, 317);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(376, 2);
			this->panel1->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(15, 554);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 20);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Customer Type:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(277, 554);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 20);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Meter Type:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(15, 336);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 20);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Name: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(12, 474);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 20);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Phone Number:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(15, 404);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Adress:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(275, 631);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 20);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Peak Hours Unit:";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(517, 554);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(139, 20);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Connection Date:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(12, 631);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(123, 20);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Meter Reading:";
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->name->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->name->Location = System::Drawing::Point(18, 359);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(383, 19);
			this->name->TabIndex = 24;
			this->name->TextChanged += gcnew System::EventHandler(this, &CustomerDataUpdate::name_TextChanged);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(19, 384);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(376, 2);
			this->panel2->TabIndex = 25;
			// 
			// address
			// 
			this->address->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->address->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->address->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->address->Location = System::Drawing::Point(17, 437);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(383, 19);
			this->address->TabIndex = 26;
			this->address->TextChanged += gcnew System::EventHandler(this, &CustomerDataUpdate::address_TextChanged);
			// 
			// phone
			// 
			this->phone->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->phone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->phone->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->phone->Location = System::Drawing::Point(16, 509);
			this->phone->Name = L"phone";
			this->phone->Size = System::Drawing::Size(383, 19);
			this->phone->TabIndex = 27;
			this->phone->TextChanged += gcnew System::EventHandler(this, &CustomerDataUpdate::phone_TextChanged);
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(19, 526);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(376, 2);
			this->panel3->TabIndex = 28;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(19, 457);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(376, 2);
			this->panel4->TabIndex = 26;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(521, 578);
			this->dateTimePicker1->MaxDate = System::DateTime(2029, 12, 25, 23, 59, 59, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2001, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->RightToLeftLayout = true;
			this->dateTimePicker1->Size = System::Drawing::Size(106, 26);
			this->dateTimePicker1->TabIndex = 36;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &CustomerDataUpdate::dateTimePicker1_ValueChanged);
			// 
			// MeterReading
			// 
			this->MeterReading->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->MeterReading->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MeterReading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->MeterReading->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->MeterReading->Location = System::Drawing::Point(19, 665);
			this->MeterReading->Name = L"MeterReading";
			this->MeterReading->Size = System::Drawing::Size(119, 19);
			this->MeterReading->TabIndex = 37;
			this->MeterReading->TextChanged += gcnew System::EventHandler(this, &CustomerDataUpdate::MeterReading_TextChanged);
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(16, 682);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(122, 2);
			this->panel5->TabIndex = 38;
			// 
			// PeakHours
			// 
			this->PeakHours->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->PeakHours->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PeakHours->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->PeakHours->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->PeakHours->Location = System::Drawing::Point(279, 662);
			this->PeakHours->Name = L"PeakHours";
			this->PeakHours->Size = System::Drawing::Size(119, 19);
			this->PeakHours->TabIndex = 39;
			this->PeakHours->Visible = false;
			this->PeakHours->TextChanged += gcnew System::EventHandler(this, &CustomerDataUpdate::PeakHours_TextChanged);
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(279, 682);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(122, 2);
			this->panel6->TabIndex = 40;
			this->panel6->Visible = false;
			// 
			// CustomerType
			// 
			this->CustomerType->AccessibleRole = System::Windows::Forms::AccessibleRole::DropList;
			this->CustomerType->AllowDrop = true;
			this->CustomerType->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->CustomerType->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CustomerType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CustomerType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->CustomerType->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->CustomerType->FormattingEnabled = true;
			this->CustomerType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Comertial", L"Domestic" });
			this->CustomerType->Location = System::Drawing::Point(17, 580);
			this->CustomerType->Name = L"CustomerType";
			this->CustomerType->Size = System::Drawing::Size(121, 28);
			this->CustomerType->TabIndex = 41;
			this->CustomerType->SelectedIndexChanged += gcnew System::EventHandler(this, &CustomerDataUpdate::CustomerType_SelectedIndexChanged);
			// 
			// MeterType
			// 
			this->MeterType->AccessibleRole = System::Windows::Forms::AccessibleRole::DropList;
			this->MeterType->AllowDrop = true;
			this->MeterType->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"1Phase", L"3Phase" });
			this->MeterType->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MeterType->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MeterType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->MeterType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->MeterType->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->MeterType->FormattingEnabled = true;
			this->MeterType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1Phase", L"3Phase" });
			this->MeterType->Location = System::Drawing::Point(281, 580);
			this->MeterType->Name = L"MeterType";
			this->MeterType->Size = System::Drawing::Size(121, 28);
			this->MeterType->TabIndex = 42;
			this->MeterType->SelectedIndexChanged += gcnew System::EventHandler(this, &CustomerDataUpdate::MeterType_SelectedIndexChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox1->Location = System::Drawing::Point(431, 762);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(115, 20);
			this->checkBox1->TabIndex = 43;
			this->checkBox1->Text = L"Data is correct";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &CustomerDataUpdate::checkBox1_CheckedChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(12, 187);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(105, 20);
			this->label10->TabIndex = 44;
			this->label10->Text = L"Customer Id:";
			// 
			// id
			// 
			this->id->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->id->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->id->Location = System::Drawing::Point(17, 210);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(383, 19);
			this->id->TabIndex = 45;
			this->id->TextChanged += gcnew System::EventHandler(this, &CustomerDataUpdate::id_TextChanged);
			// 
			// panel7
			// 
			this->panel7->Location = System::Drawing::Point(26, 235);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(376, 2);
			this->panel7->TabIndex = 46;
			// 
			// CustomerDataUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1317, 784);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->id);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->MeterType);
			this->Controls->Add(this->CustomerType);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->PeakHours);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->MeterReading);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->phone);
			this->Controls->Add(this->address);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nic);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"CustomerDataUpdate";
			this->Text = L"CustomerDataUpdate";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int strcomp(std::string file, std::string a) {
			bool flag = false;
			for (int i = 0; a[i] != '\0' && file[i] != '\0'; i++) {
				if (file[i] != a[i]) {
					flag = false;
				}
				else
					flag = true;
			}
			return flag;
		}
		bool commaCheck(std::string c) {
			for (int i = 0; c[i] != '\0'; i++) {
				if (c[i] == ',')
					return false;
			}
			return true;
		}
		bool isNumber(const std::string& str)
		{
			for (char const& c : str) {
				if (std::isdigit(c) == 0) return false;
			}
			return true;
		}
		bool isFound(std::string a) {
			std::string fileInput;
			bool found = false;
			std::ifstream fin("CustomerInfo.txt", std::ios::in);
			if (fin.is_open()) {
				while (!fin.eof()) {
					getline(fin, fileInput, ',');
					if (strcomp(fileInput, a) == 1) {
						found = true;
						break;
					}
					getline(fin, fileInput, '\n');
				}
			}
			else {
				MessageBox::Show("File Not Found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			fin.close();

			return found;
		}
		void UpdateData(std::string a, std::string b, std::string c, std::string d, std::string e, std::string f, std::string g, std::string h, std::string i, std::string j) {
			std::string fileInput;
			////opening files;
			std::ifstream fin("CustomerInfo.txt", std::ios::in);
			std::ofstream fout("temp.txt", std::ios::app);
			bool put = false;
			while (!fin.eof()) {
				getline(fin, fileInput, ',');

				if (strcomp(fileInput, a) == 1) {
					getline(fin, fileInput, '\n');
					fout << a << ',' << b << ',' << c << ',' << d << ',' << e << ',' << f << ',' << g << ',' << h << ',' << i << ',' << j << '\n';

				}
				else {
					fout << fileInput << ',';
					getline(fin, fileInput, '\n');
					fout << fileInput << '\n';
				}
			}

			fin.close();
			fout.close();

			int k = remove("CustomerInfo.txt");

			int l = rename("temp.txt", "CustomerInfo.txt");
		}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		std::string a = msclr::interop::marshal_as<std::string>(id->Text);
		std::string b = msclr::interop::marshal_as<std::string>(nic->Text);
		std::string c = msclr::interop::marshal_as<std::string>(name->Text);
		std::string d = msclr::interop::marshal_as<std::string>(address->Text);
		std::string ee = msclr::interop::marshal_as<std::string>(phone->Text);
		std::string f = msclr::interop::marshal_as<std::string>(CustomerType->Text);
		std::string g = msclr::interop::marshal_as<std::string>(MeterType->Text);
		std::string h = msclr::interop::marshal_as<std::string>(dateTimePicker1->Text);
		std::string i = msclr::interop::marshal_as<std::string>(MeterReading->Text);
		std::string j = msclr::interop::marshal_as<std::string>(PeakHours->Text);

		if (j == "") {
			j = "0";
		}

		if (isFound(a)) {
			UpdateData(a, b, c, d, ee, f, g, h, i, j);
			this->Close();
		}
		else {
			MessageBox::Show("User Not Found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void id_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void nic_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string c = msclr::interop::marshal_as<std::string>(id->Text);
		if (c != "") {
			if (!isNumber(c)) {
				MessageBox::Show("Not Number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (c.size() != 4) {
				MessageBox::Show("Id must be 4 digit", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string c = msclr::interop::marshal_as<std::string>(nic->Text);
		if (c != "") {
			if (!isNumber(c)) {
				MessageBox::Show("Not Number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (c.size() != 13) {
				MessageBox::Show("Cnic size must be 13", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void address_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string c = msclr::interop::marshal_as<std::string>(name->Text);
		if (c != "") {
			if (!commaCheck(c)) {
				MessageBox::Show("',' is not accepable in Name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void phone_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string c = msclr::interop::marshal_as<std::string>(address->Text);
		if (c != "") {
			if (!commaCheck(c))
				MessageBox::Show("',' is not accepable in Address", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void CustomerType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string c = msclr::interop::marshal_as<std::string>(phone->Text);
		if (c != "") {
			if (!isNumber(c)) {
				MessageBox::Show("Not Number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (c.size() != 11) {
				MessageBox::Show("Phone Number must be 11 digit", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void MeterType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string c = msclr::interop::marshal_as<std::string>(MeterType->Text);
		if (c != "") {
			if (c == "3Phase") {
				label7->Visible = true;
				PeakHours->Visible = true;
				panel6->Visible = true;

			}
			else {
				label7->Visible = false;
				PeakHours->Visible = false;
				panel6->Visible = false;
			}
		}
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void MeterReading_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void PeakHours_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		std::string c = msclr::interop::marshal_as<std::string>(MeterReading->Text);
		if (c != "") {
			if (!isNumber(c)) {
				MessageBox::Show("Not Number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (c.size() > 9) {
				MessageBox::Show("Meter units must be less than 9", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		std::string d = msclr::interop::marshal_as<std::string>(PeakHours->Text);
		if (d != "") {
			if (!isNumber(d)) {
				MessageBox::Show("Not Number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (d.size() > 9) {
				MessageBox::Show("Peak hours units must be less than 9", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		std::string i = msclr::interop::marshal_as<std::string>(id->Text);
		if (checkBox1->Checked && i != "") {
			button1->Enabled = true;
		}
		else if (checkBox1->Checked && i == "") {
			button1->Enabled = false;
			MessageBox::Show("Enter User ID first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	};
}