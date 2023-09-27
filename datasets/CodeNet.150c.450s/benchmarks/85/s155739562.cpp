#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt" > "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\b.txt"
 
int memo[100][100];
vector<pair<int, int>>ps;
int getans(const int l, const int r) {
	if (memo[l][r] != -1)return memo[l][r];
	if (l + 1 == r) {
		return memo[l][r] = ps[l].first*ps[l].second*ps[r].second;
	}
	else if (l == r) {
		return memo[l][r] = 0;
	}
	else {
		int ans = 1e9;
		for (int t = l; t < r; ++t) {
			int len = getans(l, t) + ps[l].first*ps[t].second*ps[r].second + getans(t + 1, r);
			ans = min(ans, len);
		}
		return memo[l][r] = ans;
	}
}
int main() {
	for (int i = 0; i < 100; ++i) {
		for (int j = 0; j < 100; ++j) {
			memo[i][j] = -1;
		}
	}
	int N; cin >> N;
	ps.resize(N);
	for (int i = 0; i < N; ++i) {
		int a, b; cin >> a >> b;
		ps[i] = make_pair(a, b);
	}
	int ans=getans(0, N - 1);
	cout << ans << endl;
	return 0;
}