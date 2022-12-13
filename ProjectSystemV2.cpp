#include <iostream>
#include <fstream>
#include <string>


using namespace std;

const int studentLimit = 50;

string studentName[studentLimit];

//1st Quarter
string Math[studentLimit];
string Science[studentLimit];
string English[studentLimit];
string Filipino[studentLimit];
string PE[studentLimit];
string Arts[studentLimit];

//2nd Quarter
string Math2[studentLimit];
string Science2[studentLimit];
string English2[studentLimit];
string Filipino2[studentLimit];
string PE2[studentLimit];
string Arts2[studentLimit];

//Final Grade
double FinalMath[studentLimit];
double FinalScience[studentLimit];
double FinalEnglish[studentLimit];
double FinalFilipino[studentLimit];
double FinalPE[studentLimit];
double FinalArts[studentLimit];
double GeneralAverage[studentLimit];




class SystemFunction {
public:

	//Arianne = Add, Find Name(search) and class record

	void openFile() {

		string str[100];
		int i = 0;
		int j = 0;
		bool checker = false;

		fstream myFile("myFileV2.txt", ios::in);

		if (myFile.is_open()) {

			while (myFile) {

				getline(myFile, str[i]);
				if (str[i] != "Grades") {
					studentName[i] = str[i];
					i++;
				}
				else if (str[i] == "Grades") {
					i++;
					getline(myFile, str[i]);
					Math[j] = str[i];
					i++;
					getline(myFile, str[i]);
					Science[j] = str[i];
					i++;
					getline(myFile, str[i]);
					English[j] = str[i];
					i++;
					getline(myFile, str[i]);
					Filipino[j] = str[i];
					i++;
					getline(myFile, str[i]);
					PE[j] = str[i];
					i++;
					getline(myFile, str[i]);
					Arts[j] = str[i];
					i++;
					getline(myFile, str[i]);
					Math2[j] = str[i];
					i++;
					getline(myFile, str[i]);
					Science2[j] = str[i];
					i++;
					getline(myFile, str[i]);
					English2[j] = str[i];
					i++;
					getline(myFile, str[i]);
					Filipino2[j] = str[i];
					i++;
					getline(myFile, str[i]);
					PE2[j] = str[i];
					i++;
					getline(myFile, str[i]);
					Arts2[j] = str[i];
					i++;
					j++;
				}

			}
		}

		myFile.close();

	}
	void saveFile() {

		int j = 0;
		fstream myFile("myFileV2.txt", ios::out);

		if (myFile.is_open()) {
			while (studentName[j] != "\0") {
				myFile << studentName[j] << endl;
				j++;
			}
			for (int i = 0; i < j; i++) {
				myFile << "Grades" << endl;
				myFile << Math[i] << endl;
				myFile << Science[i] << endl;
				myFile << English[i] << endl;
				myFile << Filipino[i] << endl;
				myFile << PE[i] << endl;
				myFile << Arts[i] << endl;
				myFile << Math2[i] << endl;
				myFile << Science2[i] << endl;
				myFile << English2[i] << endl;
				myFile << Filipino2[i] << endl;
				myFile << PE2[i] << endl;
				myFile << Arts2[i] << endl;
			}

		}

		myFile.close();
	}
	void Add() {

		string name;
		string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12;

		cout << "\n";
		cin.ignore();
		cout << "Enter Student Name >>  ";
		getline(cin, name);
		cout << "\n     ================" << endl;
		cout << "     || = GRADES = ||" << endl;
		cout << "     ================" << endl;
		cout << "\n--- | 1st Quarter | --- " << endl;
		cout << "Math >> ";
		cin >> s1;
		cout << "Science >> ";
		cin >> s2;
		cout << "English >> ";
		cin >> s3;
		cout << "Filipino >> ";
		cin >> s4;
		cout << "PE >> ";
		cin >> s5;
		cout << "Arts >> ";
		cin >> s6;
		cout << "\n--- | 2nd Quarter | --- " << endl;
		cout << "Math >> ";
		cin >> s7;
		cout << "Science >> ";
		cin >> s8;
		cout << "English >> ";
		cin >> s9;
		cout << "Filipino >> ";
		cin >> s10;
		cout << "PE >> ";
		cin >> s11;
		cout << "Arts >> ";
		cin >> s12;

		for (int i = 0; i < studentLimit; i++) {

			if (studentName[i] == "\0") {
				studentName[i] = name;
				Math[i] = s1;
				Science[i] = s2;
				English[i] = s3;
				Filipino[i] = s4;
				PE[i] = s5;
				Arts[i] = s6;
				Math2[i] = s7;
				Science2[i] = s8;
				English2[i] = s9;
				Filipino2[i] = s10;
				PE2[i] = s11;
				Arts2[i] = s12;

				FinalMath[i] = (stod(Math[i]) + stod(Math2[i])) / 2;
				FinalScience[i] = (stod(Science[i]) + stod(Science2[i])) / 2;
				FinalEnglish[i] = (stod(English[i]) + stod(English2[i])) / 2;
				FinalFilipino[i] = (stod(Filipino[i]) + stod(Filipino2[i])) / 2;
				FinalPE[i] = (stod(PE[i]) + stod(PE2[i])) / 2;
				FinalArts[i] = (stod(Arts[i]) + stod(Arts2[i])) / 2;

				GeneralAverage[i] = (FinalMath[i] + FinalScience[i] + FinalEnglish[i] + FinalFilipino[i] + FinalPE[i] + FinalArts[i]) / 6;

				break;
			}
		}

		system("cls");

	}
	void classRecord() {

		string extra;
		int counter = 0;

		system("cls");

		cout << "=============================================================================================================================" << endl;
		cout << "                                                       Class Record/s" << endl;
		cout << "=============================================================================================================================" << endl;
		cout << endl;

		for (int i = 0; i < studentLimit; i++) {
			if (studentName[i] != "\0") {

				counter++;


				cout << "                                                " << counter << ". " << studentName[i] << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "| 1st Quarter |     Math | " << Math[i] << " |    " << "Science | " << Science[i] << " |    " << "English | " << English[i] << " |    "
					<< "Filipino | " << Filipino[i] << " |    " << "PE | " << PE[i] << " |    " << "Arts | " << Arts[i] << " |" << endl;
				cout << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "| 2nd Quarter |     Math | " << Math2[i] << " |    " << "Science | " << Science2[i] << " |    " << "English | " << English2[i] << " |     "
					<< "Filipino | " << Filipino2[i] << " |    " << "PE | " << PE2[i] << " |    " << "Arts | " << Arts2[i] << " |" << endl;
				cout << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "| Final Grade |      Math | " << FinalMath[i] << " |    " << "Science | " << FinalScience[i] << " |    " << "English | " << FinalEnglish[i] << " |     "
					<< "Filipino | " << FinalFilipino[i] << " |    " << "PE | " << FinalPE[i] << " |    " << "Arts | " << FinalArts[i] << " |" << endl;
				cout << "\n                                                General Average | " << GeneralAverage[i] << " |" << endl;
				cout << "\n=============================================================================================================================" << endl;
				cout << endl;




			}

		}

		if (counter == 0) {
			cout << "                                                     The record is Empty" << endl;
		}
		cout << "=============================================================================================================================" << endl;

		cout << "\n\n";


	}
	void findName(string str) {

		bool checker = false;
		string extra;

		system("cls");

		cout << "=============================================================================================================================" << endl;
		cout << "                                                       Class Record/s" << endl;
		cout << "=============================================================================================================================" << endl;
		cout << endl;

		for (int i = 0; i < studentLimit; i++) {

			if (str == studentName[i]) {

				checker = true;

				cout << "                                                " << studentName[i] << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "| 1st Semester |     Math | " << Math[i] << " |    " << "Science | " << Science[i] << " |    " << "English | " << English[i] << " |    "
					<< "Filipino | " << Filipino[i] << " |    " << "PE | " << PE[i] << " |    " << "Arts | " << Arts[i] << " |" << endl;
				cout << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "| 2nd Semester |     Math | " << Math2[i] << " |    " << "Science | " << Science2[i] << " |    " << "English | " << English2[i] << " |     "
					<< "Filipino | " << Filipino2[i] << " |    " << "PE | " << PE2[i] << " |    " << "Arts | " << Arts2[i] << " |" << endl;
				cout << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "| Final Grade |      Math | " << FinalMath[i] << " |    " << "Science | " << FinalScience[i] << " |    " << "English | " << FinalEnglish[i] << " |     "
					<< "Filipino | " << FinalFilipino[i] << " |    " << "PE | " << FinalPE[i] << " |    " << "Arts | " << FinalArts[i] << " |" << endl;
				cout << "\n                                                General Average | " << GeneralAverage[i] << " |" << endl;
				cout << "\n=============================================================================================================================" << endl;
				cout << endl;


			}
		}

		if (checker == false) {

			cout << "\t\t\t\t    No Student Name found!\n" << endl;
			cout << "======================================================================================================" << endl;
			cout << "Enter Anything to continue >> ";
			cin >> extra;
			cin.ignore();
			system("cls");
		}
	}
	void editName(string str) {

		int location, a = 0, b = 0;
		bool checker = false;
		string extra, newGrade;

		for (int i = 0; i < studentLimit; i++) {
			if (str == studentName[i]) {
				location = i;
				checker = true;
				break;
			}
		}

		if (checker == true) {


			system("cls");
			cout << "=============================================================================================================================" << endl;
			cout << "                                                       Class Record/s" << endl;
			cout << "=============================================================================================================================" << endl;
			cout << endl;
			cout << "                                                " << studentName[location] << endl;
			cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "| 1st Semester |     Math | " << Math[location] << " |    " << "Science | " << Science[location] << " |    " << "English | " << English[location] << " |    "
				<< "Filipino | " << Filipino[location] << " |    " << "PE | " << PE[location] << " |    " << "Arts | " << Arts[location] << " |" << endl;
			cout << endl;
			cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "| 2nd Semester |     Math | " << Math2[location] << " |    " << "Science | " << Science2[location] << " |    " << "English | " << English2[location] << " |     "
				<< "Filipino | " << Filipino2[location] << " |    " << "PE | " << PE2[location] << " |    " << "Arts | " << Arts2[location] << " |" << endl;
			cout << endl;
			cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "| Final Grade |      Math | " << FinalMath[location] << " |    " << "Science | " << FinalScience[location] << " |    " << "English | " << FinalEnglish[location] << " |     "
				<< "Filipino | " << FinalFilipino[location] << " |    " << "PE | " << FinalPE[location] << " |    " << "Arts | " << FinalArts[location] << " |" << endl;
			cout << "\n                                                General Average | " << GeneralAverage[location] << " |" << endl;
			cout << "\n=============================================================================================================================" << endl;
			cout << endl;

			cout << "Change >> 1 - Name \t 2 - Grades" << endl;
			cout << "ANSWER >> ";
			cin >> a;

			if (a == 1) {
				cout << "\nEnter New Name!" << endl;
				cout << "ANSWER >> ";
				cin.ignore();
				getline(cin, studentName[location]);
				cout << "\nChange Name Successfuly!" << endl;
				cout << "Enter Anything to Continue! " << endl;
				cout << "ANSWER >> ";
				cin >> extra;
				cin.ignore();
				system("cls");
			}
			else if (a == 2) {
				if (Math2[location] != "\0") {
					cout << "\n-- | 1st Semester | --\n1 - Math   2 - Science   3 - English   4 - Filipino   5 -  PE   6 - Arts\n";
					cout << "\n-- | 2nd Semester | --\n7 - Math   8 - Science   9 - English   10 - Filipino   11 - PE   12 - Arts\n";
					cout << "ANSWER >> ";
					cin >> b;

					switch (b) {
					case 1:
						cout << "\nEnter New grade >> ";
						cin >> newGrade;
						Math[location] = newGrade;
						break;
					case 2:
						cout << "\nEnter New grade >> ";
						cin >> newGrade;
						Science[location] = newGrade;
						break;
					case 3:
						cout << "\nEnter New grade >> ";
						cin >> newGrade;
						English[location] = newGrade;
						break;
					case 4:
						cout << "\nEnter New grade >> ";
						cin >> newGrade;
						Filipino[location] = newGrade;
						break;
					case 5:
						cout << "\nEnter New grade >> ";
						cin >> newGrade;
						PE[location] = newGrade;
						break;
					case 6:
						cout << "\nEnter New grade >> ";
						cin >> newGrade;
						Arts[location] = newGrade;
						break;
					case 7:
						cout << "\nEnter New grade >> ";
						cin >> newGrade;
						Math2[location] = newGrade;
						break;
					case 8:
						cout << "\nEnter New grade >> ";
						cin >> newGrade;
						Science2[location] = newGrade;
						break;
					case 9:
						cout << "\nEnter New grade >> ";
						cin >> newGrade;
						English2[location] = newGrade;
						break;
					case 10:
						cout << "\nEnter New grade >> ";
						cin >> newGrade;
						Filipino2[location] = newGrade;
						break;
					case 11:
						cout << "\nEnter New grade >> ";
						cin >> newGrade;
						PE2[location] = newGrade;
						break;
					case 12:
						cout << "\nEnter New grade >> ";
						cin >> newGrade;
						Arts[location] = newGrade;
						break;
					default:
						cout << "\nError 404 hahah" << endl;
						cout << "Enter anything to Menu" << endl;
						cout << "ANSWER >> ";
						cin >> extra;
						cin.ignore();
					}
				}
		

				system("cls");
			}

			checker = false;

		}
		else {
			cout << "Name not Found!" << endl;
			cout << "Enter anything to continue >> ";
			cin >> extra;
			system("cls");
		}
	}
	void deleteRecord(string str) {

		int location;
		bool checker = false, checker2 = false;
		string extra;
		char deleteName;

		for (int i = 0; i < studentLimit; i++) {
			if (str == studentName[i]) {
				location = i;
				checker = true;
				break;
			}
		}

		if (checker == true) {

			system("cls");
			cout << "=============================================================================================================================" << endl;
			cout << "                                                       Class Record/s" << endl;
			cout << "=============================================================================================================================" << endl;
			cout << endl;
			cout << "                                                " << studentName[location] << endl;
			cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "| 1st Semester |     Math | " << Math[location] << " |    " << "Science | " << Science[location] << " |    " << "English | " << English[location] << " |    "
				<< "Filipino | " << Filipino[location] << " |    " << "PE | " << PE[location] << " |    " << "Arts | " << Arts[location] << " |" << endl;
			cout << endl;
			cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "| 2nd Semester |     Math | " << Math2[location] << " |    " << "Science | " << Science2[location] << " |    " << "English | " << English2[location] << " |     "
				<< "Filipino | " << Filipino2[location] << " |    " << "PE | " << PE2[location] << " |    " << "Arts | " << Arts2[location] << " |" << endl;

			cout << endl;
			cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "| Final Grade |      Math | " << FinalMath[location] << " |    " << "Science | " << FinalScience[location] << " |    " << "English | " << FinalEnglish[location] << " |     "
				<< "Filipino | " << FinalFilipino[location] << " |    " << "PE | " << FinalPE[location] << " |    " << "Arts | " << FinalArts[location] << " |" << endl;
			cout << "\n                                                General Average | " << GeneralAverage[location] << " |" << endl;
			cout << "\n=============================================================================================================================" << endl;
			cout << endl;

			cout << "Delete Record? Y/N" << endl;
			cout << "ANSWER >> ";
			cin >> deleteName;

			if (deleteName == 'Y' || deleteName == 'y') {
				studentName[location] = "";
				Math[location] = "";
				Science[location] = "";
				English[location] = "";
				Filipino[location] = "";
				PE[location] = "";
				Arts[location] = "";
				Math2[location] = "";
				Science2[location] = "";
				English2[location] = "";
				Filipino2[location] = "";
				PE2[location] = "";
				Arts2[location] = "";
				checker2 = true;
			}

			if (checker2 == true) {
				for (int j = 1; j < studentLimit; j++) {
					if (studentName[location + j] != "\0") {
						continue;
					}
					else {
						studentName[location] = studentName[location + j - 1];
						Math[location] = Math[location + j - 1];
						Science[location] = Science[location + j - 1];
						English[location] = English[location + j - 1];
						Filipino[location] = Filipino[location + j - 1];
						PE[location] = PE[location + j - 1];
						Arts[location] = Arts[location + j - 1];
						Math2[location] = Math2[location + j - 1];
						Science2[location] = Science2[location + j - 1];
						English2[location] = English2[location + j - 1];
						Filipino2[location] = Filipino2[location + j - 1];
						PE2[location] = PE2[location + j - 1];
						Arts2[location] = Arts2[location + j - 1];

						studentName[location + j - 1] = "";
						Math[location + j - 1] = "";
						Science[location + j - 1] = "";
						English[location + j - 1] = "";
						Filipino[location + j - 1] = "";
						PE[location + j - 1] = "";
						Arts[location + j - 1] = "";
						Math2[location + j - 1] = "";
						Science2[location + j - 1] = "";
						English2[location + j - 1] = "";
						Filipino2[location + j - 1] = "";
						PE2[location + j - 1] = "";
						Arts2[location + j - 1] = "";

						break;
					}
				}
			}

			checker2 = false;
			checker = false;

		}
		else {
			cout << "\nName not Found!" << endl;
			cout << "Enter Anything to Continue >> ";
			cin >> extra;

		}
		system("cls");
	}
	void computeRecord() {


		for (int i = 0; i < studentLimit; i++) {
			if (studentName[i] != "\0") {

				FinalMath[i] = (stod(Math[i]) + stod(Math2[i])) / 2;
				FinalScience[i] = (stod(Science[i]) + stod(Science2[i])) / 2;
				FinalEnglish[i] = (stod(English[i]) + stod(English2[i])) / 2;
				FinalFilipino[i] = (stod(Filipino[i]) + stod(Filipino2[i])) / 2;
				FinalPE[i] = (stod(PE[i]) + stod(PE2[i])) / 2;
				FinalArts[i] = (stod(Arts[i]) + stod(Arts2[i])) / 2;

				GeneralAverage[i] = (FinalMath[i] + FinalScience[i] + FinalEnglish[i] + FinalFilipino[i] + FinalPE[i] + FinalArts[i]) / 6;
			}
		}
	}


};


int main()
{
	SystemFunction Record;

	int menuInput = 0;
	string searchName, extra;
	string fName;

	cout << "This Project is made by Daryl Bacurin and Arianne\n";
	cout << ">> ";
	cin >> extra;

	system("cls");

	Record.openFile();


	do {

		Record.computeRecord();

		cout << "0 - EXIT" << endl;
		cout << "1 - ADD" << endl;
		cout << "2 - EDIT" << endl;
		cout << "3 - DELETE" << endl;
		cout << "4 - SEARCH" << endl;
		cout << "5 - Display Class Record" << endl;
		cout << "------------------------" << endl;

		cout << "ANSWER >> ";
		cin >> menuInput;

		switch (menuInput) {
		case 1:
			Record.Add();
			break;
		case 2:
			cout << "\nEnter the Student Name >> ";
			cin.ignore();
			getline(cin, fName);
			Record.editName(fName);
			break;
		case 3:
			cout << "\nEnter the Student Name >> ";
			cin.ignore();
			getline(cin, fName);
			Record.deleteRecord(fName);
			break;
		case 4:
			cout << "\nSEARCH NAME >> ";
			cin.ignore();
			getline(cin, searchName);
			Record.findName(searchName);

			break;
		case 5:
			Record.classRecord();
			break;
		case 0:
			system("cls");
			cout << "---- da ----" << endl;
			break;
		default:
			cout << "\n>> Error 404" << endl;
			cout << "Enter anything to Menu >> ";
			cin >> extra;
			system("cls");
		}

	} while (menuInput != 0);


	Record.saveFile();

	system("pause>0");
}