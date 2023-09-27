#include <iostream>

using namespace std;

int main() {
	int n;
	while ( cin >> n, n ) {
		int m = 10000, M = 0, sum = 0;
		for (int i = 0; i < n; ++i) {
			int v; cin >> v;
			sum += v;
			m = min(m, v);
			M = max(M, v);
		}
		cout << (sum - m - M) / (n-2) << endl;
	}
}