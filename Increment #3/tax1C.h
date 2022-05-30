#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include <msclr\marshal_cppstd.h>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for tax1C
	/// </summary>
	public ref class tax1C : public System::Windows::Forms::Form
	{
	public:
		int choice;
		tax1C(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		tax1C(int n)
		{
			choice = n;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~tax1C()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;














	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(tax1C::typeid));
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(3, 259);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(240, 24);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Update regular unit price";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(3, 301);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(263, 24);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Update peak hour unit price";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(3, 354);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(274, 24);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"Update the percentage of tax";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->Location = System::Drawing::Point(3, 404);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(209, 24);
			this->checkBox5->TabIndex = 4;
			this->checkBox5->Text = L"Update fixed charges";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(299, 259);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(186, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(299, 303);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(186, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(299, 356);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(186, 22);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(299, 406);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(186, 22);
			this->textBox5->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(700, 478);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 47);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &tax1C::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(214, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Tax File Update";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 192);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(670, 25);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Instruction : Select the box you want to edit enter the updation and click save";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(612, 414);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 13;
			// 
			// tax1C
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(833, 537);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->DoubleBuffered = true;
			this->Name = L"tax1C";
			this->Text = L"tax1C";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
        bool isNumber(std::string& str)
		   {
			   for (char const& c : str) {
				   if (std::isdigit(c) == 0) return false;
			   }
			   return true;
		   }
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		std::vector<bool> check;
		if (checkBox2->Checked)
		{
			String^ u = textBox2->Text;
			std::string change = msclr::interop::marshal_as<std::string>(u);
			check.push_back(isNumber(change));
		}
		if (checkBox3->Checked)
		{
			String^ u = textBox3->Text;
			std::string change = msclr::interop::marshal_as<std::string>(u);
			check.push_back(isNumber(change));
		}
		if (checkBox4->Checked)
		{
			String^ u = textBox4->Text;
			std::string change = msclr::interop::marshal_as<std::string>(u);
			check.push_back(isNumber(change));
		}
		if (checkBox5->Checked)
		{
			String^ u = textBox5->Text;
			std::string change = msclr::interop::marshal_as<std::string>(u);
			check.push_back(isNumber(change));
		}
		bool check2 = true;
		for (int i = 0; i < check.size(); i++)
		{
			if (check[i] == false)
			{
				check2 = false;
				break;
			}

		}
        if(check2)
		{ 
		if (choice == 1)
		{
			if (checkBox2->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox2->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");
				if (fout.is_open())
				{
					int count = 0;
					int i = 0;
					for (; i < taxinfo[0].size(); i++)
					{
						if (taxinfo[0][i] == ',')
						{
							count++;
						}
						fout << taxinfo[0][i];
						if (count == 1)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[0].size(); i++)
					{
						if (taxinfo[0][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[0].size(); i++)
					{
						fout << taxinfo[0][i];
					}
					fout << std::endl;
					fout << taxinfo[1];
					fout << std::endl;
					fout << taxinfo[2];
					fout << std::endl;
					fout << taxinfo[3];
					fout << std::endl;
					fout.close();
				}
			}
			if (checkBox3->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox3->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");
				if (fout.is_open())
				{

					int count = 0;
					int i = 0;
					for (; i < taxinfo[0].size(); i++)
					{
						if (taxinfo[0][i] == ',')
						{
							count++;
						}
						fout << taxinfo[0][i];
						if (count == 2)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[0].size(); i++)
					{
						if (taxinfo[0][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[0].size(); i++)
					{
						fout << taxinfo[0][i];
					}
					fout << std::endl;
					fout << taxinfo[1];
					fout << std::endl;
					fout << taxinfo[2];
					fout << std::endl;
					fout << taxinfo[3];
					fout << std::endl;
					fout.close();
				}
			}
			if (checkBox4->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox4->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");
				if (fout.is_open())
				{
					int count = 0;
					int i = 0;
					for (; i < taxinfo[0].size(); i++)
					{
						if (taxinfo[0][i] == ',')
						{
							count++;
						}
						fout << taxinfo[0][i];
						if (count == 3)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[0].size(); i++)
					{
						if (taxinfo[0][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[0].size(); i++)
					{
						fout << taxinfo[0][i];
					}
					fout << std::endl;
					fout << taxinfo[1];
					fout << std::endl;
					fout << taxinfo[2];
					fout << std::endl;
					fout << taxinfo[3];
					fout << std::endl;
					fout.close();
				}


			}
			if (checkBox5->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox5->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");
				if (fout.is_open())
				{
					int count = 0;
					int i = 0;
					for (; i < taxinfo[0].size(); i++)
					{
						if (taxinfo[0][i] == ',')
						{
							count++;
						}
						fout << taxinfo[0][i];
						if (count == 4)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[0].size(); i++)
					{
						if (taxinfo[0][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[0].size(); i++)
					{
						fout << taxinfo[0][i];
					}
					fout << std::endl;
					fout << taxinfo[1];
					fout << std::endl;
					fout << taxinfo[2];
					fout << std::endl;
					fout << taxinfo[3];
					fout << std::endl;
					fout.close();
				}


			}
		}
		if (choice == 2)
		{
	
			if (checkBox2->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox2->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");

				if (fout.is_open())
				{
					fout << taxinfo[0];
					fout << std::endl;
					int count = 0;
					int i = 0;
					for (; i < taxinfo[1].size(); i++)
					{
						if (taxinfo[1][i] == ',')
						{
							count++;
						}
						fout << taxinfo[1][i];
						if (count == 1)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[1].size(); i++)
					{
						if (taxinfo[1][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[1].size(); i++)
					{
						fout << taxinfo[1][i];
					}
					fout <<std:: endl;
					fout << taxinfo[2];
					fout <<std:: endl;
					fout << taxinfo[3];
					fout <<std::endl;
					fout.close();
				}
			
			}
			if (checkBox3->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox3->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");


				if (fout.is_open())
				{
					fout << taxinfo[0];
					fout << std::endl;
					int count = 0;
					int i = 0;
					for (; i < taxinfo[1].size(); i++)
					{
						if (taxinfo[1][i] == ',')
						{
							count++;
						}
						fout << taxinfo[1][i];
						if (count == 2)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[1].size(); i++)
					{
						if (taxinfo[1][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[1].size(); i++)
					{
						fout << taxinfo[1][i];
					}
					fout << std::endl;
					fout << taxinfo[2];
					fout << std::endl;
					fout << taxinfo[3];
					fout << std::endl;
					fout.close();
				}

				
			}
			if (checkBox4->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox4->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");
			
				if (fout.is_open())
				{
					fout << taxinfo[0];
					fout << std::endl;
					int count = 0;
					int i = 0;
					for (; i < taxinfo[1].size(); i++)
					{
						if (taxinfo[1][i] == ',')
						{
							count++;
						}
						fout << taxinfo[1][i];
						if (count == 3)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[1].size(); i++)
					{
						if (taxinfo[1][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[1].size(); i++)
					{
						fout << taxinfo[1][i];
					}
					fout << std::endl;
					fout << taxinfo[2];
					fout << std::endl;
					fout << taxinfo[3];
					fout << std::endl;
					fout.close();
				}


			}
			if (checkBox5->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox5->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");

				if (fout.is_open())
				{
					fout << taxinfo[0];
					fout << std::endl;
					int count = 0;
					int i = 0;
					for (; i < taxinfo[1].size(); i++)
					{
						if (taxinfo[1][i] == ',')
						{
							count++;
						}
						fout << taxinfo[1][i];
						if (count == 4)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[1].size(); i++)
					{
						if (taxinfo[1][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[1].size(); i++)
					{
						fout << taxinfo[1][i];
					}
					fout << std::endl;
					fout << taxinfo[2];
					fout << std::endl;
					fout << taxinfo[3];
					fout << std::endl;
					fout.close();
				}
			


			}

		}
		if (choice == 3)
		{
		
			if (checkBox2->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox2->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");

				if (fout.is_open())
				{
					fout << taxinfo[0];
					fout << std::endl;
					fout << taxinfo[1];
					fout << std::endl;
					int count = 0;
					int i = 0;
					for (; i < taxinfo[2].size(); i++)
					{
						if (taxinfo[2][i] == ',')
						{
							count++;
						}
						fout << taxinfo[2][i];
						if (count == 1)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[2].size(); i++)
					{
						if (taxinfo[2][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[2].size(); i++)
					{
						fout << taxinfo[2][i];
					}
					fout << std::endl;
					fout << taxinfo[3];
					fout << std::endl;
					fout.close();
				}


			}
			if (checkBox3->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox3->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");

				if (fout.is_open())
				{
					fout << taxinfo[0];
					fout << std::endl;
					fout << taxinfo[1];
					fout << std::endl;
					int count = 0;
					int i = 0;
					for (; i < taxinfo[2].size(); i++)
					{
						if (taxinfo[2][i] == ',')
						{
							count++;
						}
						fout << taxinfo[2][i];
						if (count == 2)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[2].size(); i++)
					{
						if (taxinfo[2][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[2].size(); i++)
					{
						fout << taxinfo[2][i];
					}
					fout << std::endl;
					fout << taxinfo[3];
					fout << std::endl;
					fout.close();
				}




			}
			if (checkBox4->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox4->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");

				if (fout.is_open())
				{
					fout << taxinfo[0];
					fout << std::endl;
					fout << taxinfo[1];
					fout << std::endl;
					int count = 0;
					int i = 0;
					for (; i < taxinfo[2].size(); i++)
					{
						if (taxinfo[2][i] == ',')
						{
							count++;
						}
						fout << taxinfo[2][i];
						if (count == 3)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[2].size(); i++)
					{
						if (taxinfo[2][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[2].size(); i++)
					{
						fout << taxinfo[2][i];
					}
					fout << std::endl;
					fout << taxinfo[3];
					fout << std::endl;
					fout.close();
				}

			


			}
			if (checkBox5->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox5->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");

				if (fout.is_open())
				{
					fout << taxinfo[0];
					fout << std::endl;
					fout << taxinfo[1];
					fout << std::endl;
					int count = 0;
					int i = 0;
					for (; i < taxinfo[2].size(); i++)
					{
						if (taxinfo[2][i] == ',')
						{
							count++;
						}
						fout << taxinfo[2][i];
						if (count == 4)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[2].size(); i++)
					{
						if (taxinfo[2][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[2].size(); i++)
					{
						fout << taxinfo[2][i];
					}
					fout << std::endl;
					fout << taxinfo[3];
					fout << std::endl;
					fout.close();
				}



			}

		}
		if (choice == 4)
		{
			if (checkBox2->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox2->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");

				if (fout.is_open())
				{
					fout << taxinfo[0];
					fout << std::endl;
					fout << taxinfo[1];
					fout << std::endl;
					fout << taxinfo[2];
					fout << std::endl;
					int count = 0;
					int i = 0;
					for (; i < taxinfo[3].size(); i++)
					{
						if (taxinfo[3][i] == ',')
						{
							count++;
						}
						fout << taxinfo[3][i];
						if (count == 1)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[3].size(); i++)
					{
						if (taxinfo[3][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[3].size(); i++)
					{
						fout << taxinfo[3][i];
					}
					fout << std::endl;
					fout.close();
				}

			}
			if (checkBox3->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox3->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");

				if (fout.is_open())
				{
					fout << taxinfo[0];
					fout << std::endl;
					fout << taxinfo[1];
					fout << std::endl;
					fout << taxinfo[2];
					fout <<std:: endl;
					
					int count = 0;
				
					int i = 0;
					for (; i < taxinfo[3].size(); i++)
					{
						if (taxinfo[3][i] == ',')
						{
							count++;
						}
						fout << taxinfo[3][i];
						if (count == 2)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[3].size(); i++)
					{
						if (taxinfo[3][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[3].size(); i++)
					{
						fout << taxinfo[3][i];
					}
					fout << std::endl;
					fout.close();
				}

		

			}
			if (checkBox4->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox4->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");
				

				if (fout.is_open())
				{
					fout << taxinfo[0];
					fout << std::endl;
					fout << taxinfo[1];
					fout << std::endl;
					fout << taxinfo[2];
					fout << std::endl;
				
					int count = 0;
				
					int i = 0;
					for (; i < taxinfo[3].size(); i++)
					{
						if (taxinfo[3][i] == ',')
						{
							count++;
						}
						fout << taxinfo[3][i];
						if (count == 3)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[3].size(); i++)
					{
						if (taxinfo[3][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[3].size(); i++)
					{
						fout << taxinfo[3][i];
					}
					fout << std::endl;
					fout.close();
				}

			}
			if (checkBox5->Checked)
			{
				std::ifstream fin;
				std::string taxinfo[4];
				fin.open("TariffTaxInfo.txt");
				if (fin.is_open())
				{
					for (int i = 0; i < 4; i++)
					{
						getline(fin, taxinfo[i]);
					}
					fin.close();
				}
				String^ u = textBox5->Text;
				std::string change = msclr::interop::marshal_as<std::string>(u);
				std::ofstream fout;
				fout.open("TariffTaxInfo.txt");

				if (fout.is_open())
				{
					fout << taxinfo[0];
					fout << std::endl;
					fout << taxinfo[1];
					fout <<std:: endl;
					fout << taxinfo[2];
					fout << std::endl;
				
					int count = 0;
				
					int i = 0;
					for (; i < taxinfo[3].size(); i++)
					{
						if (taxinfo[3][i] == ',')
						{
							count++;
						}
						fout << taxinfo[3][i];
						if (count == 4)
						{
							break;
						}
					}
					fout << change;
					count = 0;
					i = i + 1;
					for (; i < taxinfo[3].size(); i++)
					{
						if (taxinfo[3][i] == ',')
						{
							count++;
						}
						if (count == 1)
						{
							break;
						}
					}
					for (; i < taxinfo[3].size(); i++)
					{
						fout << taxinfo[3][i];
					}
					fout << std::endl;
					fout.close();
				}



			}

		}
		this->Hide();

		}
		else
		{
		label3->Text = "Invalid ";

        }
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
