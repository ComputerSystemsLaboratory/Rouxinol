#include "bits/stdc++.h"
using namespace std;

int main() {
	long long N;
	cin >> N;
	int i = 2;
	cout << N << ':';
	while (i <= sqrt(N)) {
		if (N % i == 0) {
			cout << ' ' << i;
			N /= i;
		}
		else {
			++i;
		}
	}
	if (N != 1) cout << ' ' << N;
	cout << endl;
}

