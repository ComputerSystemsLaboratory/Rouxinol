#include <iostream>

using namespace std;

int main() {
	int n, *a;
	int ans, sum;
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		a = new int[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		ans = a[0];
		for (int i = 0; i < n; i++) {
			sum = a[i];
			ans = max(ans, sum);
			for (int j = i + 1; j < n; j++) {
				sum += a[j];
				ans = max(ans, sum);
			}
		}
		cout << ans << endl;
		delete[] a;
	}
	return 0;
}