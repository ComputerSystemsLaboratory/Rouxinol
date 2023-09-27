#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
using namespace std;
int main() {
	int n, m, p;
	while (cin >> n >> m >> p&&n + m + p != 0) {
		int sum = 0;
		int t = 0, x;
		for (int i = 0; i < n; i++) {
			cin >> x;
			sum += x;
			if (i == m - 1) t = x;
		}
		if (t != 0) {
			cout << floor(sum*(100 - p) / t) << endl;
		}
		else cout << 0 << endl;
	}
} 