#include <iostream>
using namespace std;

int main() {
	string name;
	int age;
	char favLetter;
	
	cout << "Enter your name: ";
	cin >> name;
	
	cout << "Enter your age: ";
	cin >> age;
	
	cout << "Enter your favorite letter: ";
	cin >> favLetter;
	
	cout << "Name: " << name << ", Age: " << age << ", Favorite Letter: " << favLetter << endl;
	return 0;
}
