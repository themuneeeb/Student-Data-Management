//#include <iostream>
//
//using namespace std;
//
//void printinformation(char** roll, float** marks, float* perc, char* grades, const int& size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Roll Numbers of Student " << i + 1 << " is " << roll[i] << endl;
//		cout << "Marks of Computer Science of Student " << i + 1 << " is " << marks[i][0] << endl;;
//		cout << "Marks of Math of Student " << i + 1 << " is " << marks[i][1] << endl;;
//		cout << "Percentage of Student " << i + 1 << " is " << perc[i] << endl;
//		cout << "Grade of Student " << i + 1 << " is " << grades[i] << endl << endl;
//	}
//}
//
//void copydata(char* roll, char* rollo, const int& size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		roll[i] = rollo[i];
//	}
//}
//
//void updateRollNo(char**& rollnodata, const int& size, const int& index)
//{
//	char roll[14] = {};
//	bool check = false;
//
//	while (true)
//	{
//		cout << "Enter New Roll No: ";
//		cin >> roll;
//
//		for (int j = 0; j < size; j++)
//		{
//			if (strcmp(rollnodata[j], roll) == 0)
//			{
//				cout << "Roll No Already Exists.\n";
//				cout << "Try Again.\n";
//				check = false;
//				break;
//			}
//			else
//			{
//				check = true;
//			}
//		}
//		if (check)
//		{
//			break;
//		}
//	}
//
//	copydata(rollnodata[index], roll, 14);
//}
//
//void updateCSMark(float**& marksdata,const int& index) 
//{
//	while (true)
//	{
//		cout << "Enter new marks of Computer Science of student " << index + 1 << " within 100: ";
//		cin >> marksdata[index][0];
//
//		if (marksdata[index][0] < 0 || marksdata[index][0] > 100)
//		{
//			cout << "Wrong Input.\n";
//			cout << "Try again.\n";
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//void updateMathMark(float**& marksdata, const int& index)
//{
//	while (true)
//	{
//		cout << "Enter new marks of Computer Science of student " << index + 1 << " within 100: ";
//		cin >> marksdata[index][1];
//
//		if (marksdata[index][1] < 0 || marksdata[index][1] > 100)
//		{
//			cout << "Wrong Input.\n";
//			cout << "Try again.\n";
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//void deleterecord(char**& rollnodata, float **& marksdata, float* percentagedata, char* grades, const int& size, const int& index)
//{
//	for (int i = index; i < size -1; i++)
//	{
//		copydata(rollnodata[i], rollnodata[i + 1], 14);
//
//		marksdata[i][0] = marksdata[i + 1][0];
//		marksdata[i][1] = marksdata[i + 1][1];
//
//		percentagedata[i] = percentagedata[i + 1];
//		grades[i] = grades[i + 1];
//	}
//}
//
//void updateCSMarks(float**& marksdata, const int& size) 
//{
//	for (int i = 0; i < size; i++)
//	{
//		while (true)
//		{
//			cout << "Enter new marks of Computer Science of student " << i + 1 << " within 100: ";
//			cin >> marksdata[i][0];
//
//			if (marksdata[i][0] < 0 || marksdata[i][0] > 100)
//			{
//				cout << "Wrong Input.\n";
//				cout << "Try again.\n";
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//}
//
//void updateMathMarks(float **& marksdata, const int& size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		while (true)
//		{
//			cout << "Enter new marks of Math of student " << i + 1 << " within 100: ";
//			cin >> marksdata[i][1];
//
//			if (marksdata[i][1] < 0 || marksdata[i][1] > 100)
//			{
//				cout << "Wrong Input.\n";
//				cout << "Try again.\n";
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//}
//
//void sortthedata(char** rollnodata, float** marksdata, float* percentagedata, char* grades, const int& size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (percentagedata[i] > percentagedata[j])
//			{
//				//cout << "I have reached.\n";
//				char temp[14] = {};
//				
//				copydata(temp, rollnodata[i], 14);
//				copydata(rollnodata[i], rollnodata[j], 14);
//				copydata(rollnodata[j], temp, 14);
//				
//				float a = marksdata[i][0];
//				marksdata[i][0] = marksdata[j][0];
//				marksdata[j][0] = a;
//
//				a = marksdata[i][1];
//				marksdata[i][1] = marksdata[j][1];
//				marksdata[j][1] = a;
//
//				a = percentagedata[i];
//				percentagedata[i] = percentagedata[j];
//				percentagedata[j] = a;
//
//				char b = {};
//				b = grades[i];
//				grades[i] = grades[j];
//				grades[j] = b;
//			}
//		}
//	}
//}
//
//void adminpanel()
//{
//	int size = 3;
//
//	char** rollnodata = nullptr;
//	float** marksdata = nullptr;
//	float* percentagedata = nullptr;
//	char* grades = nullptr;
//
//	rollnodata = new char* [size] {nullptr};
//	marksdata = new float* [size] {nullptr};
//	percentagedata = new float[size] {0.0};
//	grades = new char[size] {'\0'};
//
//	for (int i = 0; i < size; i++)
//	{
//		rollnodata[i] = new char[14]{ '\0' };
//		marksdata[i] = new float[2]{ 0 };
//	}
//
//	cout << "WELCOME TO ADMIN PANEL.\n";
//	cout << "Enter the Roll Numbers and their data to enroll students.\n";
//
//	int i = 0;
//	while (i < size)
//	{
//		char tempp[14] = {};
//		while (true)
//		{
//			cout << "Enter Roll Number of Student " << i + 1 << ": ";
//			cin >> tempp;
//
//			for (int j = 0; j < size; j++)
//			{
//				if (strcmp(rollnodata[j], tempp) == 0)
//				{
//					cout << "Roll No Already Exists.\n";
//					cout << "Try Again.\n";
//				}
//			}
//			
//			copydata(rollnodata[i], tempp, 14);
//			break;
//		}
//
//		while (true)
//		{
//			cout << "Enter marks of Computer Science of student " << i + 1 << " within 100: ";
//			cin >> marksdata[i][0];
//
//			if (marksdata[i][0] < 0 || marksdata[i][0] > 100)
//			{
//				cout << "Wrong Input.\n";
//				cout << "Try again.\n";
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		while (true)
//		{
//			cout << "Enter marks of Maths of student " << i + 1 << " within 100: ";
//			cin >> marksdata[i][1];
//
//			if (marksdata[i][1] < 0 || marksdata[i][1] > 100)
//			{
//				cout << "Wrong Input.\n";
//				cout << "Try again.\n";
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		float temp = float(marksdata[i][0] + marksdata[i][1]);
//
//		percentagedata[i] = (temp * 100) / 200;
//
//		if (percentagedata[i] < 50)
//		{
//			grades[i] = 'F';
//		}
//		else if (percentagedata[i] < 60)
//		{
//			grades[i] = 'D';
//		}
//		else if (percentagedata[i] < 75)
//		{
//			grades[i] = 'C';
//		}
//		else if (percentagedata[i] < 91)
//		{
//			grades[i] = 'B';
//		}
//		else
//		{
//			grades[i] = 'A';
//		}
//
//		i++;
//
//		char choice = {};
//		cout << "Enter Y/y to continue adding students and their data N/n to stop: ";
//		cin >> choice;
//
//		if (choice == 'N' || choice == 'n')
//		{
//			break;
//		}
//		else
//		{
//			if (i == size)
//			{
//				cout << "No more seats to enroll students.\n";
//				break;
//			}
//			choice = {};
//		}
//	}
//
//	char choice = {};
//	bool check = true;
//
//	while (true)
//	{
//		if (check)
//		{
//			cout << "Do you want to perform any of the following operations.\n\n";
//
//			cout << "Press 1 to update Roll Number of a particular Student.\n";
//			cout << "Press 2 to update marks of a particular student for CS.\n";
//			cout << "Press 3 to update marks of CS for all students who are already enrolled.\n";
//			cout << "Press 4 to update marks of a particular student for Mathematics.\n";
//			cout << "Press 5 to update marks of Mathematics for all students who are already enrolled.\n";
//			cout << "Press 6 to sort the data on the basis of generated percentages.\n";
//			cout << "Press 7 to delete the record of a particular student.\n";
//
//			cout << "\nPress Y / y for Yes.\n";
//			cout << "Press N / n for No\n";
//
//			cin >> choice;
//		}
//		
//		if (!check)
//		{
//			choice = 'y';
//		}
//
//		if (choice == 'n' || choice == 'N')
//		{
//			break;
//		}
//		else
//		{
//			char input = '\0';
//			
//			cout << "\nEnter Your Choice: ";
//			cin >> input;
//
//			if (input == '1' || input == '2' || input == '4' || input == '7')
//			{
//				char roll[14] = {};
//
//				cout << "Enter Roll No: ";
//				cin >> roll;
//				
//				bool rollnocheck = false;
//				int index = 0;
//
//				for (int i = 0; i < size; i++)
//				{
//					if (strcmp(rollnodata[i],roll) == 0)
//					{
//						index = i;
//						rollnocheck = true;
//						break;
//					}
//				}
//
//				if (!rollnocheck)
//				{
//					cout << "No Student Found with provided Roll No.\n";
//					check = true;
//					continue;
//				}
//
//				if (input == '1')
//				{
//					updateRollNo(rollnodata, i, index);
//				}
//				else if (input == '2')
//				{
//					updateCSMark(marksdata, index);
//				}
//				else if (input == '4')
//				{
//					updateMathMark(marksdata, index);
//				}
//				else
//				{
//					deleterecord(rollnodata, marksdata, percentagedata, grades, i, index);
//					--i;
//				}
//			}
//			else if (input == '3' || input == '5' || input == '6')
//			{
//				if (input == '3')
//				{
//					updateCSMarks(marksdata, i);
//				}
//				else if (input == '5')
//				{
//					updateMathMarks(marksdata, i);
//				}
//				else
//				{
//					sortthedata(rollnodata, marksdata, percentagedata, grades, i);
//				}
//			}
//			else
//			{
//				cout << "Wrong Input.\n";
//				cout << "Try Again.\n";
//				check = false;
//			}
//		}
//	}
//	printinformation(rollnodata, marksdata, percentagedata, grades, i);
//
//	if (rollnodata != nullptr)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			delete[] rollnodata[j];
//			rollnodata[j] = nullptr;
//		}
//		delete[] rollnodata;
//		rollnodata = nullptr;
//	}
//	if (marksdata != nullptr)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			delete[] marksdata[j];
//			marksdata[j] = nullptr;
//		}
//		delete[] marksdata;
//		marksdata = nullptr;
//	}
//	if (percentagedata != nullptr)
//	{
//		delete[] percentagedata;
//		percentagedata = nullptr;
//	}
//	if (grades != nullptr)
//	{
//		delete[] grades;
//		grades = nullptr;
//	}
//}
//
//int main(void)
//{
//	adminpanel();
//	return 0;
//}