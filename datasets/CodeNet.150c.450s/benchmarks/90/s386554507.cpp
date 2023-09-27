#include <iostream>

#define SIZE 100

using namespace std;

int main() {
	int value[SIZE] = {0}, n, max = 0;


	while (cin >> n) {
		value[n - 1]++;

		if (value[n - 1] > max) max = value[n - 1];
	}

	for (int i = 1; i <= SIZE; i++) {
		if (value[i - 1] == max) {
			cout << i << endl;
		}
	}

	return 0;
}