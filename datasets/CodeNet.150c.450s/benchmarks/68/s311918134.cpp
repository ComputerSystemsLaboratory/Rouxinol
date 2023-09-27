#include<bits/stdc++.h>
#pragma warning(disable:4996)
#ifdef _MSC_VER
#  define __builtin_popcount __builtin_popcountll
#  define __builtin_popcountll __popcnt
#endif
#define int long long
using namespace std;
using ll = long long;
using ld = long double;
const long double PI = acos(-1.0);
const int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
inline void my_io() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout << fixed << setprecision(10);
}
signed main() {
	int n;
	while (cin>>n,n) {
		vector<int>as(n);
		for (int i = 0; i < n; i++) {
			cin >> as[i];
		}
		sort(as.begin(), as.end());
		vector<int>sas(n - 1);
		for (int i = 0; i < n - 1; i++) {
			sas[i] = abs(as[i + 1] - as[i]);
		}
		sort(sas.begin(), sas.end());
		cout << sas[0] << endl;
	}
}
