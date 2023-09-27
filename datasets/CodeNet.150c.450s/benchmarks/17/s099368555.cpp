
#include <iostream>
using namespace std;

int main() {
	int a[5+1];

	for (int i = 1; i <= 5; i++) 
		cin >> a[i];

	for (int j = 2; j <= 5; j++) {
		int key = a[j];
		int i = j-1;
		while (i >= 1 && a[i] < key) {
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = key;
	}

	for (int i = 1; i < 5; i++) {
		cout << a[i] << " ";
	}
	cout << a[5] << endl;

	return 0;
}