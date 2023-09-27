#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		vector<int> d(n, 0);
		for (int i = 1; i < n; i++) {
			d[i] = d[i - 1] + i;
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 2; j < n; j++) {
				if (d[j] - d[i] == n) {
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}