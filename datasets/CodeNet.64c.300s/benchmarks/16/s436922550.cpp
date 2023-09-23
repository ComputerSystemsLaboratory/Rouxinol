#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
	int n, r, min_r, profit;

	cin >> n;
	cin >> min_r >> r;
	profit = r - min_r;
	min_r = min(min_r, r);

	for (int i = 2; i < n; i++) {
		cin >> r;
		profit = max(profit, r - min_r);
		min_r = min(min_r, r);
	}
	cout << profit << endl;
	return 0;
}