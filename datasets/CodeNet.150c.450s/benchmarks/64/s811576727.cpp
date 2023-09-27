#include <iostream>

using namespace std;

int main() {
	int n, num[20], q, value;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> value;

		bool dp[2001] = { true };
		for (int j = 0; j < n; j++) {
			for (int k = value; k >= 0; k--) {
				if (dp[k] == true && k + num[j] <= value) {
					dp[k + num[j]] = true;
				}
			}
		}
		if (dp[value] == true) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	return 0;
}