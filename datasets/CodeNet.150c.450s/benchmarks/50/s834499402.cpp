#include<iostream>
using namespace std;
int main() {
	int a, b[] = { 500,100,50,10,5,1 }, ruio = 0;
	cin >> a;
	while (a != 0) {
		a = 1000 - a;
		for (int i = 0; i < 5; i++) {
			ruio += a / b[i];
			a = a%b[i];
		}
		cout << ruio+a << endl;
		cin >> a;
		ruio = 0;
	}
}