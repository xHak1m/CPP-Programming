#include <iostream>
using namespace std;

int main() {
	string name;
	int age;
	char favLetter;
	
	cout << "Enter your name: " << endl;
	cin >> name;
	
	cout << "Enter your age: " << endl;
	cin >> age;
	
	cout << "Enter your favorite letter: ";
	cin >> favLetter;
	
	cout << "Name: " << name << ", Age: " << age << ", Favorite Letter: " << favLetter << endl;
	return 0;
}
