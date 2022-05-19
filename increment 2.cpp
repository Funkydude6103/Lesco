#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<ctime>
#include<Windows.h>
#include<cstdlib>
#include<vector>
using namespace std;
class employee{
private:
	string username;
	string password;
	char** passwaords;
	char** usernames;
	vector <string> credentials;
	int index;
public:
	employee()
	{
		string u, p;
		cout << "User name:";
		getline(cin, u);
		cout << endl;
		cout << "Password:";
		getline(cin, p);
		username = u;
		password = p;
		index = 0;
	}
	bool login()
	{
		ifstream fin;
		fin.open("Employee.txt");
		if (fin.is_open())
		{
		}
		else
		{
			cout << "Error opening file ";
			return false;
		}
		while (!fin.eof())
		{
			string temp;
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
		for (int i = 0; i < size; i++)
		{
			if (username == usernames[i])
			{
				user = true;
				index = i;
				break;
			}
		}
		for (int i = 0; i < size; i++)
		{
			if (password == passwaords[i])
			{
				pass = true;
				break;
			}
		}

		if (user && pass)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void password_change()
	{
		string pass;
		while (1)
		{
			cout << "Enter the new password :";
			cin >> pass;
			if (pass.size() < 21)
			{
				passwaords[index] = new char[20];
				int i = 0;
				for (; i < pass.size(); i++)
				{
					passwaords[index][i] = pass[i];
				}
				passwaords[index][i] = '\0';

				ofstream fout;
				fout.open("Employee.txt");
				for (int i = 0; i < credentials.size(); i++)
				{
					fout << usernames[i] << "," << passwaords[i];
					if (i != credentials.size() - 1)
						fout << endl;
				}
				fout.close();
				break;
			}
			else {
				cout << "Invalid lenght try agin";
				break;
			}
		}



	}
	void tax_tarif_file_updation()
	{

		char choice;
		ifstream fin;
		while (1)
		{
			string taxinfo[4];
			fin.open("TariffTaxInfo.txt");
			if (fin.is_open())
			{
				for (int i = 0; i < 4; i++)
				{
					getline(fin, taxinfo[i]);
				}
			}
			else
			{
				cout << "Cannot open the Tariff Tax file  " << endl;
				return;
			}
			fin.close();
			cout << "Press 1 to change tariff and tax information about domestic customers with 1-phase meter " << endl;
			cout << "Press 2 to change tariff and tax information about commercial customers with 1-phase meter " << endl;
			cout << "Press 3 to change tariff and tax information about domestic customers with 3-phase meter " << endl;
			cout << "Press 4 to change tariff and tax information about commercial customers with 3-phase meter " << endl;
			cout << "Press 5 to go back to main menu" << endl;
			choice = _getch();
			if (choice == '1')
			{
				system("CLS");
				tax_tarif_file_updation_row1(taxinfo);
			}
			else if (choice == '2')
			{
				system("CLS");
				tax_tarif_file_updation_row2(taxinfo);
			}
			else if (choice == '3')
			{
				system("CLS");
				tax_tarif_file_updation_row3(taxinfo);
			}
			else if (choice == '4')
			{
				system("CLS");
				tax_tarif_file_updation_row4(taxinfo);
			}
			else if (choice == '5')
			{
				system("CLS");
				return;
			}
			else
			{
				system("CLS");
				cout << "Invalid Entery" << endl;
				cout << "Press 1 to try again " << endl;
				cout << "Press 2 to go back to main menu" << endl;
				choice = _getche();
				if (choice == '1')
				{
					system("CLS");
					continue;

				}
				else
				{
					system("CLS");
					return;

				}
			}
		}

	}
	void tax_tarif_file_updation_row1(string taxinfo[])
	{
		char choice;
		while (1)
		{
			cout << "Press 1 to update meter type " << endl;
			cout << "Press 2 to update regular unit price " << endl;
			cout << "Press 3 to update peak hour unit price " << endl;
			cout << "Press 4 to update the percentage of tax " << endl;
			cout << "Press 5 to update fixed charges " << endl;
			choice = _getche();
			if (choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5')
			{
				system("CLS");
				if (choice == '1')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						string change;
						int count = -1;
						cout << "Enter the updation " << endl;
						getline(cin, change);
						fout << change;
						for (int i = 0; i < taxinfo[0].size(); i++)
						{
							if (taxinfo[0][i] == ',')
							{
								count = 0;
							}
							if (count == 0)
							{
								fout << taxinfo[0][i];
							}
						}
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}
				}
				if (choice == '2')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}
				}
				if (choice == '3')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}

				}
				if (choice == '4')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}

				}

				if (choice == '5')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}

				}

				break;
			}
			else
			{
				system("CLS");
				cout << "Invalid Entery" << endl;
				cout << "Press 1 to try again " << endl;
				cout << "Press 2 to go back" << endl;
				choice = _getche();
				if (choice == '1')
				{
					system("CLS");
					continue;

				}
				else
				{
					system("CLS");
					return;

				}
			}
		}

	}
	void tax_tarif_file_updation_row2(string taxinfo[])
	{
		char choice;
		while (1)
		{
			cout << "Press 1 to update meter type " << endl;
			cout << "Press 2 to update regular unit price " << endl;
			cout << "Press 3 to update peak hour unit price " << endl;
			cout << "Press 4 to update the percentage of tax " << endl;
			cout << "Press 5 to update fixed charges " << endl;
			choice = _getche();
			if (choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5')
			{
				system("CLS");
				if (choice == '1')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						string change;
						int count = -1;
						cout << "Enter the updation " << endl;
						getline(cin, change);
						fout << change;
						for (int i = 0; i < taxinfo[1].size(); i++)
						{
							if (taxinfo[1][i] == ',')
							{
								count = 0;
							}
							if (count == 0)
							{
								fout << taxinfo[1][i];
							}
						}

						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}
				}
				if (choice == '2')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}
				}
				if (choice == '3')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}

				}
				if (choice == '4')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}

				}

				if (choice == '5')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}

				}

				break;
			}
			else
			{
				system("CLS");
				cout << "Invalid Entery" << endl;
				cout << "Press 1 to try again " << endl;
				cout << "Press 2 to go back" << endl;
				choice = _getche();
				if (choice == '1')
				{
					system("CLS");
					continue;

				}
				else
				{
					system("CLS");
					return;

				}
			}
		}
	}
	void tax_tarif_file_updation_row3(string taxinfo[])
	{
		char choice;
		while (1)
		{
			cout << "Press 1 to update meter type " << endl;
			cout << "Press 2 to update regular unit price " << endl;
			cout << "Press 3 to update peak hour unit price " << endl;
			cout << "Press 4 to update the percentage of tax " << endl;
			cout << "Press 5 to update fixed charges " << endl;
			choice = _getche();
			if (choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5')
			{
				system("CLS");
				if (choice == '1')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						string change;
						int count = -1;
						cout << "Enter the updation " << endl;
						getline(cin, change);
						fout << change;
						for (int i = 0; i < taxinfo[2].size(); i++)
						{
							if (taxinfo[2][i] == ',')
							{
								count = 0;
							}
							if (count == 0)
							{
								fout << taxinfo[2][i];
							}
						}
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}
				}
				if (choice == '2')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}
				}
				if (choice == '3')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}

				}
				if (choice == '4')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}

				}

				if (choice == '5')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout << taxinfo[3];
						fout << endl;
						fout.close();
					}

				}

				break;
			}
			else
			{
				system("CLS");
				cout << "Invalid Entery" << endl;
				cout << "Press 1 to try again " << endl;
				cout << "Press 2 to go back" << endl;
				choice = _getche();
				if (choice == '1')
				{
					system("CLS");
					continue;

				}
				else
				{
					system("CLS");
					return;

				}
			}
		}
	}
	void tax_tarif_file_updation_row4(string taxinfo[])
	{
		char choice;
		while (1)
		{
			cout << "Press 1 to update meter type " << endl;
			cout << "Press 2 to update regular unit price " << endl;
			cout << "Press 3 to update peak hour unit price " << endl;
			cout << "Press 4 to update the percentage of tax " << endl;
			cout << "Press 5 to update fixed charges " << endl;
			choice = _getche();
			if (choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5')
			{
				system("CLS");
				if (choice == '1')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						string change;
						int count = -1;
						cout << "Enter the updation " << endl;
						getline(cin, change);
						fout << change;
						for (int i = 0; i < taxinfo[3].size(); i++)
						{
							if (taxinfo[3][i] == ',')
							{
								count = 0;
							}
							if (count == 0)
							{
								fout << taxinfo[3][i];
							}
						}
						fout << endl;
						fout.close();
					}
				}
				if (choice == '2')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout.close();
					}
				}
				if (choice == '3')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout.close();
					}

				}
				if (choice == '4')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout.close();
					}

				}

				if (choice == '5')
				{
					ofstream fout;
					fout.open("TariffTaxInfo.txt");
					if (fout.is_open())
					{
						fout << taxinfo[0];
						fout << endl;
						fout << taxinfo[1];
						fout << endl;
						fout << taxinfo[2];
						fout << endl;
						string change;
						int count = 0;
						cout << "Enter the updation " << endl;
						getline(cin, change);
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
						fout << endl;
						fout.close();
					}

				}

				break;
			}
			else
			{
				system("CLS");
				cout << "Invalid Entery" << endl;
				cout << "Press 1 to try again " << endl;
				cout << "Press 2 to go back" << endl;
				choice = _getche();
				if (choice == '1')
				{
					system("CLS");
					continue;

				}
				else
				{
					system("CLS");
					return;

				}
			}
		}
	}
	void empty()
	{
		credentials.clear();
	}
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
	void Nadra_Expiry_date_Report()
	{
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
		vector <string> info;
		ifstream fin;
		fin.open("NADRA.txt");
		if (fin.is_open())
			while (!fin.eof())
			{
				string temp;
				getline(fin, temp);
				info.push_back(temp);
			}
		else
		{
			cout << "File not open ";
			return;
		}
		string date;
		if (day2 / 10 == 0 && month2 / 10 == 0)
			date = "0" + to_string(day2) + "/" + "0" + to_string(month2) + "/" + to_string(year2);

		if (day2 / 10 == 0 && month2 / 10 != 0)
			date = "0" + to_string(day2) + "/" + to_string(month2) + "/" + to_string(year2);

		if (day2 / 10 != 0 && month2 / 10 == 0)
			date = to_string(day2) + "/" + "0" + to_string(month2) + "/" + to_string(year2);

		if (day2 / 10 != 0 && month2 / 10 != 0)
			date = to_string(day2) + "/" + to_string(month2) + "/" + to_string(year2);

		char** exp_date = new char* [info.size()];
		for (int i = 0; i < info.size(); i++)
		{
			exp_date[i] = new char[10];
		}


		for (int i = 0; i < info.size(); i++)
		{
			for (int j = 25, k = 0; j < 36 && k < 10 && info[i][j] != '\0'; j++, k++)
			{
				exp_date[i][k] = info[i][j];
			}
			exp_date[i][10] = '\0';

		}
		/*
		cout<<exp_date[2];

		int d = (char)exp_date[2][0] - 48;
		d = (d * 10) + ((char)exp_date[2][1] - 48);


		int m = (char)exp_date[2][3] - 48;
		m = (m * 10) + ((char)exp_date[2][4] - 48);


		int y = (char)exp_date[2][6] - 48;
		y = (y * 1000) + ((char)exp_date[2][7] - 48) * 100 + ((char)exp_date[2][8] - 48) * 10 + ((char)exp_date[2][9] - 48);

		cout<<" exp" << d << "/" << m << "/" << y;
		*/
		cout << "********************************************************************" << endl;
		cout << "The List of Customers Whose Cnic is gonna expire in the next 30 Days" << endl;
		cout << "********************************************************************" << endl;

		for (int i = 0; i < info.size(); i++)
		{
			int d = (char)exp_date[i][0] - 48;
			d = (d * 10) + ((char)exp_date[i][1] - 48);


			int m = (char)exp_date[i][3] - 48;
			m = (m * 10) + ((char)exp_date[i][4] - 48);


			int y = (char)exp_date[i][6] - 48;
			y = (y * 1000) + ((char)exp_date[i][7] - 48) * 100 + ((char)exp_date[i][8] - 48) * 10 + ((char)exp_date[i][9] - 48);

			if (y < year2)
			{
				cout << endl;
				cout << "Curret:" << date << " exp" << d << "/" << m << "/" << y;
				cout << " Cnic : (Customer aginst it)";
				for (int j = 0; j < 13; j++)
				{
					cout << info[i][j];


				}

			}
			else if (y == year2)
			{
				cout << "hello";
				if (m == month2 || month2 > m)
				{
					if (day2 == d || day2 > d)
					{
						cout << "Curret:" << date << " exp" << d << "/" << m << "/" << y;
						cout << " Cnic : (Customer aginst it)";
						cout << endl;
						cout << " Cnic : (Customer aginst it)";
						for (int j = 0; j < 13; j++)
						{
							cout << info[i][j];


						}
					}
					else if (month2 > m)
					{
						cout << "Curret:" << date << " exp" << d << "/" << m << "/" << y;
						cout << " Cnic : (Customer aginst it)";
						cout << endl;
						cout << " Cnic : (Customer aginst it)";
						for (int j = 0; j < 13; j++)
						{
							cout << info[i][j];


						}
					}
				}
			}
		}
		cout << "\nReturning to menu in 10 seconds" << endl;
		Sleep(5000);
	}
};
class customer {
public:
	bool cutomer_login(string username,string password)
	{
		char** passwords;
		char** usernames;
		vector <string> credentials;
		ifstream fin;
		fin.open("CustomerInfo.txt");
		if (fin.is_open())
		{

		}
		else
		{
			cout << "Error opening file ";
			return false;
		}
		while (!fin.eof())
		{
			string temp;
			getline(fin, temp);
			credentials.push_back(temp);
		}
		fin.close();
		int size = credentials.size()-1;
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
		for (int i = 0; i < size; i++)
		{
			if (username == usernames[i])
			{
				user = true;
				break;
			}
		}
		for (int i = 0; i < size; i++)
		{
			if (password == passwords[i])
			{
				pass = true;
				break;
			}
		}

		if (user && pass)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	char IssueDateForNADRAFile[11];
	char expiryDateForNADRAFile[11];

	void DateConcatinate(char* a, char* day, char* month, char* year) {
		a[0] = day[0];
		a[1] = day[1];
		a[2] = '/';
		a[3] = month[0];
		a[4] = month[1];
		a[5] = '/';
		a[6] = year[0];
		a[7] = year[1];
		a[8] = year[2];
		a[9] = year[3];
		a[10] = year[4];
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
	void IssueDate() {
		////entering day

		cout << "Enter Issue date" << endl << endl;

		char day[3], month[3], * year = new char[5];

		{
			cout << "Enter day (DD):  ";
			day[0] = _getche();
			while (day[0] != '0' && day[0] != '1' && day[0] != '2' && day[0] != '3')
			{
				cout << endl;
				cout << "For first number the only options are 0, 1 and 3" << endl;
				cout << "Enter agian:  ";
				day[0] = _getche();
			}
			day[1] = _getche();

			if (day[0] == '0') {
				while (day[1] != '1' && day[1] != '2' && day[1] != '3'
					&& day[1] != '4' && day[1] != '5' && day[1] != '6'
					&& day[1] != '7' && day[1] != '8' && day[1] != '9')
				{
					cout << endl;
					cout << "For 2nd value the only options are 1 to 9 " << endl;
					cout << "Enter again:  ";
					day[1] = _getche();
				}
			}
			else if (day[0] == '3') {
				while (day[0] == 3 && day[1] != '0' && day[1] != '1') {
					cout << endl;
					cout << "For 2nd vlue the only options are 0 and 1";
					cout << "Enter again:  ";
					day[1] = _getche();
				}
			}

			while (day[1] != '0' && day[1] != '1' && day[1] != '2' && day[1] != '3'
				&& day[1] != '4' && day[1] != '5' && day[1] != '6' && day[1] != '7'
				&& day[1] != '8' && day[1] != '9')
			{
				cout << endl;
				cout << "For 2nd value the only options are 0 to 9 " << endl;
				cout << "Enter again:  ";
				day[1] = _getche();
			}

			day[2] = '\0';
		}
		cout << endl;
		////entering month;
		{
			cout << "Enter Month (MM):  ";
			month[0] = _getche();

			while (month[0] != '0' && month[0] != '1') {
				cout << endl;
				cout << "The only options are 0 and 1" << endl;
				cout << "Enter again:  ";
				month[0] = _getche();
			}
			month[1] = _getche();
			while (
				month[0] == '0'
				&& month[1] != '1' && month[1] != '2' && month[1] != '3'
				&& month[1] != '4' && month[1] != '5' && month[1] != '6'
				&& month[1] != '7' && month[1] != '8' && month[1] != '9'
				)
			{
				cout << endl;
				cout << "The option ranges from 1 to 9" << endl;
				cout << "Enter again:  ";
			}

			while (month[0] == '1' && month[1] != '0' && month[1] != '1' && month[1] != '2')
			{
				cout << endl;
				cout << "The only options are 0, 1 and 2" << endl;
				cout << "Enter again:  ";
				month[1] = _getche();
			}

			month[2] = '\0';
		}
		////entering year;
		cout << endl;
		{
			cout << "Enter year (YYYY):  ";
			////input first digit;
			year[0] = _getche();
			while (year[0] != '2') {
				cout << endl;
				cout << "For 1st vlue the only options is 2 as NADRA was established in 2000" << endl;
				cout << "Enter agian:  ";
				year[0] = _getche();
			}
			////input second digit;
			year[1] = _getche();
			while (year[0] == '2' && year[1] != '0') {
				cout << endl;
				cout << "Your only option is 0" << endl;
				cout << "Enter agian:  ";
				year[1] = _getche();
			}
			////input 3rd digit;
			year[2] = _getche();
			while (year[0] == '2' && year[1] == '0' && year[2] != '1'
				&& year[2] != '2' && year[2] != '0')
			{
				cout << endl;
				cout << "Your only options are 0, 1 and 2" << endl;
				cout << "Enter again:  ";
				year[2] = _getche();
			}

			////input 4th digit;
			year[3] = _getche();
			while (year[0] == '2' && year[1] == '0' && (year[2] == '0' || year[2] == '1')
				&& year[3] != '1' && year[3] != '2' && year[3] != '3' && year[3] != '4'
				&& year[3] != '5' && year[3] != '6' && year[3] != '7' && year[3] != '8'
				&& year[3] != '9' && year[3] != '0')
			{
				cout << "Your only optios are 0 to 9" << endl;
				cout << "Enter again:  ";

				year[3] = _getche();
			}
			while (year[0] == '2' && year[1] == '0' && year[2] == '2'
				&& year[3] != '0' && year[3] != '1' && year[3] != '2') {
				cout << endl;
				cout << "Your only options are 0, 1 and 2" << endl;
				cout << "Enter agian:  ";
				year[3] = _getche();
			}
			year[4] = '\0';
		}

		DateConcatinate(IssueDateForNADRAFile, day, month, year);

		int YEAR = atoi(year);

		YEAR += 10;

		IntToChar(year, YEAR);

		DateConcatinate(expiryDateForNADRAFile, day, month, year);



	}
	void NADRAFileUpdate(char CNIC[])
	{

		ifstream fin("NADRA.txt", ios::in);

		ofstream fout("temp.txt", ios::app);



		char DataFromNADRA[3][14], c;


		int i = 0, j = 0;
		bool flag = false;

		while (fin.get(c)) {

			if (c == ',') {
				DataFromNADRA[i][j] = '\0';
				if (strcmp(CNIC, DataFromNADRA[0]) == 0) {
					flag = true;
				}
				j = 0;
				i++;
			}
			else if (c == '\n') {

				DataFromNADRA[i][j] = '\0';
				if (flag) {
					cout << endl;
					cout << "Enter Updated Issue Date" << endl << endl;
					IssueDate();

					fout << CNIC << ',' << IssueDateForNADRAFile << ',' << expiryDateForNADRAFile << '\n';
				}
				else
					fout << DataFromNADRA[0] << ',' << DataFromNADRA[1] << ',' << DataFromNADRA[2] << '\n';


				j = 0;
				i = 0;

			}
			else
				DataFromNADRA[i][j++] = c;
		}
		if (!flag) {
			std::cout << CNIC << " was not found";
		}
		fin.close();
		fout.close();

		remove("NADRA.txt");
		int e = rename("temp.txt", "NADRA.txt");
		return;

	}
	
};
class UpdateCustomer {

	char NewDatatoEnter[10][100];//updated data;
	char inputFromFile[10][100];//get info from file act like a search variable;


	//NewDatatoEnter and inputFromFile have 10 rows containing 10 type of information ....
	//4 digit id,cnic,name,adress,ph no.,customer type,meter type,connection date, regular units,peak hour units;
	char IssueDateForNADRAFile[11];
	char expiryDateForNADRAFile[11];

	char dataToUpdate[5];//to compare data from file takes 4 digit user id;
public:
	UpdateCustomer();
	//takes the input for customer id and data to update;
	void fileSearch();//search the data in file using customer id;
	void UpdateData();//it will update the file if user is found;
	void OldCustomer();//add new customer;
	void AddNewCustomer();
	//inputs
	void inputId();
	void InputCNIC();
	void InputDate();
	void input();
	void InputMeterReading();

	bool NewcustomerCheck();

	bool checkInNadraFile();
	void NADRAFile();
	void IssueDate();

	void NADRAFileUpdate();

	void UpdateCustomerMain();//calling all  the functions
};

void Customer_entry();
////constructor;
UpdateCustomer::UpdateCustomer() {
	for (int i = 0; i < 10; i++) {
		strcpy_s(NewDatatoEnter[i], "");
		strcpy_s(inputFromFile[i], "");
	}
	strcpy_s(dataToUpdate, "");
	strcpy_s(IssueDateForNADRAFile, "");
	strcpy_s(expiryDateForNADRAFile, "");
}

////use to print Customer information;
void printData(char a[10][100]) {
	cout << "Customer data" << endl << endl << endl;
	cout << "ID                    :   " << a[0] << endl;
	cout << "CNIC                  :   " << a[1] << endl;
	cout << "Name                  :   " << a[2] << endl;
	cout << "Adress                :   " << a[3] << endl;
	cout << "Phone numer           :   " << a[4] << endl;
	cout << "Customer Type         :   " << a[5] << endl;
	cout << "Meter Type            :   " << a[6] << endl;
	cout << "Connection Date       :   " << a[7] << endl;
	cout << "Regular consumed units:   " << a[8] << endl;
	cout << "Peak consumed units   :   " << a[9] << endl;

	cout << endl << endl << endl;
}

////inputs the customer id for searching purposes in file search and update funtions;
void UpdateCustomer::inputId() {
	////entering 4-digit customer ID;
	{

		cout << "Enter the 4-digit customer ID to edit data:   ";


		for (int i = 0; i < 4; i++)
		{
			dataToUpdate[i] = _getche();
			if (dataToUpdate[i] != '9' && dataToUpdate[i] != '0' && dataToUpdate[i] != '1'
				&& dataToUpdate[i] != '2' && dataToUpdate[i] != '3' && dataToUpdate[i] != '4'
				&& dataToUpdate[i] != '5' && dataToUpdate[i] != '6' && dataToUpdate[i] != '7'
				&& dataToUpdate[i] != '8')
			{
				cout << endl;
				cout << "invalid input " << dataToUpdate[i] << " is not a digit\nEnter Again: ";
				i = -1;

			}
		}
		dataToUpdate[4] = '\0';
	}
}

////taking input in different variales day mmonth and year and then concatinating them to a sigle array with /;
void DateConcatinate(char* a, char* day, char* month, char* year) {
	a[0] = day[0];
	a[1] = day[1];
	a[2] = '/';
	a[3] = month[0];
	a[4] = month[1];
	a[5] = '/';
	a[6] = year[0];
	a[7] = year[1];
	a[8] = year[2];
	a[9] = year[3];
	a[10] = year[4];
}

////funtion to input the customer cnic;
void UpdateCustomer::InputCNIC() {
	{

		cout << "Enter CNIC (Without '-') :  ";

		for (int i = 0; i < 13; i++) {

			NewDatatoEnter[1][i] = _getche();
			if (NewDatatoEnter[1][i] != '9' && NewDatatoEnter[1][i] != '0' && NewDatatoEnter[1][i] != '1'
				&& NewDatatoEnter[1][i] != '2' && NewDatatoEnter[1][i] != '3' && NewDatatoEnter[1][i] != '4'
				&& NewDatatoEnter[1][i] != '5' && NewDatatoEnter[1][i] != '6' && NewDatatoEnter[1][i] != '7'
				&& NewDatatoEnter[1][i] != '8')
			{
				cout << endl;
				cout << "invalid input " << NewDatatoEnter[1][i] << " is not a digit\nEnter Again: ";
				i = -1;
			}
		}
		NewDatatoEnter[1][13] = '\0';
	}
}

////function to input the consumed units and peak units;
void UpdateCustomer::InputMeterReading() {
	{
		int i = 0;
		char unit[10] = "";
		cout << "Enter units:  ";

		for (i; i < 9; i++)
		{
			unit[i] = _getche();
			if (unit[i] == 13 || unit[i] == '\0')
				break;

			else if
				(
					unit[i] != '.' && unit[i] != '0' && unit[i] != '1'
					&& unit[i] != '2' && unit[i] != '3' && unit[i] != '4'
					&& unit[i] != '5' && unit[i] != '6' && unit[i] != '7'
					&& unit[i] != '8' && unit[i] != '9' && unit[i] != '\0'
					&& unit[i] != 13
					)
			{

				cout << endl;
				cout << "units can only be number or floating point '.'";
				cout << "Enter again:  ";

				i = -1;
			}
		}
		unit[i] = '\0';
		strcpy_s(NewDatatoEnter[8], unit);

	}
	////entering peak Hourse unit;
	if (strcmp(NewDatatoEnter[6], "3Phase") == 0)
	{
		int i = 0;

		char peak[10] = "";
		cout << "Enter peak hours unit:  ";
		cin.getline(peak, 10);
		for (i; i < 9; i++)
		{
			peak[i] = _getche();
			if (peak[i] == 13 || peak[i] == '\0')
				break;

			else if (peak[i] != '.' && peak[i] != '0' && peak[i] != '1'
				&& peak[i] != '2' && peak[i] != '3' && peak[i] != '4'
				&& peak[i] != '5' && peak[i] != '6' && peak[i] != '7'
				&& peak[i] != '8' && peak[i] != '9' && peak[i] != '\0' && peak[i] != 13)
			{
				cout << endl;
				cout << "units can only be number or floating point '.'";
				cout << "Enter again:  ";
				i = -1;
			}
		}
		peak[i] = '\0';
		strcpy_s(NewDatatoEnter[9], peak);
	}
	else
		strcpy_s(NewDatatoEnter[9], "0");
}

////in this function user is entering his name, adress,phone number, customertype,meter type and date;
void UpdateCustomer::input() {


	cout << endl;

	////	entering name;
	{
		cin.ignore();

		cout << "Enter name(do notpalce ',') : ";
		cin.getline(NewDatatoEnter[2], 100);
		{
			for (int i = 0; NewDatatoEnter[2][i] != '\0'; i++) {
				if (NewDatatoEnter[2][i] == ',') {
					cout << "',' is paced\nEnter Again:   ";
					cin.getline(NewDatatoEnter[2], 100);
				}
			}
		}
		cout << endl;

	}
	////entering address;
	{
		cout << "Enter Address(without','):  ";
		cin.getline(NewDatatoEnter[3], 100);
		NewDatatoEnter[3][99] = '\0';
		for (int i = 0; NewDatatoEnter[3][i] != '\0'; i++) {
			if (NewDatatoEnter[3][i] == ',') {
				i = -1;
				cout << endl;
				cout << "Enter data again:  ";
				cin.getline(NewDatatoEnter[3], 100);
			}
		}
	}

	cout << endl;
	////entering phone number;
	{

		cout << "Enter phone number:  ";

		for (int i = 0; i < 11; i++) {
			NewDatatoEnter[4][i] = _getche();
			if (NewDatatoEnter[4][i] != '9' && NewDatatoEnter[4][i] != '0' && NewDatatoEnter[4][i] != '1'
				&& NewDatatoEnter[4][i] != '2' && NewDatatoEnter[4][i] != '3' && NewDatatoEnter[4][i] != '4'
				&& NewDatatoEnter[4][i] != '5' && NewDatatoEnter[4][i] != '6' && NewDatatoEnter[4][i] != '7'
				&& NewDatatoEnter[4][i] != '8')
			{
				cout << endl;
				cout << "Invalid input Enter phonr number again:  ";
				i = -1;
			}
		}
		NewDatatoEnter[4][11] = '\0';
	}

	cout << endl;
	////selecting customer type;
	{

		char selection;
		cout << "Select customer type: " << endl;
		cout << "1) Commercial " << endl;
		cout << "2) Domestic " << endl;
		cin >> selection;
		while (selection != '1' && selection != '2') {
			cout << "Select 1 or 2" << endl;
			cout << "Enter again: ";
			cin >> selection;

			cout << endl;
		}
		if (selection == '1')
			strcpy_s(NewDatatoEnter[5], "Commercial");
		else
			strcpy_s(NewDatatoEnter[5], "Domestic");
	}

	cout << endl;
	////selecting meter type;
	{

		char select;
		cout << "Select Meter Type:  " << endl;
		cout << "1) 1 Phase Meter" << endl;
		cout << "2) 3 Phase Meter" << endl;
		cin >> select;
		while (select != '1' && select != '2') {

			cout << "Select 1 or 2" << endl;
			cout << "Enter again: ";
			cin >> select;

		}

		if (select == '1')
			strcpy_s(NewDatatoEnter[6], "1Phase");
		else
			strcpy_s(NewDatatoEnter[6], "3Phase");

	}

	cout << endl;
}

////entering date;
void UpdateCustomer::InputDate() {
	char day[3], month[3], year[5];
	////entering day;
	{


		cout << "Enter day (DD):  ";
		day[0] = _getche();
		while (day[0] != '0' && day[0] != '1' && day[0] != '2' && day[0] != '3')
		{
			cout << endl;
			cout << "For first number the only options are 0, 1 and 3" << endl;
			cout << "Enter agian:  ";
			day[0] = _getche();

		}
		day[1] = _getche();

		if (day[0] == '0') {
			while (day[1] != '1' && day[1] != '2' && day[1] != '3'
				&& day[1] != '4' && day[1] != '5' && day[1] != '6'
				&& day[1] != '7' && day[1] != '8' && day[1] != '9')
			{
				cout << endl;
				cout << "For 2nd value the only options are 1 to 9 " << endl;
				cout << "Enter again:  ";
				day[1] = _getche();
			}
		}
		else if (day[0] == '3') {
			while (day[0] == 3 && day[1] != '0' && day[1] != '1') {
				cout << endl;
				cout << "For 2nd vlue the only options are 0 and 1";
				cout << "Enter again:  ";
				day[1] = _getche();
			}
		}

		while (day[1] != '0' && day[1] != '1' && day[1] != '2' && day[1] != '3'
			&& day[1] != '4' && day[1] != '5' && day[1] != '6' && day[1] != '7'
			&& day[1] != '8' && day[1] != '9')
		{
			cout << endl;
			cout << "For 2nd value the only options are 0 to 9 " << endl;
			cout << "Enter again:  ";
			day[1] = _getche();
		}

		day[2] = '\0';


	}
	cout << endl;
	////entering month;
	{
		cout << "Enter Month (MM):  ";
		month[0] = _getche();

		while (month[0] != '0' && month[0] != '1') {
			cout << endl;
			cout << "The only options are 0 and 1" << endl;
			cout << "Enter again:  ";
			month[0] = _getche();
		}
		month[1] = _getche();
		while (
			month[0] == '0'
			&& month[1] != '1' && month[1] != '2' && month[1] != '3'
			&& month[1] != '4' && month[1] != '5' && month[1] != '6'
			&& month[1] != '7' && month[1] != '8' && month[1] != '9'
			)
		{
			cout << endl;
			cout << "The option ranges from 1 to 9" << endl;
			cout << "Enter again:  ";
		}

		while (month[0] == '1' && month[1] != '0' && month[1] != '1' && month[1] != '2')
		{
			cout << endl;
			cout << "The only options are 0, 1 and 2" << endl;
			cout << "Enter again:  ";
			month[1] = _getche();
		}

		month[2] = '\0';
	}
	cout << endl;
	////entering year;
	{
		cout << "Enter year (YYYY):  ";
		////input first digit;
		year[0] = _getche();
		while (year[0] != '2') {
			cout << endl;
			cout << "For 1st vlue the only options is 2" << endl;
			cout << "Enter agian:  ";
			year[0] = _getche();
		}
		////input second digit;
		year[1] = _getche();

		while (year[0] == '2' && year[1] != '0') {
			cout << endl;
			cout << "Your only option is 0" << endl;
			cout << "Enter agian:  ";
			year[1] = _getche();
		}
		////input 3rd digit;
		year[2] = _getche();

		while (year[0] == '2' && year[1] == '0' && year[2] != '1'
			&& year[2] != '2' && year[2] != '0')
		{
			cout << endl;
			cout << "Your only options are 0, 1 and 2" << endl;
			cout << "Enter again:  ";
			year[2] = _getche();
		}

		////input 4th digit;
		year[3] = _getche();
		while (year[0] == '2' && year[1] == '0' && year[2] == '0'
			&& year[3] != '1' && year[3] != '2' && year[3] != '3'
			&& year[3] != '4' && year[3] != '5' && year[3] != '6'
			&& year[3] != '7' && year[3] != '8' && year[3] != '9')
		{
			cout << endl;
			cout << "Your only options are 1 to 9" << endl;
			cout << "Enter again:  ";
			year[3] = _getche();
		}
		while (year[0] == '2' && year[1] == '0' && year[2] == '1'
			&& year[3] != '1' && year[3] != '2' && year[3] != '3'
			&& year[3] != '4' && year[3] != '5' && year[3] != '6'
			&& year[3] != '7' && year[3] != '8' && year[3] != '9'
			&& year[3] != '0')
		{
			cout << endl;
			cout << "Your only options are 0 to 9" << endl;
			cout << "Enter again:  ";
			year[3] = _getche();
		}

		while (year[0] == '2' && year[1] == '0' && year[2] == '2'
			&& year[3] != '0' && year[3] != '1' && year[3] != '2') {
			cout << endl;
			cout << "Your only options are 0, 1 and 2" << endl;
			cout << "Enter agian:  ";
			year[3] = _getche();
		}
		year[4] = '\0';
	}

	DateConcatinate(NewDatatoEnter[7], day, month, year);
	cout << endl;
}

////to assign a custer id frist did the file search for number of enteries in file and then converted that into the customer id in string form;
void IntToChar(char b[], int a) {


	int n = 1000;
	for (int i = 0; i < 4; i++) {
		b[i] = (char)((a / n) + 48);
		a = a % n;
		n /= 10;
	}
	b[4] = '\0';

}

////checking if there are more than 3 user with same cnic;
bool UpdateCustomer::NewcustomerCheck() {
	char NIC[100];
	char c;
	bool flag = true, conditionToCheck = true;
	int i = 0;
	ifstream fin;
	int counter = 0;
	fin.open("CustomerInfo.txt");

	if (fin.is_open()) {
		while (fin.get(c)) {
			if (c == ',') {
				NIC[13] = '\0';
				if (strcmp(NIC, NewDatatoEnter[1]) == 0) {
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

////this function is used to add old customer data into the file;
void UpdateCustomer::OldCustomer() {
	string c;
	int counter = 0;

	InputCNIC();
	if (NewcustomerCheck()) {
		ifstream fin;
		fin.open("CustomerInfo.txt", ios::in);
		if (fin.is_open()) {

			while (!fin.eof()) {
				getline(fin, c);
				counter++;
			}
		}
		else
		{
			cout << endl;
			cout << "File not found" << endl;
			return;
		}
		fin.close();
		if (counter > 9999) {
			cout << endl;
			cout << "The file is full" << endl;
			return;
		}

		////user id;
		strcpy_s(NewDatatoEnter[0], "");

		IntToChar(NewDatatoEnter[0], counter);

		input();
		InputDate();
		InputMeterReading();

		{
			ofstream fout;
			fout.open("CustomerInfo.txt", ios::app);
			fout << NewDatatoEnter[0] << ',' << NewDatatoEnter[1] << ',' << NewDatatoEnter[2]
				<< ',' << NewDatatoEnter[3] << ',' << NewDatatoEnter[4] << ',' << NewDatatoEnter[5]
				<< ',' << NewDatatoEnter[6] << ',' << NewDatatoEnter[7] << ',' << NewDatatoEnter[8]
				<< ',' << NewDatatoEnter[9] << '\n';

			fout.close();
		}
		NADRAFile();
		Customer_entry();
	}
	else cout << "Customer limit on CNIC reached";
	cout << endl;
}

////this function is used to add new customer data into the file;
void UpdateCustomer::AddNewCustomer() {
	string c;
	int counter = 0;

	InputCNIC();
	if (NewcustomerCheck()) {
		ifstream fin;
		fin.open("CustomerInfo.txt", ios::in);
		if (fin.is_open()) {

			while (!fin.eof()) {
				getline(fin, c);
				counter++;
			}
		}
		else
		{
			cout << endl;
			cout << "File not found" << endl;
			return;
		}
		fin.close();
		if (counter > 9999) {
			cout << endl;
			cout << "The file is full" << endl;
			return;
		}

		////user id;
		strcpy_s(NewDatatoEnter[0], "");

		IntToChar(NewDatatoEnter[0], counter);

		input();

		strcpy_s(NewDatatoEnter[8], "0");
		strcpy_s(NewDatatoEnter[9], "0");

		time_t now = time(0);
#pragma warning(suppress : 4996)
		tm* ltm = localtime(&now);

		{
			ofstream fout;
			fout.open("CustomerInfo.txt", ios::app);
			fout << NewDatatoEnter[0] << ',' << NewDatatoEnter[1] << ',' << NewDatatoEnter[2]
				<< ',' << NewDatatoEnter[3] << ',' << NewDatatoEnter[4] << ',' << NewDatatoEnter[5]
				<< ',' << NewDatatoEnter[6] << ',' << ltm->tm_mday << '/' << 1 + ltm->tm_mon << '/' << 1900 + ltm->tm_year
				<< ',' << NewDatatoEnter[8] << ',' << NewDatatoEnter[9] << '\n';

			fout.close();
		}
		NADRAFile();
		Customer_entry();

	}
	else cout << "Customer limit on CNIC reached";
	cout << endl;
}

////this function is used to search the data in file after providing customer id;
void UpdateCustomer::fileSearch() {
	inputId();
	char c;
	bool flag = false;
	bool IDcommpare = true;
	ifstream fin;
	int i = 0, j = 0;

	fin.open("CustomerInfo.txt", ios::in);
	while (fin.get(c)) {
		{
			if (c == ',') {
				inputFromFile[j][i] = '\0';
				i = 0;
				j++;

			}
			else if (c == '\n') {
				inputFromFile[j][i] = '\0';
				if (IDcommpare == true) {
					flag = true;
					break;
				}

				i = 0;
				j = 0;
				IDcommpare = true;
			}
			else
				inputFromFile[j][i++] = c;
		}
		cout << endl;
		{
			if (IDcommpare == true) {
				if (strcmp(inputFromFile[0], dataToUpdate) == 0) {
					IDcommpare = true;
				}
				else
					IDcommpare = false;
			}
		}
	}
	fin.close();
	if (flag == true)
		printData(inputFromFile);
	else
		cout << "NO Data Found" << endl << endl << endl;

}

////used to update the data for customer info file; 
void UpdateCustomer::UpdateData() {
	////inputs;
	inputId();

	cout << endl << "Enter Updated data" << endl << endl;
	InputCNIC();
	input();

	InputMeterReading();

	strcpy_s(NewDatatoEnter[0], dataToUpdate);


	////opening files;
	ifstream fin("CustomerInfo.txt", ios::in);
	ofstream fout("temp.txt", ios::app);

	////character to take input form customerinfo.txt;
	char c;
	////integers to controll variables;
	int i = 0, j = 0;



	while (fin.get(c)) {
		if (c == ',') {
			inputFromFile[i][j] = '\0';
			if (strcmp(inputFromFile[0], dataToUpdate) == 0) {
				strcpy_s(inputFromFile[i], NewDatatoEnter[i]);
			}
			i++;
			j = 0;
		}
		else if (c == '\n') {
			inputFromFile[i][j] = '\0';
			if (strcmp(inputFromFile[0], dataToUpdate) == 0) {
				strcpy_s(inputFromFile[i], NewDatatoEnter[i]);
			}
			fout << inputFromFile[0] << ',' << inputFromFile[1] << ',' << inputFromFile[2]
				<< ',' << inputFromFile[3] << ',' << inputFromFile[4] << ',' << inputFromFile[5]
				<< ',' << inputFromFile[6] << ',' << inputFromFile[7] << ',' << inputFromFile[8]
				<< ',' << inputFromFile[9] << '\n';

			i = 0;
			j = 0;
		}
		else
			inputFromFile[i][j++] = c;
	}

	fin.close();
	fout.close();

	int f = remove("CustomerInfo.txt");

	int e = rename("temp.txt", "CustomerInfo.txt");
}

////check if CNIC already registerd in NADRA.txt;
bool UpdateCustomer::checkInNadraFile() {
	char NIC[14];
	char c;
	bool flag = true, conditionToCheck = true;
	int i = 0;
	ifstream fin;
	fin.open("NADRA.txt");

	if (fin.is_open()) {
		while (fin.get(c)) {
			if (c == ',') {
				NIC[13] = '\0';
				if (strcmp(NIC, NewDatatoEnter[1]) == 0) {
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

////saving customer's id card information in NADRA file;
void UpdateCustomer::NADRAFile() {
	ofstream fout("NADRA.txt", ios::app);
	cout << endl;
	if (checkInNadraFile()) {
		IssueDate();
		fout << NewDatatoEnter[1] << ',' << IssueDateForNADRAFile << ',' << expiryDateForNADRAFile << '\n';

		fout.close();
	}
}

////Update The data of file NADRA;
void UpdateCustomer::NADRAFileUpdate() {

	ifstream fin("NADRA.txt", ios::in);

	ofstream fout("temp.txt", ios::app);


	char CNIC[14];

	{
		//gTTING CNIC FOR SEARCH PUPOSE;
		cout << "Enter CNIC Whose data you want to change (Without '-') :  ";

		for (int i = 0; i < 13; i++) {

			CNIC[i] = _getche();
			if (CNIC[i] != '9' && CNIC[i] != '0' && CNIC[i] != '1'
				&& CNIC[i] != '2' && CNIC[i] != '3' && CNIC[i] != '4'
				&& CNIC[i] != '5' && CNIC[i] != '6' && CNIC[i] != '7'
				&& CNIC[i] != '8')
			{
				cout << endl;
				cout << "invalid input " << CNIC[i] << " is not a digit\nEnter Again: ";
				i = -1;
			}
		}
		CNIC[13] = '\0';
	}
	char DataFromNADRA[3][14], c;


	int i = 0, j = 0;
	bool flag = false;

	while (fin.get(c)) {

		if (c == ',') {
			DataFromNADRA[i][j] = '\0';
			if (strcmp(CNIC, DataFromNADRA[0]) == 0) {
				flag = true;
			}
			j = 0;
			i++;
		}
		if (c == '\n') {

			DataFromNADRA[i][j] = '\0';
			if (flag) {
				cout << endl;
				cout << "Enter Updated Issue Date" << endl << endl;
				IssueDate();

				fout << CNIC << ',' << IssueDateForNADRAFile << ',' << expiryDateForNADRAFile << '\n';
			}
			else
				fout << DataFromNADRA[0] << ',' << DataFromNADRA[1] << ',' << DataFromNADRA[2] << '\n';


			j = 0;
			i = 0;

		}

		DataFromNADRA[i][j++] = c;
	}
	if (!flag) {
		cout << CNIC << " was not found";
	}
	fin.close();
	fout.close();

	int f = remove("NADRA.txt");
	int e = rename("temp.txt", "NADRA.txt");



}

////use to input Issue date of id card and also convert it into expiry date of +10 years;
void UpdateCustomer::IssueDate() {
	////entering day

	cout << "Enter Issue date" << endl << endl;

	char day[3], month[3], * year = new char[5];

	{
		cout << "Enter day (DD):  ";
		day[0] = _getche();
		while (day[0] != '0' && day[0] != '1' && day[0] != '2' && day[0] != '3')
		{
			cout << endl;
			cout << "For first number the only options are 0, 1 and 3" << endl;
			cout << "Enter agian:  ";
			day[0] = _getche();
		}
		day[1] = _getche();

		if (day[0] == '0') {
			while (day[1] != '1' && day[1] != '2' && day[1] != '3'
				&& day[1] != '4' && day[1] != '5' && day[1] != '6'
				&& day[1] != '7' && day[1] != '8' && day[1] != '9')
			{
				cout << endl;
				cout << "For 2nd value the only options are 1 to 9 " << endl;
				cout << "Enter again:  ";
				day[1] = _getche();
			}
		}
		else if (day[0] == '3') {
			while (day[0] == 3 && day[1] != '0' && day[1] != '1') {
				cout << endl;
				cout << "For 2nd vlue the only options are 0 and 1";
				cout << "Enter again:  ";
				day[1] = _getche();
			}
		}

		while (day[1] != '0' && day[1] != '1' && day[1] != '2' && day[1] != '3'
			&& day[1] != '4' && day[1] != '5' && day[1] != '6' && day[1] != '7'
			&& day[1] != '8' && day[1] != '9')
		{
			cout << endl;
			cout << "For 2nd value the only options are 0 to 9 " << endl;
			cout << "Enter again:  ";
			day[1] = _getche();
		}

		day[2] = '\0';
	}
	cout << endl;
	////entering month;
	{
		cout << "Enter Month (MM):  ";
		month[0] = _getche();

		while (month[0] != '0' && month[0] != '1') {
			cout << endl;
			cout << "The only options are 0 and 1" << endl;
			cout << "Enter again:  ";
			month[0] = _getche();
		}
		month[1] = _getche();
		while (
			month[0] == '0'
			&& month[1] != '1' && month[1] != '2' && month[1] != '3'
			&& month[1] != '4' && month[1] != '5' && month[1] != '6'
			&& month[1] != '7' && month[1] != '8' && month[1] != '9'
			)
		{
			cout << endl;
			cout << "The option ranges from 1 to 9" << endl;
			cout << "Enter again:  ";
		}

		while (month[0] == '1' && month[1] != '0' && month[1] != '1' && month[1] != '2')
		{
			cout << endl;
			cout << "The only options are 0, 1 and 2" << endl;
			cout << "Enter again:  ";
			month[1] = _getche();
		}

		month[2] = '\0';
	}
	////entering year;
	cout << endl;
	{
		cout << "Enter year (YYYY):  ";
		////input first digit;
		year[0] = _getche();
		while (year[0] != '2') {
			cout << endl;
			cout << "For 1st vlue the only options is 2 as NADRA was established in 2000" << endl;
			cout << "Enter agian:  ";
			year[0] = _getche();
		}
		////input second digit;
		year[1] = _getche();
		while (year[0] == '2' && year[1] != '0') {
			cout << endl;
			cout << "Your only option is 0" << endl;
			cout << "Enter agian:  ";
			year[1] = _getche();
		}
		////input 3rd digit;
		year[2] = _getche();
		while (year[0] == '2' && year[1] == '0' && year[2] != '1'
			&& year[2] != '2' && year[2] != '0')
		{
			cout << endl;
			cout << "Your only options are 0, 1 and 2" << endl;
			cout << "Enter again:  ";
			year[2] = _getche();
		}

		////input 4th digit;
		year[3] = _getche();
		while (year[0] == '2' && year[1] == '0' && (year[2] == '0' || year[2] == '1')
			&& year[3] != '1' && year[3] != '2' && year[3] != '3' && year[3] != '4'
			&& year[3] != '5' && year[3] != '6' && year[3] != '7' && year[3] != '8'
			&& year[3] != '9' && year[3] != '0')
		{
			cout << "Your only optios are 0 to 9" << endl;
			cout << "Enter again:  ";

			year[3] = _getche();
		}
		while (year[0] == '2' && year[1] == '0' && year[2] == '2'
			&& year[3] != '0' && year[3] != '1' && year[3] != '2') {
			cout << endl;
			cout << "Your only options are 0, 1 and 2" << endl;
			cout << "Enter agian:  ";
			year[3] = _getche();
		}
		year[4] = '\0';
	}

	DateConcatinate(IssueDateForNADRAFile, day, month, year);

	int YEAR = atoi(year);

	YEAR += 10;

	IntToChar(year, YEAR);

	DateConcatinate(expiryDateForNADRAFile, day, month, year);



}

string current_month() {
	while (true)
	{
		// current date/time based on current system
		time_t now = time(0);
#pragma warning(suppress : 4996)
		tm* ltm = localtime(&now);
		int m = 1 + ltm->tm_mon;
		string month;
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
			cout << "Invalid month entered;\nEnter again!";
		}
	}
}
//tested
string current_date()
{
	// current date/time based on current system
	time_t now = time(0);
#pragma warning(suppress : 4996)
	tm* ltm = localtime(&now);
	int year = 1900 + ltm->tm_year;
	int month = 1 + ltm->tm_mon;
	int day = ltm->tm_mday;
	string date;
	string temp;
	string d = to_string(day);
	if (d.size() == 1)
	{
		temp = d;
		d = ("0" + temp);
	}
	string m = to_string(month);
	if (m.size() == 1)
	{
		temp = m;
		m = ("0" + temp);
	}
	date = (d + '/' + m + '/' + to_string(year));
	return date;
}
//tested
string duedate()
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
	string date;
	string temp;
	string d = to_string(day);
	if (d.size() == 1)
	{
		temp = d;
		d = ("0" + temp);
	}
	string m = to_string(month);
	if (m.size() == 1)
	{
		temp = m;
		m = ("0" + temp);
	}
	date = (d + '/' + m + '/' + to_string(year));
	return date;
}
////tested
void Customer_entry()
{
	string user_id = " ", customer_type = " ", meter_type = " ", entry_date = " ";
	string billing_month = " ", due_date = " ", temp = " ";
	float units_consumed = 0, peak_consumed = 0, meter_reading = 0, peak_h_reading = 0;
	int reg_cost = 0, peak_cost = 0, fixed_charges = 0, tax = 0;
	float total = 0, percentage = 0;


	//Getting data entries
	ifstream fin;
	fin.open("Customerinfo.txt", ios_base::in);
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
	cout << "Enter current meter reading = ";
	cin >> meter_reading;
	while (meter_reading < units_consumed)
	{
		system("cls");
		cout << "New meter reading cannot be less than last month's meter reading!\n";
		cout << "Enter again!\n";

		cout << "Enter current meter reading = ";
		cin >> meter_reading;
	}
	if (meter_type == "1Phase")
		peak_h_reading = 0;
	else
	{
		cout << "Enter peak hours reading = ";
		cin >> peak_h_reading;
		while (peak_h_reading < peak_consumed)
		{
			system("cls");
			cout << "New peak hours reading cannot be less than last month's peak hours reading!\n";
			cout << "Enter again!\n";

			cout << "Enter peak hour current reading = ";
			cin >> peak_h_reading;
		}
	}
	fin.close();
	billing_month = current_month();
	entry_date = current_date();
	due_date = duedate();
	ifstream in;
	in.open("TariffTaxInfo.txt", ios::in);
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
	ofstream out;
	out.open("BillingInfo.txt", ios::app);
	out << user_id << ",";
	out << billing_month << ",";
	out << to_string(meter_reading) << ",";
	if (meter_type == "3Phase")
	{
		out << to_string(peak_h_reading) << ",";
	}
	else
	{
		out << "" << ",";
	}
	out << entry_date << ",";
	out << to_string(reg_cost) << ",";
	if (meter_type == "3Phase")
	{
		out << to_string(peak_cost) << ",";
	}
	else
	{
		out << "" << ",";
	}
	out << to_string(tax) << ",";
	out << to_string(fixed_charges) << ",";
	out << to_string(total) << ",";
	out << due_date << ",";
	out << "unpaid" << ",";
	out << "--/--/----" << "\n";
	out.close();
}

//not tested
void new_month_update(string last_month)
{
	ifstream fin, in;
	ofstream out, fout;
	string check_id = " ";
	string user_id = " ", customer_type = " ", meter_type = " ", entry_date = " ";
	string billing_month = " ", due_date = " ", temp = "";
	float units_consumed = 0, peak_consumed = 0, meter_reading = 0, peak_h_reading = 0, total = 0, percentage = 0, balance = 0;
	int reg_cost = 0, peak_cost = 0, fixed_charges = 0, tax = 0;


	//computing number of unique customers for last month
	int unique_entries = 0;
	fin.open("BillingInfo.txt", ios::in);
	while (!fin.eof())
	{
		getline(fin, user_id, ',');
		getline(fin, billing_month, ',');
		if (billing_month == last_month)
		{
			unique_entries++;
			getline(fin, temp, '\n');
		}
		else
			getline(fin, temp, '\n');
	}
	fin.close();



	//appending entries of last month
	fin.open("BillingInfo.txt", ios::in);
	for (int i = 0; i < unique_entries;)
	{
		getline(fin, user_id, ',');
		getline(fin, billing_month, ',');
		if (billing_month == last_month)
		{
			i++;
			check_id = user_id;
			getline(fin, temp, ',');
			units_consumed = stof(temp);
			getline(fin, temp, ',');
			if (temp == "")
				peak_consumed = 0;
			else
				peak_consumed = stof(temp);
			getline(fin, temp, ',');
			entry_date = current_date();
			getline(fin, temp, ',');
			reg_cost = stoi(temp);
			getline(fin, temp, ',');
			if (temp == "")
				peak_cost = 0;
			else
				peak_cost = stoi(temp);
			getline(fin, temp, ',');
			tax = stoi(temp);
			getline(fin, temp, ',');
			fixed_charges = stoi(temp);
			getline(fin, temp, ',');
			balance = stof(temp);
			getline(fin, temp, '\n');
			total = (((meter_reading - units_consumed) * reg_cost) + ((peak_h_reading - peak_consumed) * peak_cost) + fixed_charges);
			percentage = ((total / 100) * tax);
			total = total + percentage + balance;
			in.close();
			out.open("BillingInfo.txt", ios::app);
			out << user_id << ",";
			out << current_month() << ",";
			out << to_string(meter_reading) << ",";
			if (meter_type == "3Phase")
			{
				out << to_string(peak_h_reading) << ",";
			}
			else
			{
				out << "" << ",";
			}
			out << entry_date << ",";
			out << to_string(reg_cost) << ",";
			if (meter_type == "3Phase")
			{
				out << to_string(peak_cost) << ",";
			}
			else
			{
				out << "" << ",";
			}
			out << to_string(tax) << ",";
			out << to_string(fixed_charges) << ",";
			out << to_string(total) << ",";
			out << duedate() << ",";
			out << "unpaid" << ",";
			out << "--/--/----" << "\n";
			out.close();
		}

		//updating records in CustomerInfo.txt
		if (check_id != "")
		{
			in.open("CustomerInfo.txt", ios::in);
			fout.open("Temp.txt", ios::app);
			while (!in.eof())
			{
				getline(in, temp, '\n');

				fout << temp << "\n";

			}
			in.close();
			fout.close();
			remove("CustomerInfo.txt");
			in.open("Temp.txt", ios::in);
			while (!in.eof())
			{
				out.open("CustomerInfo.txt", ios::app);
				getline(in, temp, ',');
				if (temp == check_id)
				{
					out << temp << ",";
					getline(in, temp, ',');
					out << temp << ",";
					getline(in, temp, ',');
					out << temp << ",";
					getline(in, temp, ',');
					out << temp << ",";
					getline(in, temp, ',');
					out << temp << ",";
					getline(in, temp, ',');
					out << temp << ",";
					getline(in, temp, ',');
					out << temp << ",";
					getline(in, temp, ',');
					out << temp << ",";
					out << to_string(units_consumed) << ",";
					out << to_string(peak_consumed) << "\n";
				}
				else
				{
					out << temp << ",";
					getline(in, temp, '\n');
					out << temp << "\n";
				}
			}
			out.close();
			in.close();
			remove("Temp.txt");
		}
	}
}
//not tested
void payment()
{
	string user_id, month, temp, billing_month;
	cout << "Enter customer id : ";
	cin >> user_id;
	month = current_month();
	ifstream in;
	ofstream fout;
	in.open("BillingInfo.txt", ios::in);
	while (!in.eof())
	{
		getline(in, temp, '\n');
		fout.open("Temp.txt", ios::app);
		fout << temp << "\n";
		fout.close();
	}
	in.close();
	in.open("Temp.txt", ios::in);
	while (!in.eof())
	{
		fout.open("BillingInfo.txt", ios::trunc);
		getline(in, temp, ',');
		getline(in, billing_month, ',');
		if (temp == user_id && billing_month == month)
		{
			fout << temp << ",";
			fout << billing_month;
			getline(in, temp, ',');
			fout << temp << ",";
			getline(in, temp, ',');
			fout << temp << ",";
			getline(in, temp, ',');
			fout << temp << ",";
			getline(in, temp, ',');
			fout << temp << ",";
			getline(in, temp, ',');
			fout << temp << ",";
			getline(in, temp, ',');
			fout << temp << ",";
			getline(in, temp, ',');
			fout << temp << ",";
			getline(in, temp, ',');
			fout << "0.000000" << ",";
			getline(in, temp, ',');
			fout << temp << ",";
			getline(in, temp, ',');
			fout << "paid" << ",";
			getline(in, temp, '\n');
			fout << current_date() << "\n";
		}
		else
		{
			fout << temp << ",";
			fout << billing_month << ",";
			getline(in, temp, '\n');
			fout << temp << "\n";
		}
	}
	fout.close();
	in.close();
	remove("Temp.txt");

}
//not tested
void payment_count()
{
	string temp;
	int paid_count = 0;
	int unpaid_count = 0;
	ifstream fin;
	fin.open("BillingInfo.txt", ios::in);
	while (!fin.eof())
	{
		for (int i = 0; i < 11; i++)
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
	cout << "Number of paid bills are = " << paid_count;
	cout << "\nNumber of unpaid bills are = " << unpaid_count;
}
//tested
void show_info(string id)
{
	string  temp;
	bool found = false;
	ifstream fin("BillingInfo.txt", ios::in);
	while (getline(fin, temp, ','))
	{
		if (temp == id)
		{
			found = true;
			cout << "Information for user id " << id << endl;
			getline(fin, temp, ',');
			cout << "Billing month = " << temp << endl;
			getline(fin, temp, ',');
			cout << "Current meter reading = " << temp << endl;
			getline(fin, temp, ',');
			cout << "Peak hours reading = " << temp << endl;
			getline(fin, temp, ',');
			cout << "Entry date = " << temp << endl;
			getline(fin, temp, ',');
			cout << "Normal cost per unit = " << temp << endl;
			getline(fin, temp, ',');
			cout << "Peak cost per unit = " << temp << endl;
			getline(fin, temp, ',');
			cout << "Tax deduction = " << temp << '%' << endl;
			getline(fin, temp, ',');
			cout << "Fixed charges = " << temp << endl;
			getline(fin, temp, ',');
			cout << "Total bill = " << temp << endl;
			getline(fin, temp, ',');
			cout << "Due date = " << temp << endl;
			getline(fin, temp, ',');
			cout << "billing status = " << temp << endl;
			getline(fin, temp, '\n');
			cout << "Payment date = " << temp << endl;
			break;
		}
		else
			getline(fin, temp, '\n');
	}
	if (!found)
	{
		cout << "No Match for customer id!";
	}
}

void UpdateCustomer::UpdateCustomerMain() {

	char c;
	while (true) {
		cout << "Select options: " << endl;
		cout << "3. Add old customer" << endl;
		cout << "4. Add new Customer" << endl;
		cout << "5. Update customer data" << endl;
		cout << "0 to return" << endl;
		cin >> c;

		while (c != '3' && c != '4' && c != '5' && c!='0') {
			cout << "Your only options are 3 and 4 " << endl;
			cout << "Enter again: ";
			cin >> c;
		}

		switch (c) {
		case'3':
			OldCustomer();
			break;
		case'5':
			UpdateData();
			break;
		case'4':
			AddNewCustomer();
			break;
		case'0':
			return;
			break;
		}
	}
}

char Main_menu()
{
	char choice;
	while (1)
	{
		cout << "=======================================================================" << endl;
		cout << "|                          Main Menu                                  |" << endl;
		cout << "=======================================================================" << endl;
		cout << "|   =>Press 1 to login as Customer                                    |\n";
		cout << "|                                                                     |" << endl;
		cout << "|   =>Press 2 to login as Employee                                    |\n";
		cout << "|                                                                     |" << endl;
		cout << "|   =>Press 3 to Exit the Software                                    |\n";
		for (int i = 0; i < 2; i++)
			cout << "|                                                                     |" << endl;
		cout << "=======================================================================" << endl;
		choice = _getche();
		if (choice == '1' || choice == '2' || choice == '3')
		{
			break;
		}
		else
		{
			system("CLS");
			continue;
		}
	}
	return choice;
}
void Employee()
{
	bool check;
	int z = 1;
	employee e;
		while (1)
	{
		if (z == 1)
		{
			 check = e.login();
		}
		if (check)
		{
			z = -1;
			char c;
			system("CLS");
			cout << "=======================================================================" << endl;
			cout << "|                         Employee                                     |" << endl;
			cout << "=======================================================================" << endl;
			cout << "|  Press 1 to Change Password                                          |\n";
			cout << "|                                                                     ,|" << endl;
			cout << "|  Press 2 to edit Tax Tarif file                                      |\n";
			cout << "|                                                                      |" << endl;
			cout << "|  Press 3 to edit or add new customer                                 |\n";
			cout << "|                                                                      |" << endl;
			cout << "|  Press 4 See the Expiry report of Customers Cnic                     |\n";
			cout << "|                                                                      |" << endl;
			cout << "|  Press 5 See the Bill of any Customer                                |\n";
			cout << "|                                                                      |" << endl;
			cout << "|  Press 6 See the count of unpaid bills                               |\n";
			cout << "|                                                                      |" << endl;
			cout << "|  Press 0 to return Main menu                                         |\n";
			cout << "=======================================================================" << endl;
			c = _getch();
			if (c == '1')
			{
				system("CLS");
				e.password_change();
				system("CLS");
			}
			if (c == '2')
			{
				system("CLS");
				e.tax_tarif_file_updation();
				system("CLS");

			}
			if (c == '3')
			{
				system("CLS");
				UpdateCustomer f;
				f.UpdateCustomerMain();
				system("CLS");

			}
			if (c == '4')
			{
				system("CLS");
				e.Nadra_Expiry_date_Report();
				system("CLS");

			}
			if (c == '5')
			{
				system("CLS");
				string id;
				cout << "Enter your id : ";
				cin >> id;
				show_info(id);
				cout << "\n Returning to main menu in 5 seconds";
				Sleep(5000);
				system("CLS");
			}
			if (c == '6')
			{
				system("CLS");
				payment_count();
				cout << "\n Returning to main menu in 5 seconds";
				Sleep(5000);
				system("CLS");
			}
			if (c == '0')
			{
				e.empty();
				system("CLS");
				return;
			}

		}
		else
		{
			system("CLS");
			char c;
			cout << "Wrong Credentials...\n";
			cout << "Press 1 to try again\n";
			cout << "Press 2 to go back to main menu\n";
		     c = _getch();
			 if (c == '2')
			 {
				 system("CLS");
				 return;
			 }
			 if (c == '1')
			 {
				 z = 1;
				 continue;
			 }
		}
	}
}
void Customer()
{
	int z = 1;
	bool check;
	customer c1;
	string username;
	string password;
	string id;
	while (1)
	{
		
		if (z == 1)
		{
			
			cout << "Enter the username(Unique 4-digit)\n";
			getline(cin, username);
			id = username;
			cout << "Enter the Password(Cnic)\n";
			getline(cin, password);
		     check = c1.cutomer_login(username, password);
		}
		if (check)
		{
			z = -1;
			char c;
			system("CLS");
			cout << "=======================================================================" << endl;
			cout << "|                         Cutomer                                      |" << endl;
			cout << "=======================================================================" << endl;
			cout << "|   Press 1 to view bill                                               |\n";
			cout << "|                                                                      |" << endl;
			cout << "|   Press 2 To update cnic expiry Date                                 |\n";
			cout << "|                                                                      |" << endl;
			cout << "|  Press 0 to return Main menu                                         |\n";
			cout << "=======================================================================" << endl;
			c = _getch();
			if (c == '0')
			{
				system("CLS");
				return;
			}
			if (c == '1')
			{
				system("CLS");
				show_info(id);
				cout << "\n Returning to main menu in 5 seconds";
				Sleep(5000);
				system("CLS");
			}
			if (c == '2')
			{
				char* b = new char[13];
				for (int i = 0; i < 13; i++)
				{
					b[i] = password[i];
				}
				b[13] = '\0';
				system("CLS");
				c1.NADRAFileUpdate(b);

			}

		}
		else
		{
			system("CLS");
			char c;
			cout << "Wrong Credentials...\n";
			cout << "Press 1 to try again\n";
			cout << "Press 2 to go back to main menu\n";
			c = _getch();
			if (c == '2')
			{
				system("CLS");
				return;
			}
			if (c == '1')
			{
				continue;
			}
		}
	}


}
int main()
{
	while (1)
	{
		char choice = Main_menu();
		system("CLS");
		if (choice == '2')
		{
			Employee();
		}
		if (choice == '1')
		{
			Customer();
		}
		if (choice == '3')
		{
			break;
		}
	}
	return 0;
}