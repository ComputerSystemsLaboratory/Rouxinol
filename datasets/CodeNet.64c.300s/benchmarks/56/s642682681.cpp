#include <iostream>
using namespace std;

int num_of_days (int y, int m, int d) {
	int number_of_days = 0;

	int i, k, j, l;

	// OK
	if (y % 3 == 0) {

		i = 333 - y / 3;
		k = 1000 - y - i - 1;
		l = 20 - d;

		number_of_days = i * 200 + k * 195 + 20 * (10 - m) + l + 1;

	//
	} else if (y % 3 == 1) {
		i = 333 - y / 3;
		k = 1000 - y - i - 1;

		if (m % 2 == 0) {
		j = 39 * (10 - m) / 2;
		l = 19 - d;
		} else {
		j = 20 * ((10 - m) / 2) + 19 * ((10 - m) / 2 + 1);
		l = 20 - d;
		}

		number_of_days = i * 200 + k * 195 + j + l + 1;

	//
	} else if (y % 3 == 2) {

		i = 333 - y / 3;
		k = 1000 - y - i - 1;

		if (m % 2 == 0) {
			j = 39 * ((10 - m)/ 2);
			l = 19 - d;
		} else {
			j = 20 * ((10 - m)/ 2) + 19 * ((10 - m)/ 2 + 1);
			l = 20 - d;
		}

		number_of_days = i * 200 + k * 195 + j + l + 1;
	}

	return number_of_days;
}



int main(void) {
	int n, Y, M, D;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> Y >> M >> D;

		cout << num_of_days(Y, M, D) << "\n";

	}
	return 0;
}