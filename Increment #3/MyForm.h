#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include "Employee1.h"
#include <msclr\marshal_cppstd.h>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	/// 

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Form^ op;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm(Form ^obj1)
		{
			op = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(231, 158);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(273, 30);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(231, 262);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(273, 30);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(17, 158);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"USERNAME:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(12, 262);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 37);
			this->label2->TabIndex = 3;
			this->label2->Text = L"PASSWORD:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(450, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 39);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(12, 389);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 39);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Back ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(400, 317);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(917, 527);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	}



	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ u = textBox1->Text;
	String^  p = textBox2->Text;
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
		 int index=0;
		 for (int i = 0; i < size; i++)
		 {
			 if (username == usernames[i])
			 {
				 user = true;
				 index = i;
				 break;
			 }
		 }
			 if (password == passwaords[index])
			 {
				 pass = true;
			 }


		 if (user && pass)
		 {
			 label3->Text = "Success";
			 Employee^ obj = gcnew Employee(index,op);
			 this->Hide();
			 obj->ShowDialog();

		 }
		 else if(user==false || pass==false)
		 {
			 label3->Text = "Wrong credentials";
		 }
	 }
	

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	op->Show();
     

}
};
}
