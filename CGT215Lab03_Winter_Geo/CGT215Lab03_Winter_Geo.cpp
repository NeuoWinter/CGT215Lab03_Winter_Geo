// CGT215Lab03_Winter_Geo.cpp
// September 7, 2023

#include <iostream>
using namespace std;
void printMenu(float& choice) {
	int loop = 0;
	while (loop == 0) { // CHECK TO MAKE SURE INPUT IS CORRECT
		cout << "Welcome to my program, please select an operation to perform:" << endl;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cout << "\nYour Selection: ";
		cin >> choice;
		if (choice == 1 || choice == 2 || choice == 3 || choice == 4) {
			loop++;
		}
		else {
			cout << "=========================================================" << endl;
			cout << "ERROR -- Please enter a correct choice number 1,2,3 or 4." << endl;
			cout << "=========================================================" << endl << endl;
		}
	}
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value:";
	cin >> A;
	cout << "Please enter the second value:";
	cin >> B;
}

// MATH FUNCTIONS
void Additon(float A, float B) {
	float answer = A+B;
	cout << endl << A << " + " << B << " = " << answer << endl;
}
void Subtraction(float A, float B) {
	float answer = A - B;
	cout << endl << A << " - " << B << " = " << answer << endl;
}
void Multiplication(float A, float B) {
	float answer = A * B;
	cout << endl << A << " * " << B << " = " << answer << endl;
}
void Division(float A, float B) {
	float answer = A / B;
	cout << endl << A << " / " << B << " = " << answer << endl;
}

// RUN MAIN FUNCTION
int main() {
	float choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		Additon(A, B);
	}
	if (choice == 2) {
		Subtraction(A, B);
	}
	if (choice == 3) {
		Multiplication(A, B);
	}
	if (choice == 4) {
		Division(A, B);
	}
	return 0;
}
