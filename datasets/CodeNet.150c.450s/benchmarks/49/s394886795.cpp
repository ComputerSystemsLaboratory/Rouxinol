#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, point[100];

	while (cin >> n && n != 0) {
		for (int i = 0; i < n; i++) {
			cin >> point[i];
		}
		sort(&point[0], &point[n]);

		int sum = 0;
		for (int i = 1; i < n - 1; i++) {
			sum += point[i];
		}
		cout << sum / (n - 2) << '\n';
	}

	return 0;
}