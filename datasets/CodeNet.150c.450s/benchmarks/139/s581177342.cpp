#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
#define INF 10000000000
#define PI 3.141592653589793

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(m);
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i];
	}
	vector<vector<int>> table(n+1, vector<int>(0));
	vector<int> order(0);
	order.push_back(1);
	vector<int> ans(n+1, 0);
	ans[1] = 1;

	for (int i = 0; i < m; i++) {
		table[a[i]].push_back(b[i]);
		table[b[i]].push_back(a[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < table[order[i]].size(); j++) {
			int point = table[order[i]][j];
			if (!ans[point]) {
				ans[point] = order[i];
				order.push_back(table[order[i]][j]);
			}
		}
	}

	if (order.size() == n) {
		cout << "Yes" << endl;
		for (int i = 2; i < n + 1; i++) {
			cout << ans[i] << endl;
		}
	} else {
		cout << "No" << endl;
	}

	return 0;
}
