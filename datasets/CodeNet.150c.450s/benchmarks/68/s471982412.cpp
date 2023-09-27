#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int n;
	while (cin >> n, n) {
		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a.begin(),a.end());

		int res = 1000000;
		for (int i = 0; i < n-1; ++i) {
			if (a[i+1]-a[i] < res) {
				res = a[i+1]-a[i];
			}
		}
		cout << res << endl;
	}
	return 0;
}