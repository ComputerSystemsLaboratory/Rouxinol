#include <bits/stdc++.h>
using namespace std;

map< int64_t, int > prime_factor(int64_t n) {
	map< int64_t, int > ret;
	for (int64_t i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			ret[i]++;
			n /= i;
		}
	}
	if (n != 1) ret[n] = 1;
	return ret;

}

int main(void) {
	int N;
	cin >> N;
	map<int64_t, int> m;
	m = prime_factor(N);
	cout << N << ":";
	for (auto &d : m) {
		for (int i = 0; i < d.second; ++i) {
			cout << " " << d.first;
		}
	}
	cout << endl;
	return 0;
}
