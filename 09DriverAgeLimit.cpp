#include <iostream>

using namespace std;

int main() {
	int age;
	
	//Prompt user for age
	cout << "What is your age? ";
	cin >> age;
	
	//Conditions based on age
	if (age < 16) {
		cout << "Too young to drive." << endl;
	}  else if (age == 16) {
		cout << "Better clear the road." << endl;
	}  else  {
		cout << "You are getting pretty old." << endl;
	}
	return 0;
}
		