#include <bits/stdc++.h>
#define PI 3.14159265359
using namespace std;
const int64_t MOD = 1e9 + 7;

int main() {
	int n;
	cin >> n;

	vector<int> v(n), cntr(10001);
	for (int i = 0; i < n; i++) {
		cin >> v.at(i);
		cntr.at(v.at(i))++;
	}

	for (int i = 1; i < 10001; i++) {
		cntr.at(i) += cntr.at(i - 1);
	}

	vector<int> ans(n);
	for (int i = v.size() - 1; i >= 0; i--) {
		ans.at(cntr.at(v.at(i)) - 1) = v.at(i);
		cntr.at(v.at(i))--;
	}

	for (int i = 0; i < n; i++) {
		if (i) cout << ' ';
		cout << ans.at(i);
	}
	cout << endl;
}
