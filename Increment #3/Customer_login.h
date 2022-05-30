#pragma once
#include<iostream>
#include<fstream>
#include"Customer.h"
#include <msclr\marshal_cppstd.h>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Customer_login
	/// </summary>
	public ref class Customer_login : public System::Windows::Forms::Form
	{
	 int index;
	public:
		Customer_login(void)
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
		~Customer_login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Customer_login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Passwords:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(204, 144);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(223, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(204, 230);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(223, 22);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(459, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 56);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Customer_login::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(414, 307);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 5;
			// 
			// Customer_login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(933, 526);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Customer_login";
			this->Text = L"Customer_login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool Custom_login()
		{
			String^ u = textBox1->Text;
			String^ p = textBox2->Text;
			std::string username = msclr::interop::marshal_as<std::string>(u);
			std::string password = msclr::interop::marshal_as<std::string>(p);
			char** passwords;
			char** usernames;
			std::vector <std::string> credentials;
			std::ifstream fin;
			fin.open("CustomerInfo.txt");
			if (fin.is_open())
			{

			}
			else
			{
				return false;
			}
			while (!fin.eof())
			{
				std::string temp;
				getline(fin, temp);
				credentials.push_back(temp);
			}
			fin.close();
			int size = credentials.size() - 1;
			passwords = new char* [size];
			usernames = new  char* [size];
			for (int j = 0; j < size; j++)
			{
				usernames[j] = new char[4];
			}
			for (int j = 0; j < size; j++)
			{
				passwords[j] = new char[14];
			}
			for (int i = 0; i < size; i++)
			{
				int j = 0;
				for (; credentials[i][j] != ','; j++)
				{
					usernames[i][j] = credentials[i][j];
				}
				usernames[i][j] = '\0';
			}

			for (int i = 0; i < size; i++)
			{
				int j = 5;
				int k = 0;
				for (; k < 13; j++, k++)
				{
					passwords[i][k] = credentials[i][j];
				}
				passwords[i][k] = '\0';
			}
			bool user = false;
			bool pass = false;
			index = 0;
			for (int i = 0; i < size; i++)
			{
				if (username == usernames[i])
				{
					user = true;
					index = i;
					break;
				}
			}
			
				if (password == passwords[index])
				{
					pass = true;
				}

			if (user && pass)
			{
				return true;
			}
			else if(user==false || pass==false)
			{
				return false;
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Custom_login())
		{
			String^ u = textBox1->Text;
			String^ p = textBox2->Text;
			Customer^ obj = gcnew Customer(u,p);
			obj->ShowDialog();
			this->Hide();
		}
		else
		{
			label3->Text = "Wrong credntials";
		}

	}
};
}
