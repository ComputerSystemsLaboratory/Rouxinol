#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(cin >> n, n) {
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		int res = 10000000;
		for (int i = 1; i < n; i++) {
			res = min(res, a[i] - a[i - 1]);
		}
		cout << res << endl;
	}
	return 0;
}