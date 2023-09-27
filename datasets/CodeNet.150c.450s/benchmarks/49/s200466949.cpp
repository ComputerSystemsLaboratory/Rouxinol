#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n;
	while (cin >> n && n) {
		vector<int> d(n);
		int sum = 0;
		for (int i = 0; i < n; ++i) cin >> d[i];
		sort(d.begin(), d.end());
		for (int i = 1; i < n - 1; ++i) sum += d[i];
		cout << sum / (n - 2) << endl;
	}
	return 0;
}
