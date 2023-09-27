#include "bits/stdc++.h"
#pragma warning(disable:4996)
using namespace std;

int main() {
	int a;
	map<int, int>mp;
	while (cin >> a) {
		mp[a]++;
	}
	int amax = 0;
	vector<int>anss;
	for (auto m : mp) {
		if (m.second > amax) {
			anss.clear();
			amax = m.second;
		}
		if (m.second == amax) {
			anss.push_back(m.first);
			
		}
	}
	sort(anss.begin(), anss.end());
	for (auto ans : anss) {
		cout << ans << endl;
	}
	return 0;
}