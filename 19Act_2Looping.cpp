#include <iostream>
using namespace std;

int main() {
	char symbol1, symbol2, symbol3;
	// Pick symbols
	cout << "Enter 1st symbol to use (*, ^, #, $, @): ";
	cin >> symbol1;
	cout << "Enter 2nd symbol to use (*, ^, $, @): ";
	cin >> symbol2;
	cout << "Enter 3rd symbol to use (*, $, @): ";
	cin >> symbol3;
	cout << "You picked: " << symbol1 << " " << symbol2 << " " << symbol3 << endl;

	// f:
	cout << "f:" << endl;
	for (int i = 0; i < 10; 1++) {
		for (int j = 0; j < 10; j++) {
			if (j == i) {
				cout << " ";
			} else {
				cout << symbol1;
			}
		}
		cout << endl;
	}

	// :g
	cout << "g:" << endl;
	for (int i = 0; i < 5; i++) {
		if (i % 2 ! = 0) {
			cout << " ";
		}
		for (int j = 0; j < 10; j++) {
			cout << symbol2 << " ";
		}
		cout << endl;
	}

	// h: (combined symbol1 and symbol2)
	cout << "h:" << endl;
	for (int i = 1; i <=6; i++) {
		for (int j = 1; j < i; j++) {
			cout << symbol1;
		}
		cout << symbol2 << endl;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			cout << symbol1;
		}
		cout << symbol2 << endl;
	}

	for (int i = 6; i >= 1; i--) { 
		for (int j = 1; j < i; j++) {
			cout << symbol1;
		}
		cout << symbol2 << endl;
	}

	// i: (symbol1, symbol2, symbol3 combined)
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 1; j++) {
			cout << "          ";
			for (int k = 0; k < i; k++) {
				cout << "^";
			}
		}
		cout << "*" << endl;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			cout << "#";
		}
		for (int j = 0; j < 5; j++) {
			cout << "^";
		}
		cout << "*" << endl;
	}

	for (int i = 4; i >= 0; i--) {
		for (int j = 0; j < 1: j++) {
			cout << "        ";
			for (int k = 0; k < i; k++) {
				cout << "^";
			}

		}
		cout << "*" << endl;
	}
	return 0;
}
