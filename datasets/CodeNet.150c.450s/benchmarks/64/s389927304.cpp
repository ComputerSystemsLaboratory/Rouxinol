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
vector<int> v(2000);

bool solve(int i, int m) {
	if (m == 0) {
		return true;
	}
	else if (i >= n) {
		return false;
	}
	else {
		return solve(i + 1, m) || solve(i + 1, m - v[i]);
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	cin >> n;
	for (int i = 0; i < n; i++)cin >> v[i];

	int q;
	cin >> q;
	int m;
	for (int i = 0; i < q; i++) {
		cin >> m;
		if (solve(0, m)) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	return 0;
}