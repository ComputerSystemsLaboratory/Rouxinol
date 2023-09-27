#include <bits/stdc++.h>
using namespace std;

int main()
{
	int val;
	int cnt[101] = {};
	while (cin >> val) {
		cnt[val]++;
	}
	vector<int> v;
	int ma = 0;
	for (int i = 1; i <= 100; i++) {
		if (cnt[i] > ma) {
			ma = cnt[i];
			v.clear();
			v.push_back(i);
		}
		else if (cnt[i] == ma) {
			v.push_back(i);
		}
	}
	for (auto va : v) {
		cout << va << endl;
	}
	return 0;
}