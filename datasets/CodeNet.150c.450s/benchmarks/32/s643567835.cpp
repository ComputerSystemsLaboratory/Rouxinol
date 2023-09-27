#include <stdio.h>
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
#include <complex>
#include <vector>
#include <cstdio>
#include <cmath>
#include <time.h>
#define all(c) ((c).begin(),(c).end())
#define rall(c) (c).rbegin(),(c).rend()
#define sort(v,n) sort(v,v+n)
#define vsort(v) sort(v.begin(),v.end())
#define vvsort(v) sort(v.begin(),v.end(),greater<int>())
#define ll long long
#define pb(a) push_back(a)
#define fi first
#define se second
#define inf 999999999
using namespace std;
const ll MOD = 1e9 + 7;
const double PI = acos(-1.0);
//---------------------------------------------------------------------------------------------//
int m, nmax, nmin;
int a[210];
int main() {
	while (cin >> m >> nmin >> nmax) {
		if (m == 0)return 0;
		int sa = 0;
		int ansi=nmin;
		for (int i = 0; i < m; i++)cin >> a[i];
		for (int i = nmin ; i <= nmax; i++) {
			int now = sa;
			sa = max(sa, a[i-1] - a[i]);
			if (sa != now)ansi = i;
			if (a[i - 1] - a[i] == now)ansi = i;
		}
		cout << ansi << endl;
	}
}