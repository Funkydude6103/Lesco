#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Expirary_Report
	/// </summary>
	public ref class Expirary_Report : public System::Windows::Forms::Form
	{
	public:
		Expirary_Report(void)
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
		~Expirary_Report()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Expirary_Report::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 206);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(706, 316);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 51);
			this->button1->TabIndex = 1;
			this->button1->Text = L"See the Report";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Expirary_Report::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(757, 488);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Expirary_Report::button2_Click);
			// 
			// Expirary_Report
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(844, 546);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Name = L"Expirary_Report";
			this->Text = L"Expirary_Report";
			this->Load += gcnew System::EventHandler(this, &Expirary_Report::Expirary_Report_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool isLeap(int y)
		{
			if (y % 100 != 0 && y % 4 == 0 || y % 400 == 0)
				return true;

			return false;
		}
		int offsetDays(int d, int m, int y)
		{
			int offset = d;

			switch (m - 1)
			{
			case 11:
				offset += 30;
			case 10:
				offset += 31;
			case 9:
				offset += 30;
			case 8:
				offset += 31;
			case 7:
				offset += 31;
			case 6:
				offset += 30;
			case 5:
				offset += 31;
			case 4:
				offset += 30;
			case 3:
				offset += 31;
			case 2:
				offset += 28;
			case 1:
				offset += 31;
			}

			if (isLeap(y) && m > 2)
				offset += 1;

			return offset;
		}
		void revoffsetDays(int offset, int y, int* d, int* m)
		{
			int month[13] = { 0, 31, 28, 31, 30, 31, 30,
							  31, 31, 30, 31, 30, 31 };

			if (isLeap(y))
				month[2] = 29;

			int i;
			for (i = 1; i <= 12; i++)
			{
				if (offset <= month[i])
					break;
				offset = offset - month[i];
			}

			*d = offset;
			*m = i;
		}
		void addDays(int d1, int m1, int y1, int x, int& d2, int& m2, int& y2)
		{
			int offset1 = offsetDays(d1, m1, y1);
			int remDays = isLeap(y1) ? (366 - offset1) : (365 - offset1);
			int  offset2;
			if (x <= remDays)
			{
				y2 = y1;
				offset2 = offset1 + x;
			}

			else
			{
				x -= remDays;
				y2 = y1 + 1;
				int y2days = isLeap(y2) ? 366 : 365;
				while (x >= y2days)
				{
					x -= y2days;
					y2++;
					y2days = isLeap(y2) ? 366 : 365;
				}
				offset2 = x;
			}
			revoffsetDays(offset2, y2, &d2, &m2);
		}
		std::string Nadra_Expiry_date_Report()
		{
			std::string main_kam;
			time_t now = time(0);
#pragma warning(suppress : 4996)
			tm* ltm = localtime(&now);
			int year = 1900 + ltm->tm_year;
			int month = 1 + ltm->tm_mon;
			int day = ltm->tm_mday;
			int year2;
			int month2;
			int day2;
			addDays(day, month, year, 30, day2, month2, year2);
			std::vector <std::string> info;
			std::ifstream fin;
			fin.open("NADRA.txt");
			if (fin.is_open())
				while (!fin.eof())
				{
					std::string temp;
					getline(fin, temp);
					info.push_back(temp);
				}
			else {
				return "File Empty";
			}
			std::string date;
			if (day2 / 10 == 0 && month2 / 10 == 0)
				date = "0" + std::to_string(day2) + "/" + "0" + std::to_string(month2) + "/" + std::to_string(year2);

			if (day2 / 10 == 0 && month2 / 10 != 0)
				date = "0" + std::to_string(day2) + "/" + std::to_string(month2) + "/" + std::to_string(year2);

			if (day2 / 10 != 0 && month2 / 10 == 0)
				date = std::to_string(day2) + "/" + "0" + std::to_string(month2) + "/" + std::to_string(year2);

			if (day2 / 10 != 0 && month2 / 10 != 0)
				date = std::to_string(day2) + "/" + std::to_string(month2) + "/" + std::to_string(year2);
			int size = info.size() - 1;
			char** exp_date = new char* [size];
			for (int i = 0; i < size; i++)
			{
				exp_date[i] = new char[10];
			}
			for (int i = 0; i < size; i++)
			{
				for (int j = 25, k = 0; j < 36 && k < 10; j++, k++)
				{
					exp_date[i][k] = info[i][j];
				}
				exp_date[i][10] = '\0';

			}

			for (int i = 0; i < size; i++)
			{
				int d = (char)exp_date[i][0] - 48;
				d = (d * 10) + ((char)exp_date[i][1] - 48);


				int m = (char)exp_date[i][3] - 48;
				m = (m * 10) + ((char)exp_date[i][4] - 48);


				int y = (char)exp_date[i][6] - 48;
				y = (y * 1000) + ((char)exp_date[i][7] - 48) * 100 + ((char)exp_date[i][8] - 48) * 10 + ((char)exp_date[i][9] - 48);
				if (y < year2)
				{
					main_kam = main_kam + "\n";
					
					main_kam=main_kam+"Expiry date :  " + std::to_string(d) +"/" + std::to_string(m) + "/" + std::to_string(y);
					main_kam=main_kam+"   Cnic : (Customer aginst it)  ";
					for (int j = 0; j < 13; j++)
					{
						main_kam=main_kam+info[i][j];
					}
					main_kam = main_kam + "\n";

				}
				else if (y == year2)
				{
	
					if (m == month2 || month2 > m)
					{
						if (day2 == d || day2 > d)
						{
							main_kam = main_kam+"Expiry date :  " + std::to_string(d) + "/" + std::to_string(m) + "/" + std::to_string(y);
							main_kam = main_kam + "   Cnic : (Customer aginst it)  ";
							for (int j = 0; j < 13; j++)
							{
								main_kam = main_kam + info[i][j];

							}
						}
						else if (month2 > m)
						{
							main_kam = main_kam+"Expiry date :  " + std::to_string(d) + "/" + std::to_string(m) + "/" + std::to_string(y);
							main_kam = main_kam + "   Cnic : (Customer aginst it)  ";
							for (int j = 0; j < 13; j++)
							{
								main_kam = main_kam + info[i][j];


							}
						}
					}
					main_kam = main_kam + "\n";
				}
				main_kam = main_kam + "\n";
			}
			return main_kam;
		}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		std::string a = Nadra_Expiry_date_Report();
		String^ str2 = gcnew String(a.c_str());
		label1->Text = str2;
		std::cout << a;

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Expirary_Report_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
