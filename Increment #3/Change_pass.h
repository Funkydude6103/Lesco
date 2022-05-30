#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include <msclr\marshal_cppstd.h>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Change_pass
	/// </summary>
	public ref class Change_pass : public System::Windows::Forms::Form
	{
		int index;
	public:
		Change_pass(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Change_pass(int i)
		{
			index = i;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Change_pass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Change_pass::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(438, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 58);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Change_pass::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(83, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Current Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(39, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"New Password:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(209, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(209, 142);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(172, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(206, 197);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(172, 22);
			this->textBox3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(395, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 7;
			// 
			// Change_pass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(710, 436);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"Change_pass";
			this->Text = L"Change_pass";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ u = textBox1->Text;
		String^ p = textBox2->Text;
		int index = 0;
		std::string username = msclr::interop::marshal_as<std::string>(u);
		std::string password = msclr::interop::marshal_as<std::string>(p);
		char** passwaords;
		char** usernames;
		std::vector <std::string> credentials;
		std::ifstream fin;
		fin.open("Employee.txt");
		if (fin.is_open())
		{

			while (!fin.eof())
			{
				std::string temp;
				getline(fin, temp);
				credentials.push_back(temp);
			}
			fin.close();
			int size = credentials.size();
			passwaords = new char* [size];
			usernames = new  char* [size];
			for (int j = 0; j < size; j++)
			{
				usernames[j] = new char[50];
			}
			for (int j = 0; j < size; j++)
			{
				passwaords[j] = new char[20];
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
				int j = 0;
				int k = 0;
				bool check = false;
				for (int l = 0; credentials[i][l] != ','; l++)
				{
					j++;
				}
				j++;
				for (; credentials[i][j] != '\0'; j++, k++)
				{
					passwaords[i][k] = credentials[i][j];
				}
				passwaords[i][k] = '\0';
			}
			bool user = false;
			bool pass = false;
			
				if (username == usernames[index])
				{
					user = true;

				}
			
	
				if (password == passwaords[index])
				{
					pass = true;
				
				}
	
			if (user && pass)
			{
				String^ np = textBox3->Text;
				std::string new1 = msclr::interop::marshal_as<std::string>(np);
				int i = 0;
				for (; i < new1.size(); i++)
				{
					passwaords[index][i] = new1[i];
				}
				passwaords[index][i] = '\0';

				std::ofstream fout;
				fout.open("Employee.txt");
				for (int i = 0; i < credentials.size(); i++)
				{
					fout << usernames[i] << "," << passwaords[i];
					if (i != credentials.size() - 1)
					fout << std::endl;
				}
				fout.close();

				label4->Text = "Success";
				this->Hide();

				

			}
			else
			{
				label4->Text = "Wrong credentials";
			}
		}
	}
};
}
