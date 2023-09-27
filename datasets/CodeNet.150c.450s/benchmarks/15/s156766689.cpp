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

int n;
bool my_search(int key, vector<int> v) {
	int up = n;
	int down = 0;
	while (down < up) {
		int mid = (up + down) / 2;
		if (v[mid] > key) {
			up = mid;
		}
		else if (v[mid] == key) {
			return true;
		}
		else {
			down = mid + 1;
		}
	}
	return false;
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)cin >> v[i];
	sort(v.begin(), v.end());

	int q;
	cin >> q;
	int t;
	int cnt = 0;
	for (int i = 0; i < q; i++) {
		cin >> t;
		if (my_search(t, v)) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}