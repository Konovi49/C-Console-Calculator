#include <iostream>
#include <string>

using namespace std;

void addition(float a, float b) {
	char choice;
	float result = a + b;
	cout << "Your result is: " << result << endl;
	system("PAUSE");
};

void subtraction(float a, float b) {
	char choice;
	float result = a - b;
	cout << "Your result is: " << result << endl;
	system("PAUSE");
};

void multiplication(float a, float b) {
	char choice;
	float result = a * b;
	cout << "Your result is: " << result << endl;
	system("PAUSE");
};

void division(float a, float b) {
	char choice;
	float result = a / b;
	cout << "Your result is: " << result << endl;
	system("PAUSE");
};

int main()
{
	int choice;
	float x, y;
	cout << "=================" << endl;
	cout << "   Calculator    " << endl;
	cout << "=================" << endl;
	cout << "\n" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nPlease choose operation number: " << endl;
	cin >> choice;

	if (choice == 1) {
		cout << "Enter first number: " << endl;
		cin >> x;
		cout << "Enter second number: " << endl;
		cin >> y;
		addition(x, y);
	}
	else if (choice == 2) {
		cout << "Enter first number: " << endl;
		cin >> x;
		cout << "Enter second number: " << endl;
		cin >> y;
		subtraction(x, y);
	}
	else if (choice == 3) {
		cout << "Enter first number: " << endl;
		cin >> x;
		cout << "Enter second number: " << endl;
		cin >> y;
		multiplication(x, y);
	}
	else if (choice == 4) {
		cout << "Enter first number: " << endl;
		cin >> x;
		cout << "Enter second number: " << endl;
		cin >> y;
		division(x, y);
	}
	else {
		cout << "Your choice was invalid." << endl;
		system("PAUSE");
	}

	return 0;
}