#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
#include <queue>
#include <functional>
#include <string>
#include <stack>
#include <set>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cstring>

using namespace std;
using ll = long long;
typedef unsigned long long ull;
typedef pair<ll, ll> P;
typedef pair<string, string> sP;
typedef pair<ll, pair<ll, ll>> PP;

const ll mod = 1e4;
const ll MOD = 1e9 + 7;
const ll MOD2 = 998244353;
const ll INF = 1 << 30;
const ll INF2 = 9e18;
const double INF3 = 9e14;
const int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
const int tx[8] = { -1,0,1,-1,1,-1,0,1 }, ty[8] = { -1,-1,-1,0,0,1,1,1 };
#define ALL(x) (x).begin(),(x).end()
#define ALLR(x) (x).rbegin(),(x).rend()
#define pb push_back
#define eb emplace_back
#define fr first
#define sc second

ll bit[1000010] = { 0 }, n = 200001;

void add(ll a, ll w) {
	for (int x = a; x <= n + 2; x += x & -x) bit[x] += w;
}
int SUM(ll a) {
	ll ret = 0;
	for (int x = a; x > 0; x -= x & -x) ret += bit[x];
	return ret;
}

int main() {
	ll n, a[200010], b[200010], ans = 0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	for (int i = 0;i < n;i++) {
		a[i] = lower_bound(b, b + n, a[i]) - b + 1;
	}
	for (int i = 0;i < n;i++) {
		add(a[i], 1);
	}
	for (int i = n - 1;i >= 0;i--) {
		ans += SUM(n) - SUM(a[i]);
		add(a[i], -1);
	}
	cout << ans << endl;
	return 0;
}
