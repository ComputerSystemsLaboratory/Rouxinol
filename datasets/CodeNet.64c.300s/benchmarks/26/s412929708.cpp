#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int (i) = 0; (i) < (n); (i)++)

int main() {
	long long M, N; cin >> M >> N;
	long long num = 1;
	while (N > 0) {
		if (N & 1) num = num * M % 1000000007;
		M = M * M % 1000000007;
		N >>= 1;
	}
	cout << num << endl;
}

