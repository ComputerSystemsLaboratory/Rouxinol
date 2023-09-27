//--------------------------------------------------template----------------------------------------//
//c
#include <stdio.h>
#include <time.h>
#include <math.h>
//c++
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <sstream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <complex>
#include <cmath>
//c++11
#include <tuple>
#define all(c) ((c).begin(),(c).end())
#define rall(c) (c).rbegin(),(c).rend()
//#define sort(v,n) sort(v,v+n)
//#define vsort(v) sort(v.begin(),v.end())
//#define vvsort(v) sort(v.begin(),v.end(),greater<int>())
#define ll long long
#define pb(a) push_back(a)
#define fi first
#define se second
#define inf 999999999
using namespace std;
const ll MOD = 1e9 + 7;
const double PI = acos(-1.0);
//---------------------------------------------------------------------------------------------//
int n;
int m;
int d[10001], p[10001];

int main() {
	while (cin >> n >> m, n) {
		vector<pair<int, int>> v;
		for (int i = 0; i < n; i++) {
			cin >> d[i] >> p[i];
			v.push_back(pair<int, int>(p[i], d[i]));
		}
		sort(v.rbegin(), v.rend());
		for (int i = 0; i < n; i++) {
			if (v[i].second <= m) {
				m -= v[i].second;
				v[i].second = 0;
			}
			else {
				v[i].second -= m;
				m = 0;
			}
		}
		ll ans = 0;
		for (int i = 0; i < n; i++) {
			ans += (v[i].first)*(v[i].second);
		}
		cout << ans << endl;
	}
	return 0;
}