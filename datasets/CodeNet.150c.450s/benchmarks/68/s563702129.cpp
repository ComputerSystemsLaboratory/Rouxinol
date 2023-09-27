#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
	int n, min = -1;
	vector<int> v;
	for (;;) {
		cin >> n;
		if (n == 0) break;
		v.resize(n);
		for (int i = 0; i < n; i++) cin >> v[i];

		sort(v.begin(), v.end());

		for (int i = 0; i < n - 1; i++) {
			if (min == -1)min = v[i + 1] - v[i];
			else if (min > v[i + 1] - v[i]) min = v[i + 1] - v[i];
		}
		cout << min << endl;
		min = -1;
	}
}