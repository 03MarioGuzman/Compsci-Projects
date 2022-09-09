// 7.8 project.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Programming Project 7.20.8: •.
Define a structure Student with a first name, last name, and course grade(A, B, C, D, or F).
Write a program that reads input in which each line has the first and last name and course grade, 
separated by spaces.
Upon reading the input, your program should print all students with grade A, then all students with grade B, and so on.*/



#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	struct StudentName
	{
		std::string FirstName;
		std::string LastName;

	}FirstA,SecondA,FirstB,SecondB,FirstC,SecondC,FirstD,SecondD,FirstF,SecondF;
	struct StudentGrade
	{
		std::string Grade;
	}GradeA,GradeB,GradeC,GradeD,GradeF;
	string firstA;
	string lastA;
	string gradeA;
	string firstB;
	string lastB;
	string gradeB;
	string firstC;
	string lastC;
	string gradeC;
	string firstD;
	string lastD;
	string gradeD;
	string firstF;
	string lastF;
	string gradeF;
	string input;

	while (input != "D") {
		cout << "Enter infomation about the Students and Grade" << endl;
		cin >> firstA;
		cin >> lastA;
		cin >> gradeA;

		cout << "Enter infomation about the Students and Grade" << endl;
		cin >> firstB;
		cin >> lastB;
		cin >> gradeB;

		cout << "Enter infomation about the Students and Grade" << endl;
		cin >> firstC;
		cin >> lastC;
		cin >> gradeC;

		cout << "Enter infomation about the Students and Grade" << endl;
		cin >> firstD;
		cin >> lastD;
		cin >> gradeD;

		cout << "Enter infomation about the Students and Grade," << endl;
		cin >> firstF;
		cin >> lastF;
		cin >> gradeF;
		cout << "Press D for done." << endl;
		cin >> input;

		if (input == "D") {
			FirstA.FirstName = firstA;
			SecondA.LastName = lastA;
			FirstB.FirstName = firstB;
			SecondB.LastName = lastB;
			FirstC.FirstName = firstC;
			SecondC.LastName = lastC;
			FirstD.FirstName = firstD;
			SecondD.LastName = lastD;
			FirstF.FirstName = firstF;
			SecondF.LastName = lastF;

			GradeA.Grade = gradeA;
			GradeB.Grade = gradeB;
			GradeC.Grade = gradeC;
			GradeD.Grade = gradeD;
			GradeF.Grade = gradeF;

			if (gradeA == "A") {
				cout << "Student Name:" << " " << FirstA.FirstName << " " << SecondA.LastName << " " << "Course Grade:" << " " << GradeA.Grade << endl;
			}
			if (gradeB == "A") {
				cout << "Student Name:" << " " << FirstB.FirstName << " " << SecondB.LastName << " " << "Course Grade:" << " " << GradeB.Grade << endl;
			}

			if (gradeC == "A") {
				cout << "Student Name:" << " " << FirstC.FirstName << " " << SecondC.LastName << " " << "Course Grade:" << " " << GradeC.Grade << endl;
			}

			if (gradeD == "A") {
				cout << "Student Name:" << " " << FirstD.FirstName << " " << SecondD.LastName << " " << "Course Grade:" << " " << GradeD.Grade << endl;
			}

			if (gradeF == "A") {
				cout << "Student Name:" << " " << FirstF.FirstName << " " << SecondF.LastName << " " << "Course Grade:" << " " << GradeF.Grade << endl;
			}

			if (gradeA == "B") {
				cout << "Student Name:" << " " << FirstA.FirstName << " " << SecondA.LastName << " " << "Course Grade:" << " " << GradeA.Grade << endl;
			}
			if (gradeB == "B") {
				cout << "Student Name:" << " " << FirstB.FirstName << " " << SecondB.LastName << " " << "Course Grade:" << " " << GradeB.Grade << endl;
			}

			if (gradeC == "B") {
				cout << "Student Name:" << " " << FirstC.FirstName << " " << SecondC.LastName << " " << "Course Grade:" << " " << GradeC.Grade << endl;
			}

			if (gradeD == "B") {
				cout << "Student Name:" << " " << FirstD.FirstName << " " << SecondD.LastName << " " << "Course Grade:" << " " << GradeD.Grade << endl;
			}

			if (gradeF == "B") {
				cout << "Student Name:" << " " << FirstF.FirstName << " " << SecondF.LastName << " " << "Course Grade:" << " " << GradeF.Grade << endl;
			}

			if (gradeA == "C") {
				cout << "Student Name:" << " " << FirstA.FirstName << " " << SecondA.LastName << " " << "Course Grade:" << " " << GradeA.Grade << endl;
			}
			if (gradeB == "C") {
				cout << "Student Name:" << " " << FirstB.FirstName << " " << SecondB.LastName << " " << "Course Grade:" << " " << GradeB.Grade << endl;
			}

			if (gradeC == "C") {
				cout << "Student Name:" << " " << FirstC.FirstName << " " << SecondC.LastName << " " << "Course Grade:" << " " << GradeC.Grade << endl;
			}

			if (gradeD == "C") {
				cout << "Student Name:" << " " << FirstD.FirstName << " " << SecondD.LastName << " " << "Course Grade:" << " " << GradeD.Grade << endl;
			}

			if (gradeF == "C") {
				cout << "Student Name:" << " " << FirstF.FirstName << " " << SecondF.LastName << " " << "Course Grade:" << " " << GradeF.Grade << endl;
			}

			if (gradeA == "D") {
				cout << "Student Name:" << " " << FirstA.FirstName << " " << SecondA.LastName << " " << "Course Grade:" << " " << GradeA.Grade << endl;
			}
			if (gradeB == "D") {
				cout << "Student Name:" << " " << FirstB.FirstName << " " << SecondB.LastName << " " << "Course Grade:" << " " << GradeB.Grade << endl;
			}

			if (gradeC == "D") {
				cout << "Student Name:" << " " << FirstC.FirstName << " " << SecondC.LastName << " " << "Course Grade:" << " " << GradeC.Grade << endl;
			}

			if (gradeD == "D") {
				cout << "Student Name:" << " " << FirstD.FirstName << " " << SecondD.LastName << " " << "Course Grade:" << " " << GradeD.Grade << endl;
			}

			if (gradeF == "D") {
				cout << "Student Name:" << " " << FirstF.FirstName << " " << SecondF.LastName << " " << "Course Grade:" << " " << GradeF.Grade << endl;
			}

			if (gradeA == "F") {
				cout << "Student Name:" << " " << FirstA.FirstName << " " << SecondA.LastName << " " << "Course Grade:" << " " << GradeA.Grade << endl;
			}
			if (gradeB == "F") {
				cout << "Student Name:" << " " << FirstB.FirstName << " " << SecondB.LastName << " " << "Course Grade:" << " " << GradeB.Grade << endl;
			}

			if (gradeC == "F") {
				cout << "Student Name:" << " " << FirstC.FirstName << " " << SecondC.LastName << " " << "Course Grade:" << " " << GradeC.Grade << endl;
			}

			if (gradeD == "F") {
				cout << "Student Name:" << " " << FirstD.FirstName << " " << SecondD.LastName << " " << "Course Grade:" << " " << GradeD.Grade << endl;
			}

			if (gradeF == "F") {
				cout << "Student Name:" << " " << FirstF.FirstName << " " << SecondF.LastName << " " << "Course Grade:" << " " << GradeF.Grade << endl;
			}

		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
