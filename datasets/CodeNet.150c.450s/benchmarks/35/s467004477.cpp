#include<iostream>
using namespace std;

int main() {
	int n;
	long long sum, max;

	while (true) {
		sum = 0;
		max = -10000000;
		cin >> n;
		if (n == 0) break;

		int a[n];

		for (int i = 0; i < n; i++)
			cin >> a[i];

		for (int i = 0; i < n; i++) {
			sum = 0;
			for (int j = 1; j <= n; j++) {
				if (i + j - 1 < n) {
					sum += a[i + j - 1];
					if (sum > max)	max = sum;
				}
			}
		}

		cout << max << endl;
	}
	return 0;
}