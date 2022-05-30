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
	/// Summary for AddNewCustomer
	/// </summary>
	public ref class AddNewCustomer : public System::Windows::Forms::Form
	{
	public:
		AddNewCustomer(void)
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
		~AddNewCustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label7;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddNewCustomer::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->ForeColor = System::Drawing::Color::Aqua;
			this->button1->Location = System::Drawing::Point(642, 659);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"SAVE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddNewCustomer::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(0, 221);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"CNIC: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(0, 296);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(0, 378);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Adress: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(0, 457);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Phone Number:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(11, 534);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Customer Type";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(190, 534);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Meter Type";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox1->Location = System::Drawing::Point(15, 244);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(303, 19);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AddNewCustomer::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(15, 319);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(303, 17);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &AddNewCustomer::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox3->Location = System::Drawing::Point(15, 401);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(303, 17);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &AddNewCustomer::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->textBox4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox4->Location = System::Drawing::Point(15, 480);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(303, 17);
			this->textBox4->TabIndex = 13;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &AddNewCustomer::textBox4_TextChanged);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(12, 270);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(306, 2);
			this->panel1->TabIndex = 14;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(12, 341);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(306, 2);
			this->panel2->TabIndex = 15;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(15, 423);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(306, 2);
			this->panel3->TabIndex = 16;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(15, 502);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(306, 2);
			this->panel4->TabIndex = 17;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox1->Location = System::Drawing::Point(433, 674);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(181, 24);
			this->checkBox1->TabIndex = 18;
			this->checkBox1->Text = L"Information is corrct";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &AddNewCustomer::checkBox1_CheckedChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::DropList;
			this->comboBox1->AllowDrop = true;
			this->comboBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Comertial", L"Domestic" });
			this->comboBox1->Location = System::Drawing::Point(15, 558);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 19;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AddNewCustomer::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->AccessibleRole = System::Windows::Forms::AccessibleRole::DropList;
			this->comboBox2->AllowDrop = true;
			this->comboBox2->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"1Phase", L"3Phase" });
			this->comboBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->comboBox2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1Phase", L"3Phase" });
			this->comboBox2->Location = System::Drawing::Point(194, 558);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 20;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &AddNewCustomer::comboBox2_SelectedIndexChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::SystemColors::ButtonFace;
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::SystemColors::ControlDark;
			this->dateTimePicker1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(392, 250);
			this->dateTimePicker1->MaxDate = System::DateTime(2024, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2000, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(117, 26);
			this->dateTimePicker1->TabIndex = 21;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &AddNewCustomer::dateTimePicker1_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(388, 221);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(140, 20);
			this->label7->TabIndex = 22;
			this->label7->Text = L"CNIC Issue Date:\r\n";
			// 
			// AddNewCustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1323, 717);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->DoubleBuffered = true;
			this->Name = L"AddNewCustomer";
			this->Text = L"AddNewCustomer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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
		int strcomp(char NIC[], std::string b) {
			for (int i = 0; b[i] != '\0' && NIC[i] != '\0'; i++) {
				if (NIC[i] != b[i]) {
					return 1;
				}
			}
			return 0;
		}
		//checking if there are more than 3 user with same cnic;

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
		void AddNewCustomerToFile(std::string b, std::string c, std::string d, std::string e, std::string f, std::string g) {
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
			time_t now = time(0);
#pragma warning(suppress : 4996)
			tm* ltm = localtime(&now);

			{
				std::ofstream fout;
				fout.open("CustomerInfo.txt", std::ios::app);
				fout << a << ',' << b << ',' << c
					<< ',' << d << ',' << e << ',' << f
					<< ',' << g << ',' << ltm->tm_mday << '/' << 1 + ltm->tm_mon << '/' << 1900 + ltm->tm_year
					<< ',' << "0" << ',' << "0" << '\n';

				fout.close();
			}

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

		void IntToChar(char b[], int a) {


			int n = 1000;
			for (int i = 0; i < 4; i++) {
				b[i] = (char)((a / n) + 48);
				a = a % n;
				n /= 10;
			}
			b[4] = '\0';

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

		void strcopy(char a[], std::string c) {
			int i = 0;
			for (; c[i] != '\0'; i++) {
				a[i] = c[i];
			}
			a[i] = '\0';
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

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string b = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::string c = msclr::interop::marshal_as<std::string>(textBox2->Text);
		std::string d = msclr::interop::marshal_as<std::string>(textBox3->Text);
		std::string ee = msclr::interop::marshal_as<std::string>(textBox4->Text);
		std::string f = msclr::interop::marshal_as<std::string>(comboBox1->Text);
		std::string g = msclr::interop::marshal_as<std::string>(comboBox2->Text);
		std::string i_date = msclr::interop::marshal_as<std::string>(dateTimePicker1->Text);
		if (NewcustomerCheck(b)) {
			AddNewCustomerToFile(b, c, d, ee, f, g);
			NADRAFile(b, i_date);
			Customer_Entry();
			this->Close();
		}
		else {
			MessageBox::Show("Number of customers reached", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			button1->Enabled = true;
		}
		else {
			button1->Enabled = false;
		}

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		std::string c = msclr::interop::marshal_as<std::string>(textBox1->Text);
		if (c != "") {
			if (!isNumber(c)) {
				MessageBox::Show("Not Number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (c.size() != 13) {
				MessageBox::Show("Cnic size must be 13", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		std::string c = msclr::interop::marshal_as<std::string>(textBox2->Text);
		if (c != "") {
			if (!commaCheck(c)) {
				MessageBox::Show("',' is not accepable in Name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string c = msclr::interop::marshal_as<std::string>(textBox3->Text);
		if (c != "") {
			if (!commaCheck(c))
				MessageBox::Show("',' is not accepable in Address", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		std::string c = msclr::interop::marshal_as<std::string>(textBox4->Text);
		if (c != "") {
			if (!isNumber(c)) {
				MessageBox::Show("Not Number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (c.size() != 11) {
				MessageBox::Show("Phone Number must be 11 digit", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string c = msclr::interop::marshal_as<std::string>(comboBox2->Text);
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string c = msclr::interop::marshal_as<std::string>(dateTimePicker1->Text);
	}
	};
}