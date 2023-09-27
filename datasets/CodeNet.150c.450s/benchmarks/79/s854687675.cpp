#include <iostream>
using namespace std;

int main() {
	int n, r;

	while (cin >> n >> r && n != 0 && r != 0) {
		int card[51];
		for (int i = 1; i <= n; i++) {
			card[i] = n - i + 1;
		}

		int p, c;
		for (int i = 0; i < r; i++) {
			cin >> p >> c;

			int temp[50];
			for (int j = 0; j < c; j++) {
				temp[j] = card[p + j];
			}
			for (int j = 1; j < p; j++) {
				card[p + c - j] = card[p - j];
			}
			for (int j = 0; j < c; j++) {
				card[j + 1] = temp[j];
			}
		}
		cout << card[1] << '\n';
	}

	return 0;
}