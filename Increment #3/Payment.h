#pragma once
#include <msclr\marshal_cppstd.h>
#include<string>
#include<fstream>
#include<iostream>
#include<ctime>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Payment
	/// </summary>
	public ref class Payment : public System::Windows::Forms::Form
	{
	public:
		Payment(void)
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
		~Payment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Payment::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(73, 132);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User ID : ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(197, 132);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(180, 306);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Pay";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Payment::button1_Click);
			// 
			// Payment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(910, 493);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Payment";
			this->Text = L"Payment";
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
				default:
					std::cout << "Invalid month entered;\nEnter again!";
				}
			}
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

		void payment(std::string check_id)
		{
			std::ifstream fin;
			std::ofstream fout;
			std::string temp, month = current_month(), billing_month;
			std::string user_id;
			bool found = false;
			fin.open("BillingInfo.txt", std::ios::in);
			while (!fin.eof())
			{
				getline(fin, temp, '\n');
				fout.open("Temp.txt", std::ios::app);
				if (fin.eof())
				{
					fout << temp;
					fout.close();
				}
				else
				{
					fout << temp << "\n";
					fout.close();
				}
			}
			fin.close();
			fout.open("BillingInfo.txt", std::ios::trunc);
			fout.close();
			fin.open("Temp.txt", std::ios::in);
			while (!fin.eof())
			{
				getline(fin, user_id, ',');
				if (user_id == check_id)
				{
					fout.open("BillingInfo.txt", std::ios::app);
					getline(fin, billing_month, ',');
					if (billing_month == month)
					{
						found = true;
						fout << user_id << ",";
						fout << billing_month << ",";
						getline(fin, temp, ',');
						fout << temp << ',';
						getline(fin, temp, ',');
						fout << temp << ',';
						getline(fin, temp, ',');
						fout << temp << ',';
						getline(fin, temp, ',');
						fout << temp << ',';
						getline(fin, temp, ',');
						fout << temp << ',';
						getline(fin, temp, ',');
						fout << temp << ',';
						getline(fin, temp, ',');
						fout << temp << ',';
						getline(fin, temp, ',');
						fout << std::to_string(0) << ',';
						getline(fin, temp, ',');
						fout << temp << ',';
						getline(fin, temp, ',');
						if (temp == "paid")
						{
							fout << "paid" << ',';
							getline(fin, temp, '\n');
							fout << temp << '\n';
						}
						else
						{
							fout << "paid" << ',';
							getline(fin, temp, '\n');
							fout << current_date() << '\n';
						}

					}
					else
					{
						if (fin.eof())
						{
							fout << user_id;
							fout << billing_month << ',';
							getline(fin, temp, '\n');
						}
						else
						{
							fout << user_id << ",";
							fout << billing_month << ',';
							getline(fin, temp, '\n');
							fout << temp << "\n";
						}
					}
				}
				else
				{
					fout.open("BillingInfo.txt", std::ios::app);
					if (fin.eof())
					{
						fout << user_id;
					}
					else
					{
						fout << user_id << ",";
						getline(fin, temp, '\n');
						fout << temp << "\n";
					}
				}
				fout.close();
			}
			if (!found)
				MessageBox::Show("NoEntries of this user for Current Month Found!", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			fin.close();
			remove("Temp.txt");
			this->Hide();
		}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are You sure?", "Prompt", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			String^ ID = textBox1->Text;
			std::string id = msclr::interop::marshal_as<std::string>(ID);
			payment(id);
		}

	}
	};
}