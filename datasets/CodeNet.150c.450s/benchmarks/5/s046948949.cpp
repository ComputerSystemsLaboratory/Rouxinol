#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
	int N;
	int array[100];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}
	for (int i = N; i > 0; i--) {
		cout << array[i - 1];
		if (i != 1) {
			cout << " ";
		}
	}
	cout << endl;

	return 0;
}

