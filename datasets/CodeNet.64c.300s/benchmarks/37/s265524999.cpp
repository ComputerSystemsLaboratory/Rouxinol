#include <iostream>

using namespace std;

int main() {
	int n;
	while ( cin >> n, n ) {
		int ans = 0;
		for (int i = 1; i < n; ++i) {
			int sum = 0;
			for (int j = 2; j < n; ++j) {
				int k = j;
				sum = i * j + k*(k-1)/2;
				if (sum == n) ++ans;
			}
		}
		cout << ans << endl;
	}
}