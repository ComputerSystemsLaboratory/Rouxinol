#include "bits/stdc++.h"
using namespace std;

int main() {
	int n;
	cin >> n;

	long long int sum = 0;
	vector<long long int> vec(1e5, 0);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		vec[a]++;
		sum += a;
	}

	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		long long int b, c;
		cin >> b >> c;

		sum -= vec[b] * b;
		sum += vec[b] * c;

		vec[c] += vec[b];
		vec[b] = 0;

		cout << sum << endl;
	}
}