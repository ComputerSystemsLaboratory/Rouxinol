#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<list>
#include<iomanip>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
#include<unordered_map>
using namespace std;
//---------------------------------------------------
//????????????????????????????????????
#define int long long
const int inf = 999999999999999999;
struct P {
	int pos, cost;
};
bool operator<(P a, P b) { return a.cost < b.cost; }
bool operator>(P a, P b) { return a.cost > b.cost; }
struct B {
	int to, cost;
};
typedef long long ll;
typedef long double ld;
//---------------------------------------------------
//+++++++++++++++++++++++++++++++++++++++++++++++++++
//---------------------------------------------------
int n, s;
int solve(int i, int bf,int res) {
	if (i == n&&res==0) return 1;
	int ans = 0;
	for (int j = 0; j < bf; j++) {
		ans += solve(i + 1, j, res - j);
	}
	return ans;
}
signed main() {
	while (cin >> n >> s&&n + s != 0) {
		cout << solve(0, 10, s) << endl;
	}
}