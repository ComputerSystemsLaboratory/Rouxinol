#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int a,b;
	int counter = 0;
	while (1) {
		cin >> b;
		counter = 0;
		if (b == 0) {
			break;
		}
		a = 1000 - b;
		if (a / 500 > 0) {
			counter += (a / 500);
			a = a % 500;
		}
		if (a / 100 > 0) {
			counter += (a / 100);
			a = a % 100;
		}
		if (a / 50 > 0) {
			counter += (a / 50);
			a = a % 50;
		}
		if (a / 10 > 0) {
			counter += (a / 10);
			a = a % 10;
		}
		if (a / 5 > 0) {
			counter += (a / 5);
			a = a % 5;
		}
		if (a / 1 > 0) {
			counter += (a / 1);
			a = a % 1;
		}
		cout << counter << endl;
	}
	return 0;
}