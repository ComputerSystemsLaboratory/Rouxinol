#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int a;
	int seki[20] = {1};
	int l;

	cin >> a;

	for (int i = 1; i <= a; i++) {
		for (int j = 0; j < 20; j++) {
			seki[j] *= i;
		}

		for (int j = 0; j < 20; j++) {
			if (seki[j] >= 10) {
				seki[j+1] += seki[j] / 10;
				seki[j] = seki[j] % 10;
			}
		}
	}

	for (int i = 19; i >= 0; i--) {
		if(seki[i] != 0) {
			l = i;
			break;
		}
	}

	for (int k = l; k >= 0; k--) {
		cout << seki[k];
	}

	cout << endl;

	return 0;
}