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

vector<int> v(2000);
int n;
void solve(int m) {
	vector<int> dp(2010, 0);
	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 2000; j >= 0; j--) {
			if (dp[j] >= 1 && j + v[i] <= 2000) {
				dp[j + v[i]] = 1;
			}
		}
	}
	cout << (dp[m] ? "yes" : "no") << endl;
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
		solve(m);
	}

	return 0;
}