#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	
	// Input two numbers
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	
	// Arithmetic operations
	cout << "Sum: " << (num1 + num2) << endl;
	cout << "Difference: " << (num1 - num2) << endl;
	cout << "Product: " << (num1 * num2) << endl;
	cout << "Division: " << (num1 / num2) << endl;
	
	// Check equality
	if (num1 == num2) {
		cout << "Are the numbers equal? Yes" << endl;
	} else {
		cout << "Are the numbers equal? No" << endl;
	}
	
	// Check positivity
	if (num1 > 0 && num2 > 0) {
		cout << "Both numbers are positive? Yes" << endl;
	} else {
		cout << "Both numbers are positive? No" << endl;
	}
	
	return 0;
}
