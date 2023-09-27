#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	while (1) {
		int i, j, n, k, sum = 0, maxsum;

		cin >> n >> k;
		if (n == 0)break;
		int *a = new int[n + 1];
		for (i = 0; i < n; i++) {
			cin >> a[i];
		}

		for (i = 0; i < k; i++) {
			sum += a[i];
		}

		maxsum = sum;

		for (i = 0; i < n - k; i++) {
			sum -= a[i];
			sum += a[i + k];
			maxsum = max(maxsum, sum);
		}

		cout << maxsum << endl;
	}
	

	return 0;
}