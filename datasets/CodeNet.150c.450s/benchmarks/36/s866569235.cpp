#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int d;
	int seki;
	int yaku;
	int sum = 0;

	while (cin >> d) {
		yaku = 600 / d - 1;

		for (int i = 0; i < yaku; i++) {
			seki = d * d * d * (i + 1) * (i + 1);
			sum += seki;
		}

		cout << sum << endl;
		sum = 0;
	}

	return 0;
}