#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int a[5];
	int kari;

	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

	for (int j = 4; j > 0; j--) {
		for (int i = 0; i < j; i++) {
			if(a[i] < a[i+1]) {
				kari = a[i];
				a[i] = a[i+1];
				a[i+1] = kari;
			}
		}
	}

	cout << a[0];

	for (int i = 1; i < 5; i++) {
		cout << " " << a[i] ;
	}

	cout << endl;

	return 0;
}