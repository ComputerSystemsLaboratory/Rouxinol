#define _CRT_SECURE_NO_WARNINGS // #pragma warning(disable:4996)
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <functional>
#include <sstream>
#include <cmath>
#include <set>
#include <map>
using namespace std; 

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define all(a) a.begin(),a.end()
#define len(x) ((int)(x).size())
#define tmax(a,b,c) max((a),max((b),(c)))
#define tmin(a,b,c) min((a),min((b),(c)))
#define debug(x) cerr << #x << " is " << x << endl;

typedef pair<int, int> Pii;
typedef vector<int> Vi;
typedef vector<vector<int> > VVi;
typedef long long ll;
const int inf = 2e9;
const ll ll_inf = 1e17;
const int mod = 1e9 + 7;
const long double eps = 1e-10;

int p[201];

int main()
{
	while(1) {
		int m, nmin, nmax;
		cin >> m >> nmin >> nmax;
		if (!m && !nmin && !nmax) break;
		memset(p, 0, sizeof(p));
		rep(i,0,m) cin >> p[i];

		int ans = 0, d = 0;
		rep(n,nmin,nmax+1) {
			int a = p[n-1] - p[n];
			if (a >= d) {
				ans = n;
				d = a;
			}
		}
		cout << ans << endl;
	}

	return 0;
}