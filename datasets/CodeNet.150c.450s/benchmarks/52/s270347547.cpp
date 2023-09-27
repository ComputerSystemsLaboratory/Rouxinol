#include<iostream>

using namespace std;

int main() {
	int train[200000] = { 0 }, junban[200000] = { 0 }, a = 0, n, i;	
	while (cin >> n) {
		if (n == 0) {
			for (i = 0; train[i] != 0; i++) {}
			junban[a] = train[i - 1];
			train[i - 1] = 0;
			a++;
		}
		else {
			for (i = 0; train[i] != 0; i++) {}
			train[i] = n;
		}
	}
	for (i = 0; junban[i] > 0; i++) {
		cout << junban[i] << endl;
	}
	return 0;
}