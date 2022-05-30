#pragma once
#include"Payment.h"
#include"Change_pass.h"
#include"Taxtarrif.h"
#include "Expirary_Report.h"
#include"Cust_edit_functions.h"
#include"Enter_id.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Employee
	/// </summary>
	public ref class Employee : public System::Windows::Forms::Form
	{
	public:
		int index;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label1;
	public:
		Form^ obj2;
		Employee(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Employee(int i)
		{
			index = i;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Employee(int i,Form ^ob)
		{
			obj2 = ob;
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
		~Employee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(42, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(457, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Change Password";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Employee::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(42, 209);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(457, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Edit Tax Tarrif";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Employee::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(42, 285);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(457, 50);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Add or Edit a New Customer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Employee::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(42, 356);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(457, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"See the Expiry report of Customers Cnic ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Employee::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(42, 422);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(457, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"See the Bill of any Customer ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Employee::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(42, 496);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(457, 50);
			this->button6->TabIndex = 5;
			this->button6->Text = L"See the count of unpaid bills  ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Employee::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(763, 459);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(182, 86);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Back to MainMenu";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Employee::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(581, 134);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(353, 50);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Change Unpaid Status";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Employee::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(303, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 42);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Employee Menu";
			// 
			// Employee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(962, 577);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"Employee";
			this->Text = L"Employee";
			this->Load += gcnew System::EventHandler(this, &Employee::Employee_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Change_pass^ obj = gcnew Change_pass(index);
		obj->ShowDialog();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Taxtarrif^ l = gcnew Taxtarrif();
	l->Show();


}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Enter_id^ ob = gcnew Enter_id();
	ob->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Expirary_Report^ l = gcnew Expirary_Report();
	l->Show();
}
private: System::Void Employee_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Cust_edit_functions^ j = gcnew Cust_edit_functions();
	j->Show();
     
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	obj2->Show();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string temp;
	int paid_count = 0;
	int unpaid_count = 0;
	std::ifstream fin;
	fin.open("BillingInfo.txt", std::ios::in);
	while (!fin.eof())
	{
		for (int i = 0; i < 12; i++)
		{
			getline(fin, temp, ',');
		}
		if (temp == "unpaid")
			unpaid_count++;
		else if (temp == "paid")
			paid_count++;
		getline(fin, temp, '\n');
	}
	fin.close();
	std::string pay = std::to_string(paid_count);
	std::string unpay = std::to_string(unpaid_count);
	String^ unpaid = gcnew String(unpay.c_str());
	String^ paid = gcnew String(pay.c_str());
	MessageBox::Show("Number of Paid Bills : " + paid + "\nNumber of Unpaid Bills : " + unpaid, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Payment^ j = gcnew Payment();
	j->Show();
	
	

}
};
}
