# include <iostream>
# include <algorithm>
#include <array>
# include <cassert>
#include <cctype>
#include <climits>
#include <numeric>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <tuple>
# include <utility>
# include <stack>
# include <queue>
# include <list>
# include <bitset>
# include <complex>
# include <chrono>
# include <random>
# include <limits.h>
# include <unordered_map>
# include <unordered_set>
# include <deque>
# include <cstdio>
# include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <cstdint>
#include <cfenv>
//#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
constexpr long long MOD = 1000000000 + 7;
constexpr long long INF = std::numeric_limits<long long>::max();
const double PI = acos(-1);
#define fir first
#define sec second
#define thi third
#define debug(x) cerr<<#x<<": "<<x<<'\n'
typedef pair<LL, LL> Pll;
typedef pair<LL, pair<LL, LL>> Ppll;
typedef pair<LL, pair<LL, bitset<100001>>> Pbll;
typedef pair<LL, pair<LL, vector<LL>>> Pvll;
typedef pair<LL, LL> Vec2;
struct Tll { LL first, second, third; };
typedef pair<LL, Tll> Ptll;
#define rep(i,rept) for(LL i=0;i<rept;i++)
#define Mfor(i,mf) for(LL i=mf-1;i>=0;i--)
LL h, w, n, m, k, s, t, q, sum, last, cnt, ans = 0;
Pll a[110] = {};
LL d[1010][1010] = {};
int dd[4][2] = { {1,0},{0,1},{ -1,0 },{ 0,-1 } };
string str,ss;
struct Edge { LL cost, from, to; };
vector<Edge>vec;
bool f;
char c[10000][10000];
void YN(bool f) {
	if (f)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
void yn(bool f) {
	if (f)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
LL bfs(Pll s,Pll t) {
	queue<Ppll>qu;
	d[s.fir][s.sec] = 0;
	qu.push(Ppll(d[s.first][s.second], s));
	while (!qu.empty()) {
		Ppll pp = qu.front();
		Pll pos = pp.second;
		qu.pop();
		if (pos == t)break;
		if (pp.fir > d[pos.fir][pos.sec])continue;
		rep(i, 4) {
			LL X = pos.first + dd[i][0], Y = pos.second + dd[i][1];
			if (X < h&&Y<w&&X>=0&&Y>=0&&d[X][Y]>d[pos.fir][pos.sec] + 1&&c[X][Y]== '.') {
				d[X][Y] = d[pos.first][pos.second] + 1;
				qu.push(Ppll(d[X][Y], Pll(X, Y)));
			}
		}
	}
	return d[t.fir][t.sec];
}
int main() {
	cin >> h >> w >> n;
	rep(i, h)rep(j, w) {
		cin >> c[i][j];
		if (c[i][j] == 'S' || (c[i][j] > '0'&&c[i][j] <= '9')) {
			if (c[i][j] == 'S')
				a[0] = Pll(i, j);
			else
				a[c[i][j] - '0'] = Pll(i, j);
			c[i][j] = '.';
		}
	}
	rep(i, n) {
		rep(j, 1010)rep(k, 1010)d[j][k] = INF/2;
		ans += bfs(a[i],a[i+1]);
	}
	cout << ans << endl;
	return 0;
}
