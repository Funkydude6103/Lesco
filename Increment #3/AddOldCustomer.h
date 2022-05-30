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
	/// Summary for AddOldCustomer
	/// </summary>
	public ref class AddOldCustomer : public System::Windows::Forms::Form
	{
	public:
		AddOldCustomer(void)
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
		~AddOldCustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ nic;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::TextBox^ addres;
	private: System::Windows::Forms::TextBox^ phoneNumber;






	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DateTimePicker^ ConnectionDate;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ CustomerType;
	private: System::Windows::Forms::ComboBox^ MeterType;


	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::DateTimePicker^ nicIssueDate;

	private: System::Windows::Forms::Label^ label10;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddOldCustomer::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->nic = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->addres = (gcnew System::Windows::Forms::TextBox());
			this->phoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->ConnectionDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->CustomerType = (gcnew System::Windows::Forms::ComboBox());
			this->MeterType = (gcnew System::Windows::Forms::ComboBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->nicIssueDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->ForeColor = System::Drawing::Color::Aqua;
			this->button1->Location = System::Drawing::Point(631, 674);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"SAVE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddOldCustomer::button1_Click);
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(52, 436);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(306, 2);
			this->panel4->TabIndex = 34;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(11, 180);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 20);
			this->label1->TabIndex = 19;
			this->label1->Text = L"CNIC: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(11, 251);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 20);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(11, 325);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 20);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Adress: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(11, 390);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 20);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Phone Number:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(11, 474);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 20);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Customer Type";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(178, 474);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 20);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Meter Type";
			// 
			// nic
			// 
			this->nic->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->nic->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->nic->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->nic->Location = System::Drawing::Point(52, 203);
			this->nic->Name = L"nic";
			this->nic->Size = System::Drawing::Size(303, 19);
			this->nic->TabIndex = 27;
			this->nic->TextChanged += gcnew System::EventHandler(this, &AddOldCustomer::nic_TextChanged);
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::Color::Black;
			this->name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->name->ForeColor = System::Drawing::Color::White;
			this->name->Location = System::Drawing::Point(52, 274);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(303, 19);
			this->name->TabIndex = 28;
			this->name->TextChanged += gcnew System::EventHandler(this, &AddOldCustomer::name_TextChanged);
			// 
			// addres
			// 
			this->addres->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addres->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->addres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->addres->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->addres->Location = System::Drawing::Point(52, 348);
			this->addres->Name = L"addres";
			this->addres->Size = System::Drawing::Size(303, 19);
			this->addres->TabIndex = 29;
			this->addres->TextChanged += gcnew System::EventHandler(this, &AddOldCustomer::addres_TextChanged);
			// 
			// phoneNumber
			// 
			this->phoneNumber->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->phoneNumber->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->phoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->phoneNumber->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->phoneNumber->Location = System::Drawing::Point(52, 413);
			this->phoneNumber->Name = L"phoneNumber";
			this->phoneNumber->Size = System::Drawing::Size(303, 19);
			this->phoneNumber->TabIndex = 30;
			this->phoneNumber->TextChanged += gcnew System::EventHandler(this, &AddOldCustomer::phoneNumber_TextChanged);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(49, 228);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(306, 2);
			this->panel1->TabIndex = 31;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(49, 297);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(306, 2);
			this->panel2->TabIndex = 32;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(52, 371);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(306, 2);
			this->panel3->TabIndex = 33;
			// 
			// ConnectionDate
			// 
			this->ConnectionDate->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ConnectionDate->CustomFormat = L"dd/MM/yyyy";
			this->ConnectionDate->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->ConnectionDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ConnectionDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->ConnectionDate->Location = System::Drawing::Point(392, 499);
			this->ConnectionDate->MaxDate = System::DateTime(2022, 5, 30, 0, 0, 0, 0);
			this->ConnectionDate->MinDate = System::DateTime(2001, 1, 1, 0, 0, 0, 0);
			this->ConnectionDate->Name = L"ConnectionDate";
			this->ConnectionDate->RightToLeftLayout = true;
			this->ConnectionDate->Size = System::Drawing::Size(96, 26);
			this->ConnectionDate->TabIndex = 35;
			this->ConnectionDate->Value = System::DateTime(2022, 5, 30, 0, 0, 0, 0);
			this->ConnectionDate->ValueChanged += gcnew System::EventHandler(this, &AddOldCustomer::ConnectionDate_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(388, 474);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 20);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Connection Date:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox1->Location = System::Drawing::Point(490, 698);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(124, 21);
			this->checkBox1->TabIndex = 37;
			this->checkBox1->Text = L"Data Is Correct";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &AddOldCustomer::checkBox1_CheckedChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox5->Location = System::Drawing::Point(52, 575);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 19);
			this->textBox5->TabIndex = 38;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &AddOldCustomer::textBox5_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(15, 550);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 20);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Units:";
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
			this->CustomerType->Location = System::Drawing::Point(15, 497);
			this->CustomerType->Name = L"CustomerType";
			this->CustomerType->Size = System::Drawing::Size(121, 28);
			this->CustomerType->TabIndex = 40;
			this->CustomerType->SelectedIndexChanged += gcnew System::EventHandler(this, &AddOldCustomer::CustomerType_SelectedIndexChanged);
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
			this->MeterType->Location = System::Drawing::Point(182, 497);
			this->MeterType->Name = L"MeterType";
			this->MeterType->Size = System::Drawing::Size(121, 28);
			this->MeterType->TabIndex = 41;
			this->MeterType->SelectedIndexChanged += gcnew System::EventHandler(this, &AddOldCustomer::MeterType_SelectedIndexChanged);
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(52, 595);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(100, 2);
			this->panel5->TabIndex = 42;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(264, 550);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(155, 20);
			this->label9->TabIndex = 43;
			this->label9->Text = L"Peak Hourse Units:";
			this->label9->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox6->Location = System::Drawing::Point(329, 575);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 19);
			this->textBox6->TabIndex = 44;
			this->textBox6->Visible = false;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &AddOldCustomer::textBox6_TextChanged);
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(329, 595);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(100, 2);
			this->panel6->TabIndex = 45;
			this->panel6->Visible = false;
			// 
			// nicIssueDate
			// 
			this->nicIssueDate->CalendarMonthBackground = System::Drawing::SystemColors::ButtonFace;
			this->nicIssueDate->CalendarTrailingForeColor = System::Drawing::SystemColors::ControlDark;
			this->nicIssueDate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nicIssueDate->CustomFormat = L"dd/MM/yyyy";
			this->nicIssueDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->nicIssueDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->nicIssueDate->Location = System::Drawing::Point(392, 204);
			this->nicIssueDate->MaxDate = System::DateTime(2024, 12, 31, 0, 0, 0, 0);
			this->nicIssueDate->MinDate = System::DateTime(2000, 1, 1, 0, 0, 0, 0);
			this->nicIssueDate->Name = L"nicIssueDate";
			this->nicIssueDate->Size = System::Drawing::Size(117, 26);
			this->nicIssueDate->TabIndex = 46;
			this->nicIssueDate->ValueChanged += gcnew System::EventHandler(this, &AddOldCustomer::nicIssueDate_ValueChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(388, 180);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(140, 20);
			this->label10->TabIndex = 47;
			this->label10->Text = L"CNIC Issue Date:\r\n";
			// 
			// AddOldCustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1314, 742);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->nicIssueDate);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->MeterType);
			this->Controls->Add(this->CustomerType);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->ConnectionDate);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->phoneNumber);
			this->Controls->Add(this->addres);
			this->Controls->Add(this->name);
			this->Controls->Add(this->nic);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"AddOldCustomer";
			this->Text = L"AddOldCustomer";
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
		int strcomp(char NIC[], std::string b) {
			for (int i = 0; b[i] != '\0' && NIC[i] != '\0'; i++) {
				if (NIC[i] != b[i]) {
					return 1;
				}
			}
			return 0;
		}
		std::string current_month() {
			while (true)
			{
				// current date/time based on current system
				time_t now = time(0);
#pragma warning(suppress : 4996)
				tm* ltm = localtime(&now);
				int m = 1 + ltm->tm_mon;
				std::string month;
				switch (m)
				{
				case 1:
					month = ("Jan");
					return month;
					break;
				case 2:
					month = ("Feb");
					return month;
					break;
				case 3:
					month = ("Mar");
					return month;
					break;
				case 4:
					month = ("Apr");
					return month;
					break;
				case 5:
					month = ("May");
					return month;
					break;
				case 6:
					month = ("Jun");
					return month;
					break;
				case 7:
					month = ("Jul");
					return month;
					break;
				case 8:
					month = ("Aug");
					return month;
					break;
				case 9:
					month = ("Sep");
					return month;
					break;
				case 10:
					month = ("Oct");
					return month;
					break;
				case 11:
					month = ("Nov");
					return month;
					break;
				case 12:
					month = ("Dec");
					return month;
					break;

				}
			}
		}
		std::string duedate()
		{
			// current date/time based on current system
			time_t now = time(0);
#pragma warning(suppress : 4996)
			tm* ltm = localtime(&now);
			int year = 1900 + ltm->tm_year;
			int month = 1 + ltm->tm_mon;
			int day = 7 + ltm->tm_mday;
			if (month == 2 && (year % 4) == 0 && day > 29)
			{
				month = 3;

				day = day - 29;
			}
			else if (month == 2 && day > 28)
			{
				month = 3;
				day = day - 28;
			}
			else if (month == 12 && day > 31)
			{
				month = 1;
				year = year + 1;
				day = day - 31;
			}
			else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day > 31)
			{
				month = month + 1;
				day = day - 31;
			}
			else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
			{
				month = month + 1;
				day = day - 30;
			}
			std::string date;
			std::string temp;
			std::string d = std::to_string(day);
			if (d.size() == 1)
			{
				temp = d;
				d = ("0" + temp);
			}
			std::string m = std::to_string(month);
			if (m.size() == 1)
			{
				temp = m;
				m = ("0" + temp);
			}
			date = (d + '/' + m + '/' + std::to_string(year));
			return date;
		}
		std::string current_date()
		{
			// current date/time based on current system
			time_t now = time(0);
#pragma warning(suppress : 4996)
			tm* ltm = localtime(&now);
			int year = 1900 + ltm->tm_year;
			int month = 1 + ltm->tm_mon;
			int day = ltm->tm_mday;
			std::string date;
			std::string temp;
			std::string d = std::to_string(day);
			if (d.size() == 1)
			{
				temp = d;
				d = ("0" + temp);
			}
			std::string m = std::to_string(month);
			if (m.size() == 1)
			{
				temp = m;
				m = ("0" + temp);
			}
			date = (d + '/' + m + '/' + std::to_string(year));
			return date;
		}

		//checking if there are more than 3 user with same cnic;
		void Customer_Entry()
		{
			std::string user_id = " ", customer_type = " ", meter_type = " ", entry_date = " ";
			std::string billing_month = " ", due_date = " ", temp = " ";
			float units_consumed = 0, peak_consumed = 0, meter_reading = 0, peak_h_reading = 0;
			int reg_cost = 0, peak_cost = 0, fixed_charges = 0, tax = 0;
			float total = 0, percentage = 0;


			//Getting data entries
			std::ifstream fin;
			fin.open("CustomerInfo.txt", std::ios_base::in);
			fin.seekg(-1, std::ios_base::end);
			if (fin.peek() == '\n')
			{
				//Start searching for \n occurrences
				fin.seekg(-1, std::ios_base::cur);
				int i = fin.tellg();
				for (i; i > 0; i--)
				{
					if (fin.peek() == '\n')
					{
						//Found
						fin.get();
						break;
					}
					//Move one character back
					fin.seekg(i, std::ios_base::beg);
				}
			}
			getline(fin, user_id, ',');
			getline(fin, customer_type, ',');
			getline(fin, customer_type, ',');
			getline(fin, customer_type, ',');
			getline(fin, customer_type, ',');
			getline(fin, customer_type, ',');
			getline(fin, meter_type, ',');
			getline(fin, temp, ',');
			getline(fin, temp, ',');
			units_consumed = stof(temp);
			getline(fin, temp, '\n');
			peak_consumed = stof(temp);
			meter_reading = units_consumed;
			if (meter_type == "1Phase")
				peak_h_reading = 0;
			else
			{
				peak_h_reading = peak_consumed;
			}
			fin.close();
			billing_month = current_month();
			entry_date = current_date();
			due_date = duedate();
			std::ifstream in;
			in.open("TariffTaxInfo.txt", std::ios::in);
			if (customer_type == "Domestic" && meter_type == "1Phase")
			{
				getline(in, temp, ',');
				getline(in, temp, ',');
				reg_cost = stoi(temp);
				peak_cost = 0;
				getline(in, temp, ',');
				getline(in, temp, ',');
				tax = stoi(temp);
				getline(in, temp, '\n');
				fixed_charges = stoi(temp);
				in.close();
			}
			else if (customer_type == "Commercial" && meter_type == "1Phase")
			{
				getline(in, temp, '\n');
				getline(in, temp, ',');
				getline(in, temp, ',');
				reg_cost = stoi(temp);
				peak_cost = 0;
				getline(in, temp, ',');
				getline(in, temp, ',');
				tax = stoi(temp);
				getline(in, temp, '\n');
				fixed_charges = stoi(temp);
				in.close();
			}
			else if (customer_type == "Domestic" && meter_type == "3Phase")
			{
				getline(in, temp, '\n');
				getline(in, temp, '\n');
				getline(in, temp, ',');
				getline(in, temp, ',');
				reg_cost = stoi(temp);
				getline(in, temp, ',');
				peak_cost = stoi(temp);
				getline(in, temp, ',');
				tax = stoi(temp);
				getline(in, temp, '\n');
				fixed_charges = stoi(temp);
				in.close();
			}
			else if (customer_type == "Commercial" && meter_type == "3Phase")
			{
				getline(in, temp, '\n');
				getline(in, temp, '\n');
				getline(in, temp, '\n');
				getline(in, temp, ',');
				getline(in, temp, ',');
				reg_cost = stoi(temp);
				getline(in, temp, ',');
				peak_cost = stoi(temp);
				getline(in, temp, ',');
				tax = stoi(temp);
				getline(in, temp, '\n');
				fixed_charges = stoi(temp);
				in.close();
			}
			total = (((meter_reading - units_consumed) * reg_cost) + ((peak_h_reading - peak_consumed) * peak_cost) + fixed_charges);
			percentage = ((total / 100) * tax);
			total = total + percentage;

			//Entering to file
			std::ofstream out;
			out.open("BillingInfo.txt", std::ios::app);
			out << user_id << ',';
			out << billing_month << ',';
			out << std::to_string(meter_reading) << ',';
			if (meter_type == "3Phase")
			{
				out << std::to_string(peak_h_reading) << ',';
			}
			else
			{
				out << "" << ',';
			}
			out << entry_date << ',';
			out << std::to_string(reg_cost) << ',';
			if (meter_type == "3Phase")
			{
				out << std::to_string(peak_cost) << ',';
			}
			else
			{
				out << "" << ',';
			}
			out << std::to_string(tax) << ',';
			out << std::to_string(fixed_charges) << ',';
			out << std::to_string(total) << ',';
			out << due_date << ',';
			out << "unpaid" << ',';
			out << "--/--/----" << '\n';
			out.close();
		}
		bool NewcustomerCheck(std::string b) {
			char NIC[100];
			char c;
			bool flag = true, conditionToCheck = true;
			int i = 0;
			std::ifstream fin;
			int counter = 0;
			fin.open("CustomerInfo.txt");

			if (fin.is_open()) {
				while (fin.get(c)) {
					if (c == ',') {
						NIC[13] = '\0';
						if (strcomp(NIC, b) == 0) {
							counter++;
							if (counter >= 3) {
								flag = false;
								break;
							}
						}
						i = 0;
					}
					else if (c == '\n') {

						i = 0;
					}
					else
						NIC[i++] = c;

				}
			}

			fin.close();

			return flag;
		}
		void AddOldCustomerToFile(std::string b, std::string c, std::string d, std::string e, std::string f, std::string g, std::string h, std::string i, std::string j) {
			std::ifstream fin("CustomerInfo.txt", std::ios::in);
			int id = 0;
			std::string str;
			while (!fin.eof()) {
				getline(fin, str, '\n');
				id++;
			}
			fin.close();
			char a[5];
			IntToChar(a, id);
			{
				std::ofstream fout;
				fout.open("CustomerInfo.txt", std::ios::app);
				fout << a << ',' << b << ',' << c
					<< ',' << d << ',' << e << ',' << f
					<< ',' << g << ',' << h
					<< ',' << i << ',' << j << '\n';

				fout.close();
			}

		}
		bool isNumber(const std::string& str)
		{
			for (char const& c : str) {
				if (std::isdigit(c) == 0) return false;
			}
			return true;
		}
		bool commaCheck(std::string c) {
			for (int i = 0; c[i] != '\0'; i++) {
				if (c[i] == ',')
					return false;
			}
			return true;
		}
		bool checkInNadraFile(std::string b) {
			char NIC[14];
			char c;
			bool flag = true, conditionToCheck = true;
			int i = 0;
			std::ifstream fin;
			fin.open("NADRA.txt");

			if (fin.is_open()) {
				while (fin.get(c)) {
					if (c == ',') {
						NIC[13] = '\0';
						if (strcomp(NIC, b) == 0) {
							flag = false;
							break;
						}
						conditionToCheck = false;
					}
					else if (c == '\n') {
						conditionToCheck = true;
						i = 0;
					}
					else if (conditionToCheck) {
						NIC[i++] = c;
					}
				}
			}

			fin.close();

			return flag;
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
		void NADRAFile(std::string b, std::string i_date) {
			std::ofstream fout("NADRA.txt", std::ios::app);
			std::cout << std::endl;
			std::string e_date = expiryDate(i_date);
			if (checkInNadraFile(b)) {

				fout << b << ',' << i_date << ',' << e_date << '\n';

				fout.close();
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		std::string b = msclr::interop::marshal_as<std::string>(nic->Text);
		std::string c = msclr::interop::marshal_as<std::string>(name->Text);
		std::string d = msclr::interop::marshal_as<std::string>(addres->Text);
		std::string ee = msclr::interop::marshal_as<std::string>(phoneNumber->Text);
		std::string f = msclr::interop::marshal_as<std::string>(CustomerType->Text);
		std::string g = msclr::interop::marshal_as<std::string>(MeterType->Text);
		std::string h = msclr::interop::marshal_as<std::string>(ConnectionDate->Text);
		std::string i = msclr::interop::marshal_as<std::string>(textBox5->Text);
		std::string j = msclr::interop::marshal_as<std::string>(textBox6->Text);
		if (i == "") {
			i = "0";
		}
		if (j == "") {
			j = "0";
		}
		std::string i_date = msclr::interop::marshal_as<std::string>(nicIssueDate->Text);
		if (NewcustomerCheck(b)) {
			AddOldCustomerToFile(b, c, d, ee, f, g, h, i, j);
			NADRAFile(b, i_date);
			Customer_Entry();
			this->Close();
		}
		else {
			MessageBox::Show("Number of customers reached", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string c = msclr::interop::marshal_as<std::string>(textBox5->Text);
		if (c != "") {
			if (!isNumber(c)) {
				MessageBox::Show("Not Number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (c.size() > 9) {
				MessageBox::Show("Meter units must be less than 9", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		std::string d = msclr::interop::marshal_as<std::string>(textBox6->Text);
		if (d != "") {
			if (!isNumber(d)) {
				MessageBox::Show("Not Number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (d.size() > 9) {
				MessageBox::Show("Peak hours units must be less than 9", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		{
			if (checkBox1->Checked) {
				button1->Enabled = true;
			}
			else {
				button1->Enabled = false;
			}
		}
	}
	private: System::Void nic_TextChanged(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void addres_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string c = msclr::interop::marshal_as<std::string>(name->Text);
		if (c != "") {
			if (!commaCheck(c)) {
				MessageBox::Show("',' is not accepable in Name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void phoneNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string c = msclr::interop::marshal_as<std::string>(addres->Text);
		if (c != "") {
			if (!commaCheck(c))
				MessageBox::Show("',' is not accepable in Address", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void CustomerType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string c = msclr::interop::marshal_as<std::string>(phoneNumber->Text);
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
				label9->Visible = true;
				textBox6->Visible = true;
				panel6->Visible = true;

			}
			else {
				label9->Visible = false;
				textBox6->Visible = false;
				panel6->Visible = false;
			}
		}
	}
	private: System::Void ConnectionDate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void nicIssueDate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}