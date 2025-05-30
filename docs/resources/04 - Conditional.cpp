#include <iostream>
using namespace std;

int main() {
	int age;

	// Input the user's age
	cout << "Enter your age: ";
	cin >> age;

	// Determine the age category
	if (age >= 0 && age <= 12) {
		cout << "You are a Child." << endl;
	} else if (age >= 13 && age <= 19) {
		cout << "You are a Teenager." << endl;
	} else if (age >= 20) {
		cout << "You are an Adult." << endl;
	} else {
		cout << "Invalid age entered." << endl;
	}

	return 0;
}
