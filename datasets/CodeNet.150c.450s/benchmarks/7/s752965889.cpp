#include<iostream>

using namespace std;

int main() {
	int a[100] = { 0 };
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	int big1, big2, big3;
	big1 = a[0];
	big2 = big3 = 0;
	for (int k = 1; k < 10; k++) {
		if (a[k] > big1) {
			big3 = big2;
			big2 = big1;
			big1 = a[k];
		}
		else if (a[k] > big2) {
			big3 = big2;
			big2 = a[k];
		}
		else if (a[k] > big3) {
			big3 = a[k];
		}
	}
	cout << big1 << endl << big2 << endl << big3 << endl;
	return 0;
}