#include <iostream>

using namespace std;

int main() {
	while (1) {
		int n;

		cin >> n;

		if (n == 0) {
			break;
		}

		int sum = 0, min = 1001, max = -1, temp;
		for (int i = 0; i < n; i++) {
			cin >> temp;

			sum += temp;

			if (min > temp) {
				min = temp;
			}
			if (max < temp) {
				max = temp;
			}
		}

		sum -= (min + max);

		cout << sum / (n - 2) << endl;
	}

	return 0;
}