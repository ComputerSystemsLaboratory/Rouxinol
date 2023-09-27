#include<iostream>
using namespace std;

#include<algorithm>

int a[100001];

int main() {
	int n, k;
	while (cin >> n >> k && n != 0 && k != 0) {
		a[0] = 0;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			a[i] += a[i - 1];
		}
		int maxi = 0;
		for (int i = k; i <= n; ++i) {
			maxi = max(maxi, a[i] - a[i - k]);
		}

		cout << maxi << endl;
	}

	return 0;
}