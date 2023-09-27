#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n,d;
	while (1) {
		int minv = 1000001;
		cin >> n;
		if (n == 0) break;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];

		sort(a.begin(), a.end());
		for (int i = 0; i < (n-1); i++) {
			d = a[i + 1] - a[i];
			if (min(minv, d) == d) {
				minv = d;
			}
		}
		cout << minv << endl;
	}

}
