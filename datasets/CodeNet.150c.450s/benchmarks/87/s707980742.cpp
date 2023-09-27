#include<bits/stdc++.h>
#define int long long
#define for0(i, n) for(int i = 0; i < (n); i++)
#define for1(i, n) for(int i = 1; i <= (n);i++)
using namespace std;
int n;
void solve() {
	int a[15][7], sum = 0;
	for1(i, n)for1(j, 5) {
		cin >> a[i][j];
		sum += a[i][j];
	}
	bool b = 1;
	while (b) {
		b = 0;
		for1(i, n) {
			if (a[i][2] == a[i][3] && a[i][3] == a[i][4] && a[i][3] != 0) {
				b = 1;
				if (a[i][1] == a[i][3])a[i][1] = 0;
				if (a[i][5] == a[i][3])a[i][5] = 0;
				a[i][2] = 0;
				a[i][3] = 0;
				a[i][4] = 0;
			}
			else if (a[i][1] == a[i][2] && a[i][2] == a[i][3] && a[i][3] != 0) {
				b = 1;
				a[i][1] = 0;
				a[i][2] = 0;
				a[i][3] = 0;
			}
			else if (a[i][5] == a[i][4] && a[i][4] == a[i][3] && a[i][3] != 0) {
				b = 1;
				a[i][5] = 0;
				a[i][4] = 0;
				a[i][3] = 0;
			}
		}
		for1(j, 5) {
			vector<int>v;
			for1(i, n)if (a[i][j])v.push_back(a[i][j]);
			for1(i, n)a[i][j] = (n - v.size() >= i ? 0 : v[i - n + v.size() - 1]);
		}
	}
	for1(i, n)for1(j, 5)sum -= a[i][j];
	cout << sum << endl;
}
signed main() {
	while (cin >> n, n)solve();
}
