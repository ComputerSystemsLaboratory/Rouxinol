#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		vector<long long int> hyou(n+1, 0);
		long long int a;
		long long int MAX = 0;
		int maxn = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			hyou[i+1] = hyou[i] + a;
			if (i == 0) {
				MAX = hyou[1];
			}
		}
		for (int i = 2; i <= n; i++) {
			MAX = max(MAX, hyou[i]);
			for (int j = 1; j < i; j++) {
				if (hyou[j] < 0) {
					MAX = max(MAX, hyou[i]-hyou[j]);
				}
			}
		}
		cout << MAX << endl;
	}
	return 0;
}