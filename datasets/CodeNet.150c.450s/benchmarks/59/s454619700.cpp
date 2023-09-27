#include <bits/stdc++.h>

using namespace std;
using LL = long long;
using VI = vector<int>;
using PI = pair<int, int>;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		int v = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > v) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;
		for (int k = 0; k < n; k++) {
			cout << (k != 0 ? " " : "") << a[k];
		}
		cout << endl;
	}
	return 0;
}

