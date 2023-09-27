#define _USE_MATH_DEFINES
#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<string>
#include<utility>
#include<list>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	int mx = 0;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		mx = max(mx, v[i]);
	}
	sort(v.begin(), v.end());

	int q;
	cin >> q;
	int key;
	int cnt = 0;
	for (int i = 0; i < q; i++) {
		cin >> key;
		if (key > mx)continue;
		else {
			auto it = lower_bound(v.begin(), v.end(), key);
			if (*it == key)cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}