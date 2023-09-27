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
long long MOD = 1000000000+7;
constexpr long long INF = std::numeric_limits<LL>::max();
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
LL h, w, n, m, k, s, t, q, last, cnt, ans, sum,a[201000], b[201000];
string str[1000], ss[1000];
bool f;
char c;
int di[4][2] = { { 0,1 },{ 1,0 },{ -1,0 } ,{ 0,-1 } };
struct Edge { LL to, cost; };
vector<Edge>vec[10000];
set<LL>st;
void YN(bool f) {
	if (f)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
class BIT {
public:
	vector<LL> Bit;
	LL M;
	BIT(LL n_) {
		M = 1;
		while (n_ > M) {
			M *= 2;
		}
		Bit.resize(M+1);
	}
	LL sum(LL i) {
		LL s = 0;
		while (i>0) {
			s += Bit[i];
			i -= (i&(-i));
		}
		return s;
	}
	LL sum(LL i, LL j) {
		return sum(j) - sum(i - 1);
	}
	void add(LL i, LL x) {
		while (i <= M) {
			Bit[i] += x;
			i += (i&(-i));
		}
	}
};

int main() {
	cin >> n;
	BIT bit(200100 + 1);
	rep(i, n) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	rep(i,n){
		auto it = lower_bound(b, b + n, a[i])-b;
		LL x = it;
		x++;
		ans += i - bit.sum(x);
		bit.add(x, 1);
	}
	cout << ans << endl;
	return 0;
}
