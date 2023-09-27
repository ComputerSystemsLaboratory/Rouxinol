#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void pollock(int po[], int od[]) {
	int i = 1, j = 1;
	while (po[i - 1] < 1000000) {
		po[i] = (i * (i + 1) * (i + 2)) / 6;
		if (po[i] % 2 == 1) {
			od[j] = po[i];
			j++;
		}
		i++;
	}
}

int main() {
	int po[200] = {}, od[200] = {};
	pollock(po, od);
	int n;
	while (cin >> n && n) {
		vector<int> tmp(1000000, 100);
		tmp[0] = 0;
		int t = 1;
		while (po[t] <= n) t++;
		for (int i = 1; i <= t; ++i) {
			for (int j = 0; j + po[i] <= n; ++j) {
				tmp[j + po[i]] = min(tmp[j + po[i]], tmp[j] + 1);
			}
		}
		cout << tmp[n] << " ";

		for (int i = 1; i < 1000000; ++i) tmp[i] = 1000000;
		tmp[0] = 0;
		t = 1;
		while (od[t] <= n) t++;
		for (int i = 1; i <= t; ++i) {
			for (int j = 0; j + od[i] <= n; ++j) {
				tmp[j + od[i]] = min(tmp[j + od[i]], tmp[j] + 1);
			}
		}
		cout << tmp[n] << endl;
	}

	return 0;
}
