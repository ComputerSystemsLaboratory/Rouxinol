#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <functional>
#include <string>
#include <cstdlib>
#include <numeric>
#include <cstdbool>
#include <cstring>
#include <map> 
#include <set>
#include <queue>
#include <iomanip>
#include <sstream>
typedef long long ll;

#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1000000000000000;
const ll inf = -1e18;
typedef pair<ll, ll> P;
ll ma = 1000000000 + 7;
ll mx = 1000003;
ll h,n, w,m,t; string s;
ll R, C;
ll sy, sx, gy, gx;
char maze[510][510];
ll dis[20][20];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
ll gcd(ll x, ll y) {
	if (x % y == 0) return y;
	return gcd(y, x % y);
}
ll lcm(ll a,ll b) {
	ll g = gcd(a, b);
	return a / g * b;
}
void comb(vector<vector <ll> >& v) {
	for (ll i = 0; i < v.size(); i++) {
		v[i][0] = 1;
		v[i][i] = 1;
	}
	for (ll k = 1; k < v.size(); k++) {
		for (int j = 1; j < k; j++) {
			v[k][j] = (v[k - 1][j - 1] + v[k - 1][j])%ma;
		}
	}
}

ll GetDigit(ll num) {
	return log10(num) + 1;
}
ll Combination(int n, int r)
{
	if (n - r < r) r = n - r;
	if (r == 0) return 1;
	if (r == 1) return n;

	vector<ll> numerator(r);
	vector<ll> denominator(r);

	for (int k = 0; k < r; k++)
	{
		numerator[k] = n - r + k + 1;
		denominator[k] = k + 1;
	}

	for (int p = 2; p <= r; p++)
	{
		int pivot = denominator[p - 1];
		if (pivot > 1)
		{
			int offset = (n - r) % p;
			for (int k = p - 1; k < r; k += p)
			{
				numerator[k - offset] /= pivot;
				denominator[k] /= pivot;
			}
		}
	}

	ll result = 1;
	for (int k = 0; k < r; k++)
	{
		if (numerator[k] > 1) result *= numerator[k];
		result %= ma;
	}

	return result;
}
/*
ll bfs() {
	queue<P> que;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) dis[i][j] = INF;
	}
	que.push(P(sy - 1, sx - 1));
	dis[sy - 1][sx - 1] = 0;

	while (que.size() > 0) {
		P p = que.front();
		que.pop();
		if (p.first == gy - 1 && p.second == gx - 1) break;
		for (ll i = 0; i < 4; i++) {
			ll ny = p.first + dy[i];
			ll nx = p.second + dx[i];
			if (0 <= ny && ny < R && 0 <= nx && nx < C && maze[ny][nx] == '.' && dis[ny][nx] == INF) {
				que.push(P(ny, nx));
				dis[ny][nx] = dis[p.first][p.second] + 1;
			}
		}
	}
	return dis[gy - 1][gx - 1];
}*/
int main() {
	cin >> n;
	vector<ll> a(n);
	map<ll, ll> mp;
	rep(i, n) {
		cin >> a[i];
		mp[a[i]]++;
	}
	ll q;
	cin >> q;
	vector<P> bc(q);
	rep(i, q) {
		cin >> bc[i].first >> bc[i].second;
	}
	ll sum = 0;
	rep(i, n) {
		sum += a[i];
	}
	rep(i, q) {
		sum -= bc[i].first * mp[bc[i].first];
		sum += bc[i].second * mp[bc[i].first];
		mp[bc[i].second] += mp[bc[i].first];
		mp[bc[i].first] = 0;
		cout << sum << endl;
	}
}
