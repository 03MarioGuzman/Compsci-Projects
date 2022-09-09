// 7.9 project.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Programming Project 7.20.9: ••.
Enhance the program in Programming Project 7.20.8 so that each student has ten quiz scores. 
The input contains the student names and quiz scores but no course grades. 
The program should compute the course grade. If the sum of the quiz scores is at least 90, the grade is an A. 
If the sum is at least 80, the grade is a B, and so on. 
Then print all students with grade A together with their individual quiz scores, followed by all students with grade B, and so on.*/

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

	}FirstA, SecondA, FirstB, SecondB, FirstC, SecondC, FirstD, SecondD, FirstF, SecondF;


	string firstA;
	string lastA;
	string firstB;
	string lastB;
	string firstC;
	string lastC;
	string firstD;
	string lastD;
	string firstF;
	string lastF;
	string input;

	/*FirstA.FirstName = firstA;
	SecondA.LastName = lastA;
	FirstB.FirstName = firstB;
	SecondB.LastName = lastB;
	FirstC.FirstName = firstC;
	SecondC.LastName = lastC;
	FirstD.FirstName = firstD;
	SecondD.LastName = lastD;
	FirstF.FirstName = firstF;*/

	int totalGrade1 = 0;
	int totalGrade2 = 0;
	int totalGrade3 = 0;
	int totalGrade4 = 0;
	int totalGrade5 = 0;

	//First Enter
	int quiz1A;
	int quiz2A;
	int quiz3A;
	int quiz4A;
	int quiz5A;
	int quiz6A;
	int quiz7A;
	int quiz8A;
	int quiz9A;
	int quiz10A;

	//Second Enter
	int quiz1B;
	int quiz2B;
	int quiz3B;
	int quiz4B;
	int quiz5B;
	int quiz6B;
	int quiz7B;
	int quiz8B;
	int quiz9B;
	int quiz10B;

	//Third Enter
	int quiz1C;
	int quiz2C;
	int quiz3C;
	int quiz4C;
	int quiz5C;
	int quiz6C;
	int quiz7C;
	int quiz8C;
	int quiz9C;
	int quiz10C;

	//Fouth Enter
	int quiz1D;
	int quiz2D;
	int quiz3D;
	int quiz4D;
	int quiz5D;
	int quiz6D;
	int quiz7D;
	int quiz8D;
	int quiz9D;
	int quiz10D;

	//Fith Enter
	int quiz1F;
	int quiz2F;
	int quiz3F;
	int quiz4F;
	int quiz5F;
	int quiz6F;
	int quiz7F;
	int quiz8F;
	int quiz9F;
	int quiz10F;


	while (input != "D") {
		cout << "Enter infomation about the Students and Quizs Grade." << endl;
		cin >> firstA;
		cin >> lastA;
		cin >> quiz1A;
		cin >> quiz2A;
		cin >> quiz3A;
		cin >> quiz4A;
		cin >> quiz5A;
		cin >> quiz6A;
		cin >> quiz7A;
		cin >> quiz8A;
		cin >> quiz9A;
		cin >> quiz10A;

		totalGrade1 = quiz1A + quiz2A + quiz3A + quiz4A + quiz5A + quiz6A + quiz7A + quiz8A + quiz9A + quiz10A;

		cout << "Enter infomation about the Students and Quizs." << endl;
		cin >> firstB;
		cin >> lastB;
		cin >> quiz1B;
		cin >> quiz2B;
		cin >> quiz3B;
		cin >> quiz4B;
		cin >> quiz5B;
		cin >> quiz6B;
		cin >> quiz7B;
		cin >> quiz8B;
		cin >> quiz9B;
		cin >> quiz10B;
		totalGrade2 = quiz1B + quiz2B + quiz3B + quiz4B + quiz5B + quiz6B + quiz7B + quiz8B + quiz9B + quiz10B;

		cout << "Enter infomation about the Students and Quizs." << endl;
		cin >> firstC;
		cin >> lastC;
		cin >> quiz1C;
		cin >> quiz2C;
		cin >> quiz3C;
		cin >> quiz4C;
		cin >> quiz5C;
		cin >> quiz6C;
		cin >> quiz7C;
		cin >> quiz8C;
		cin >> quiz9C;
		cin >> quiz10C;
		totalGrade3 = quiz1C + quiz2C + quiz3C + quiz4C + quiz5C + quiz6C + quiz7C + quiz8C + quiz9C + quiz10C;
		cout << "Enter infomation about the Students and Quizs." << endl;
		cin >> firstD;
		cin >> lastD;
		cin >> quiz1D;
		cin >> quiz2D;
		cin >> quiz3D;
		cin >> quiz4D;
		cin >> quiz5D;
		cin >> quiz6D;
		cin >> quiz7D;
		cin >> quiz8D;
		cin >> quiz9D;
		cin >> quiz10D;
		totalGrade4 = quiz1D + quiz2D + quiz3D + quiz4D + quiz5D + quiz6D + quiz7D + quiz8D + quiz9D + quiz10D;
		cout << "Enter infomation about the Students and Quizs, press D for done." << endl;
		cin >> firstF;
		cin >> lastF;
		cin >> quiz1F;
		cin >> quiz2F;
		cin >> quiz3F;
		cin >> quiz4F;
		cin >> quiz5F;
		cin >> quiz6F;
		cin >> quiz7F;
		cin >> quiz8F;
		cin >> quiz9F;
		cin >> quiz10F;
		cin >> input;
		totalGrade5 = quiz1F + quiz2F + quiz3F + quiz4F + quiz5F + quiz6F + quiz7F + quiz8F + quiz9F + quiz10F;

		if (input == "D"){
			FirstA.FirstName = firstA;
			SecondA.LastName = lastA;
			FirstB.FirstName = firstB;
			SecondB.LastName = lastB;
			FirstC.FirstName = firstC;
			SecondC.LastName = lastC;
			FirstD.FirstName = firstD;
			SecondD.LastName = lastD;
			FirstF.FirstName = firstF;
			if (totalGrade1 >= 90) {
				cout << "Student Name:" << " " << FirstA.FirstName << " " << SecondA.LastName << " " << "A" << endl;
				cout << quiz1A << endl;
				cout << quiz2A << endl;
				cout << quiz3A << endl;
				cout << quiz4A << endl;
				cout << quiz5A << endl;
				cout << quiz6A << endl;
				cout << quiz7A << endl;
				cout << quiz8A << endl;
				cout << quiz9A << endl;
				cout << quiz10A << endl;
				cout << "The Total Score of the quiz is " << totalGrade1 << endl;
			}
			if (totalGrade2 >= 90) {
				cout << "Student Name:" << " " << FirstB.FirstName << " " << SecondB.LastName << " " << "A" << endl;
				cout << quiz1B << endl;
				cout << quiz2B << endl;
				cout << quiz3B << endl;
				cout << quiz4B << endl;
				cout << quiz5B << endl;
				cout << quiz6B << endl;
				cout << quiz7B << endl;
				cout << quiz8B << endl;
				cout << quiz9B << endl;
				cout << quiz10B << endl;
				cout << "The Total Score of the quiz is " << totalGrade2 << endl;
			}
			if (totalGrade3 >= 90) {
				cout << "Student Name:" << " " << FirstC.FirstName << " " << SecondC.LastName << " " << "A" << endl;
				cout << quiz1C << endl;
				cout << quiz2C << endl;
				cout << quiz3C << endl;
				cout << quiz4C << endl;
				cout << quiz5C << endl;
				cout << quiz6C << endl;
				cout << quiz7C << endl;
				cout << quiz8C << endl;
				cout << quiz9C << endl;
				cout << quiz10C << endl;

				cout << "The Total Score of the quiz is " << totalGrade3 << endl;
			}
			if (totalGrade4 >= 90) {
				cout << "Student Name:" << " " << FirstD.FirstName << " " << SecondD.LastName << " " << "A" << endl;
				cout << quiz1D << endl;
				cout << quiz2D << endl;
				cout << quiz3D << endl;
				cout << quiz4D << endl;
				cout << quiz5D << endl;
				cout << quiz6D << endl;
				cout << quiz7D << endl;
				cout << quiz8D << endl;
				cout << quiz9D << endl;
				cout << quiz10D << endl;
				cout << "The Total Score of the quiz is " << totalGrade4 << endl;
			}
				if (totalGrade5 >= 90) {
					cout << "Student Name:" << " " << FirstF.FirstName << " " << SecondF.LastName << " " << "A" << endl;
					cout << quiz1F << endl;
					cout << quiz2F << endl;
					cout << quiz3F << endl;
					cout << quiz4F << endl;
					cout << quiz5F << endl;
					cout << quiz6F << endl;
					cout << quiz7F << endl;
					cout << quiz8F << endl;
					cout << quiz9F << endl;
					cout << quiz10F << endl;
					cout << "The Total Score of the quiz is " << totalGrade5 << endl;
				}


				if (totalGrade1 <= 89 && totalGrade1 >= 80) {
					cout << "Student Name:" << " " << FirstA.FirstName << " " << SecondA.LastName << " " << "B" << endl;
					cout << quiz1A << endl;
					cout << quiz2A << endl;
					cout << quiz3A << endl;
					cout << quiz4A << endl;
					cout << quiz5A << endl;
					cout << quiz6A << endl;
					cout << quiz7A << endl;
					cout << quiz8A << endl;
					cout << quiz9A << endl;
					cout << quiz10A << endl;
					cout << "The Total Score of the quiz is " << totalGrade1 << endl;
				}
				if (totalGrade2 <= 89 && totalGrade2 >= 80) {
					cout << "Student Name:" << " " << FirstB.FirstName << " " << SecondB.LastName << " " << "B" << endl;
					cout << quiz1B << endl;
					cout << quiz2B << endl;
					cout << quiz3B << endl;
					cout << quiz4B << endl;
					cout << quiz5B << endl;
					cout << quiz6B << endl;
					cout << quiz7B << endl;
					cout << quiz8B << endl;
					cout << quiz9B << endl;
					cout << quiz10B << endl;
					cout << "The Total Score of the quiz is " << totalGrade2 << endl;
				}
				if (totalGrade3 <= 89 && totalGrade3 >= 80) {
					cout << "Student Name:" << " " << FirstC.FirstName << " " << SecondC.LastName << " " << "B" << endl;
					cout << quiz1C << endl;
					cout << quiz2C << endl;
					cout << quiz3C << endl;
					cout << quiz4C << endl;
					cout << quiz5C << endl;
					cout << quiz6C << endl;
					cout << quiz7C << endl;
					cout << quiz8C << endl;
					cout << quiz9C << endl;
					cout << quiz10C << endl;
					cout << "The Total Score of the quiz is " << totalGrade3 << endl;
				}
				if (totalGrade4 <= 89 && totalGrade4 >= 80) {
					cout << "Student Name:" << " " << FirstD.FirstName << " " << SecondD.LastName << " " << "B" << endl;
					cout << quiz1D << endl;
					cout << quiz2D << endl;
					cout << quiz3D << endl;
					cout << quiz4D << endl;
					cout << quiz5D << endl;
					cout << quiz6D << endl;
					cout << quiz7D << endl;
					cout << quiz8D << endl;
					cout << quiz9D << endl;
					cout << quiz10D << endl;
					cout << "The Total Score of the quiz is " << totalGrade4 << endl;
				}
				if (totalGrade5 <= 89 && totalGrade5 >= 80) {
					cout << "Student Name:" << " " << FirstF.FirstName << " " << SecondF.LastName << " " << "B" << endl;
					cout << quiz1F << endl;
					cout << quiz2F << endl;
					cout << quiz3F << endl;
					cout << quiz4F << endl;
					cout << quiz5F << endl;
					cout << quiz6F << endl;
					cout << quiz7F << endl;
					cout << quiz8F << endl;
					cout << quiz9F << endl;
					cout << quiz10F << endl;
					cout << "The Total Score of the quiz is " << totalGrade5 << endl;
				}
				if (totalGrade1 <= 79 && totalGrade1 >= 70) {
					cout << "Student Name:" << " " << FirstA.FirstName << " " << SecondA.LastName << " " << "C" << endl;
					cout << quiz1A << endl;
					cout << quiz2A << endl;
					cout << quiz3A << endl;
					cout << quiz4A << endl;
					cout << quiz5A << endl;
					cout << quiz6A << endl;
					cout << quiz7A << endl;
					cout << quiz8A << endl;
					cout << quiz9A << endl;
					cout << quiz10A << endl;
					cout << "The Total Score of the quiz is " << totalGrade1 << endl;
				}

				if (totalGrade2 <= 79 && totalGrade2 >= 70) {
					cout << "Student Name:" << " " << FirstB.FirstName << " " << SecondB.LastName << " " << "C" << endl;
					cout << quiz1B << endl;
					cout << quiz2B << endl;
					cout << quiz3B << endl;
					cout << quiz4B << endl;
					cout << quiz5B << endl;
					cout << quiz6B << endl;
					cout << quiz7B << endl;
					cout << quiz8B << endl;
					cout << quiz9B << endl;
					cout << quiz10B << endl;
					cout << "The Total Score of the quiz is " << totalGrade2 << endl;
				}

				if (totalGrade3 <= 79 && totalGrade3 >= 70) {
					cout << "Student Name:" << " " << FirstC.FirstName << " " << SecondC.LastName << " " << "C" << endl;
					cout << quiz1C << endl;
					cout << quiz2C << endl;
					cout << quiz3C << endl;
					cout << quiz4C << endl;
					cout << quiz5C << endl;
					cout << quiz6C << endl;
					cout << quiz7C << endl;
					cout << quiz8C << endl;
					cout << quiz9C << endl;
					cout << quiz10C << endl;
					cout << "The Total Score of the quiz is " << totalGrade3 << endl;
				}

				if (totalGrade4 <= 79 && totalGrade4 >= 70) {
					cout << "Student Name:" << " " << FirstD.FirstName << " " << SecondD.LastName << " " << "C" << endl;
					cout << quiz1D << endl;
					cout << quiz2D << endl;
					cout << quiz3D << endl;
					cout << quiz4D << endl;
					cout << quiz5D << endl;
					cout << quiz6D << endl;
					cout << quiz7D << endl;
					cout << quiz8D << endl;
					cout << quiz9D << endl;
					cout << quiz10D << endl;
					cout << "The Total Score of the quiz is " << totalGrade4 << endl;
				}
				if (totalGrade5 <= 79 && totalGrade5 >= 70) {
					cout << "Student Name:" << " " << FirstF.FirstName << " " << SecondF.LastName << " " << "C" << endl;
					cout << quiz1F << endl;
					cout << quiz2F << endl;
					cout << quiz3F << endl;
					cout << quiz4F << endl;
					cout << quiz5F << endl;
					cout << quiz6F << endl;
					cout << quiz7F << endl;
					cout << quiz8F << endl;
					cout << quiz9F << endl;
					cout << quiz10F << endl;
					cout << "The Total Score of the quiz is " << totalGrade5 << endl;
				}
				if (totalGrade1 <= 69 && totalGrade1 >= 60) {
					cout << "Student Name:" << " " << FirstA.FirstName << " " << SecondA.LastName << " " << "D" << endl;
					cout << quiz1A << endl;
					cout << quiz2A << endl;
					cout << quiz3A << endl;
					cout << quiz4A << endl;
					cout << quiz5A << endl;
					cout << quiz6A << endl;
					cout << quiz7A << endl;
					cout << quiz8A << endl;
					cout << quiz9A << endl;
					cout << quiz10A << endl;
					cout << "The Total Score of the quiz is " << totalGrade1 << endl;
				}
				if (totalGrade2 <= 69 && totalGrade2 >= 60) {
					cout << "Student Name:" << " " << FirstB.FirstName << " " << SecondB.LastName << " " << "D" << endl;
					cout << quiz1B << endl;
					cout << quiz2B << endl;
					cout << quiz3B << endl;
					cout << quiz4B << endl;
					cout << quiz5B << endl;
					cout << quiz6B << endl;
					cout << quiz7B << endl;
					cout << quiz8B << endl;
					cout << quiz9B << endl;
					cout << quiz10B << endl;
					cout << "The Total Score of the quiz is " << totalGrade2 << endl;
				}
				if (totalGrade3 <= 69 && totalGrade3 >= 60) {
					cout << "Student Name:" << " " << FirstC.FirstName << " " << SecondC.LastName << " " << "D" << endl;
					cout << quiz1C << endl;
					cout << quiz2C << endl;
					cout << quiz3C << endl;
					cout << quiz4C << endl;
					cout << quiz5C << endl;
					cout << quiz6C << endl;
					cout << quiz7C << endl;
					cout << quiz8C << endl;
					cout << quiz9C << endl;
					cout << quiz10C << endl;
					cout << "The Total Score of the quiz is " << totalGrade3 << endl;
				}

				if (totalGrade4 <= 69 && totalGrade4 >= 60) {
					cout << "Student Name:" << " " << FirstD.FirstName << " " << SecondD.LastName << " " << "D" << endl;
					cout << quiz1D << endl;
					cout << quiz2D << endl;
					cout << quiz3D << endl;
					cout << quiz4D << endl;
					cout << quiz5D << endl;
					cout << quiz6D << endl;
					cout << quiz7D << endl;
					cout << quiz8D << endl;
					cout << quiz9D << endl;
					cout << quiz10D << endl;
					cout << "The Total Score of the quiz is " << totalGrade4 << endl;
				}

				if (totalGrade5 <= 69 && totalGrade5 >= 60) {
					cout << "Student Name:" << " " << FirstF.FirstName << " " << SecondF.LastName << " " << "D" << endl;
					cout << quiz1F << endl;
					cout << quiz2F << endl;
					cout << quiz3F << endl;
					cout << quiz4F << endl;
					cout << quiz5F << endl;
					cout << quiz6F << endl;
					cout << quiz7F << endl;
					cout << quiz8F << endl;
					cout << quiz9F << endl;
					cout << quiz10F << endl;
					cout << "The Total Score of the quiz is " << totalGrade5 << endl;
				}

				if (totalGrade1 <= 59 && totalGrade1 >= 0) {
					cout << "Student Name:" << " " << FirstA.FirstName << " " << SecondA.LastName << " " << "F" << endl;
					cout << quiz1A << endl;
					cout << quiz2A << endl;
					cout << quiz3A << endl;
					cout << quiz4A << endl;
					cout << quiz5A << endl;
					cout << quiz6A << endl;
					cout << quiz7A << endl;
					cout << quiz8A << endl;
					cout << quiz9A << endl;
					cout << quiz10A << endl;
					cout << "The Total Score of the quiz is " << totalGrade1 << endl;
				}
				if (totalGrade2 <= 59 && totalGrade2 >= 0) {
					cout << "Student Name:" << " " << FirstB.FirstName << " " << SecondB.LastName << " " << "F" << endl;
					cout << quiz1B << endl;
					cout << quiz2B << endl;
					cout << quiz3B << endl;
					cout << quiz4B << endl;
					cout << quiz5B << endl;
					cout << quiz6B << endl;
					cout << quiz7B << endl;
					cout << quiz8B << endl;
					cout << quiz9B << endl;
					cout << quiz10B << endl;
					cout << "The Total Score of the quiz is " << totalGrade2 << endl;
				}

				if (totalGrade3 <= 59 && totalGrade3 >= 0) {
					cout << "Student Name:" << " " << FirstC.FirstName << " " << SecondC.LastName << " " << "F" << endl;
					cout << quiz1C << endl;
					cout << quiz2C << endl;
					cout << quiz3C << endl;
					cout << quiz4C << endl;
					cout << quiz5C << endl;
					cout << quiz6C << endl;
					cout << quiz7C << endl;
					cout << quiz8C << endl;
					cout << quiz9C << endl;
					cout << quiz10C << endl;
					cout << "The Total Score of the quiz is " << totalGrade3 << endl;
				}

				if (totalGrade4 <= 59 && totalGrade4 >= 0) {
					cout << "Student Name:" << " " << FirstD.FirstName << " " << SecondD.LastName << " " << "F" << endl;
					cout << quiz1D << endl;
					cout << quiz2D << endl;
					cout << quiz3D << endl;
					cout << quiz4D << endl;
					cout << quiz5D << endl;
					cout << quiz6D << endl;
					cout << quiz7D << endl;
					cout << quiz8D << endl;
					cout << quiz9D << endl;
					cout << quiz10D << endl;
					cout << "The Total Score of the quiz is " << totalGrade4 << endl;
				}

				if (totalGrade5 <= 59 && totalGrade5 >= 0) {
					cout << "Student Name:" << " " << FirstF.FirstName << " " << SecondF.LastName << " " << "F" << endl;
					cout << quiz1F << endl;
					cout << quiz2F << endl;
					cout << quiz3F << endl;
					cout << quiz4F << endl;
					cout << quiz5F << endl;
					cout << quiz6F << endl;
					cout << quiz7F << endl;
					cout << quiz8F << endl;
					cout << quiz9F << endl;
					cout << quiz10F << endl;
					cout << "The Total Score of the quiz is " << totalGrade5 << endl;
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
