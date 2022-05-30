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
	/// Summary for Enter_id
	/// </summary>
	public ref class cust_show_bill : public System::Windows::Forms::Form
	{
	public:
		String^ d;
		cust_show_bill(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		cust_show_bill(String ^c)
		{
			d=c;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cust_show_bill()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Ok;
	private: System::Windows::Forms::Button^ button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(cust_show_bill::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Ok = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(129, 231);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Show";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &cust_show_bill::button1_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->AutoSize = true;
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->label28);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Controls->Add(this->label26);
			this->panel1->Controls->Add(this->label25);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->Ok);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(13, 152);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(538, 343);
			this->panel1->TabIndex = 4;
			this->panel1->Visible = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(283, 278);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(62, 20);
			this->label28->TabIndex = 26;
			this->label28->Text = L"label28";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(283, 257);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(62, 20);
			this->label27->TabIndex = 25;
			this->label27->Text = L"label27";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(283, 236);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(62, 20);
			this->label26->TabIndex = 24;
			this->label26->Text = L"label26";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(283, 218);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(62, 20);
			this->label25->TabIndex = 23;
			this->label25->Text = L"label25";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(283, 197);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(62, 20);
			this->label24->TabIndex = 22;
			this->label24->Text = L"label24";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(283, 177);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(62, 20);
			this->label23->TabIndex = 21;
			this->label23->Text = L"label23";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(283, 158);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(62, 20);
			this->label22->TabIndex = 20;
			this->label22->Text = L"label22";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(283, 137);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(62, 20);
			this->label21->TabIndex = 19;
			this->label21->Text = L"label21";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(283, 118);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(62, 20);
			this->label20->TabIndex = 18;
			this->label20->Text = L"label20";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(283, 98);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(62, 20);
			this->label19->TabIndex = 17;
			this->label19->Text = L"label19";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(283, 78);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(62, 20);
			this->label18->TabIndex = 16;
			this->label18->Text = L"label18";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(283, 58);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(62, 20);
			this->label17->TabIndex = 15;
			this->label17->Text = L"label17";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(283, 39);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(62, 20);
			this->label16->TabIndex = 14;
			this->label16->Text = L"label16";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(21, 278);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(130, 20);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Payment Date : ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(21, 257);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(101, 20);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Bill Status : ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(21, 236);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(97, 20);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Due-Date : ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(21, 218);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(61, 20);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Total : ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(21, 197);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(132, 20);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Fixed Charges : ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(21, 177);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 20);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Tax : ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(21, 156);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(136, 20);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Peak Cost/Unit : ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 137);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(153, 20);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Normal Cost/Unit : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 118);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(170, 20);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Reading Entry Date : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 98);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(178, 20);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Peak Hours Reading : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 79);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 20);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Current Reading : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 58);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Billing Month : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 37);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"User ID : ";
			// 
			// Ok
			// 
			this->Ok->Location = System::Drawing::Point(143, 311);
			this->Ok->Margin = System::Windows::Forms::Padding(4);
			this->Ok->Name = L"Ok";
			this->Ok->Size = System::Drawing::Size(79, 28);
			this->Ok->TabIndex = 0;
			this->Ok->Text = L"Ok";
			this->Ok->UseVisualStyleBackColor = true;
			this->Ok->Click += gcnew System::EventHandler(this, &cust_show_bill::Ok_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(870, 430);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 63);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &cust_show_bill::button2_Click);
			// 
			// cust_show_bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(986, 508);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"cust_show_bill";
			this->Text = L"Enter_id";
			this->Load += gcnew System::EventHandler(this, &cust_show_bill::Enter_id_Load_1);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string id = context.marshal_as<std::string>(d);
		std::string temp;
		std::string billing_month;
		std::string month = current_month();
		bool found = false;
		String^ ID;
		std::ifstream fin("BillingInfo.txt", std::ios::in);
		while (getline(fin, temp, ','))
		{
			getline(fin, billing_month, ',');
			if (temp == id && billing_month == month)
			{
				panel1->Show();
				found = true;
				ID = gcnew String(temp.c_str());
				label16->Text = ID;
				String^ Billing_Month = gcnew String(billing_month.c_str());
				label17->Text = Billing_Month;
				getline(fin, temp, ',');
				String^ Meter_Reading = gcnew String(temp.c_str());
				label18->Text = Meter_Reading;
				String^ Peak_Reading;
				getline(fin, temp, ',');
				if (temp == "")
					Peak_Reading = "0";
				else
					Peak_Reading = gcnew String(temp.c_str());
				label19->Text = Peak_Reading;
				getline(fin, temp, ',');
				String^ Entry_Date = gcnew String(temp.c_str());;
				label20->Text = Entry_Date;
				getline(fin, temp, ',');
				String^ Cost = gcnew String(temp.c_str());
				label21->Text = Cost;
				getline(fin, temp, ',');
				String^ Peak_Cost;
				if (temp == "")
					Peak_Cost = "0";
				else
					Peak_Cost = gcnew String(temp.c_str());
				label22->Text = Peak_Cost;
				getline(fin, temp, ',');
				String^ Tax = gcnew String(temp.c_str());
				label23->Text = Tax;
				getline(fin, temp, ',');
				String^ Fixed = gcnew String(temp.c_str());
				label24->Text = Fixed;
				getline(fin, temp, ',');
				String^ Total = gcnew String(temp.c_str());
				label25->Text = Total;
				getline(fin, temp, ',');
				String^ DDate = gcnew String(temp.c_str());
				label26->Text = DDate;
				getline(fin, temp, ',');
				String^ Status = gcnew String(temp.c_str());
				label27->Text = Status;
				getline(fin, temp, '\n');
				String^ Payment_Date = gcnew String(temp.c_str());
				label28->Text = Payment_Date;
				break;
			}
			else
				getline(fin, temp, '\n');
		}
		if (!found)
		{
			MessageBox::Show("No Match for customer id!", "Error!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void Ok_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Hide();
	}
	private: System::Void Enter_id_Load(System::Object^ sender, System::EventArgs^ e) {
		panel1->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Enter_id_Load_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}