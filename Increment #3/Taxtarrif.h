#pragma once

#include"tax1C.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Taxtarrif
	/// </summary>
	public ref class Taxtarrif : public System::Windows::Forms::Form
	{
	public:
		Taxtarrif(void)
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
		~Taxtarrif()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Taxtarrif::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(137, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(314, 59);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Edit 1-Phase Commercial";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Taxtarrif::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(137, 178);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(314, 59);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Edit 1-Phase Domestic";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Taxtarrif::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(137, 282);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(314, 59);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Edit 3-Phase Commercial";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Taxtarrif::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(137, 380);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(314, 59);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Edit 3-Phase Domestic";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Taxtarrif::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(689, 415);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(113, 62);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Close";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Taxtarrif::button5_Click);
			// 
			// Taxtarrif
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(824, 489);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"Taxtarrif";
			this->Text = L"Taxtarrif";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		tax1C^ k = gcnew tax1C(1);
		k->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		tax1C^ k = gcnew tax1C(2);
		k->Show();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	tax1C^ k = gcnew tax1C(3);
	k->Show();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	tax1C^ k = gcnew tax1C(4);
	k->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
