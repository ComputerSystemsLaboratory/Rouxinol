#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,max=INT_MIN;
	vector<int> A;
	map<int, int> mp;
	while (cin >> a) {
		A.push_back(a);
		mp[a] = 0;
	}
	for (auto itr = mp.begin(); itr != mp.end(); itr++) {
		for (int i = 0; i < A.size(); i++) {
			if (itr->first == A[i])itr->second++;
		}
	}
	for (auto itr = mp.begin(); itr != mp.end(); itr++) {
		if (max < itr->second)max = itr->second;
	}
	for (auto itr = mp.begin(); itr != mp.end(); itr++) {
		if (itr->second == max)cout << itr->first << endl;
	}
	return 0;
}