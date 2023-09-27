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
int n, a, b, c, x;
int y[101];
int main() {
	while (cin >> n >> a >> b >> c >> x) {
		for (int i = 0; i < n; i++) {
			cin >> y[i];
		}
		if (n == 0)return 0;
		int cont = 0, icont = 0;
		if (x == y[0])icont++;
		while (cont <= 10000 && icont<n) {
			x = (a*x + b) % c;
			if (x == y[icont]) {
				icont++;
			}
			cont++;
		}
		if (cont > 10000) {
			cout << -1 << endl;
		}
		else cout << cont << endl;
	}
}