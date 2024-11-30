#include <iostream>

using namespace std;

void pattern_a(int n){
	for (int i = 0;i <n; ++i){
		for (int j = 0;j <i; ++j){
			cout << "#";
		}
		cout << endl;
	}
} 
void pattern_b(int n){
	for (int i = 0;i <n; ++i){
		for (int j = 0;j <n; ++j){
			if (j < n - i-1){
				cout << " ";
			} else {
				cout << "#";
			}
		}
		cout << endl;
	}
}
void pattern_c(int n){
	for (int i = 0;i <n; ++i){
		for (int j = 0;j <n-i; ++j){
			cout << "#";
		}
		cout << endl;
	}
}
void pattern_d(int n){
	for (int i = 1;i <=i; ++i){
		for (int j = 1;j <=i; ++j){
			cout <<j<<" ";
		}
		cout << endl;
	}
}
void pattern_e(int n){
	for (int i = 1;i <=n; ++i){
		for (int j = 1;j <=i; ++j){
			cout <<j<<" ";
		}
		cout << endl;
	}
	for (int i=j; i>=n; ++j){
		for (int j=1; j<=i; ++j){
			cout <<j<<" ";
		}
		cout << endl;
	}
}
int main(){
	int n = 8; // You can change this value to generate different sizes
	cout << "Pattern (a):" << endl;
	pattern_a(n);
	cout << endl;
	cout << "Pattern (b):" << endl;
	pattern_b(n);
	cout << endl;
	cout << "Pattern (c):" << endl;
	pattern_c(n);
	cout << endl;
	cout << "Pattern (d):" << endl;
	pattern_d(n);
	cout << endl;
	cout << "Pattern (e):" << endl;
	pattern_e(n);
	cout << endl;
	return 0;
}