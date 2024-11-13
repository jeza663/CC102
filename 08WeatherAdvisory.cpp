#include <iostream>

using namespace std;

int main(){
	int temperature;
	
	// Prompt user for the temperature
	cout << "Enter the temperature: ";
	cin >> temperature;
	
	// Conditions based on the temperature
	if (temperature < 32) {
		cout << "It's recommended to bring a heavy jacket." << endl;
		} else if (temperature >= 32 && temperature <= 50) {
		cout << "It's recommended to bring light jacket." << endl;
		} else  {
		cout << "No jacket needed." << endl;
		}
		return 0;
	}
