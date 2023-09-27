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
#include <stack>
using namespace std; 

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define all(a) a.begin(),a.end()
#define len(x) ((int)(x).size())
#define tmax(a,b,c) max((a),max((b),(c)))
#define tmin(a,b,c) min((a),min((b),(c)))
#define debug(x) cerr << #x << " is " << x << endl;
#define debug2(x,y) cerr << #x << " is " << x << " " << #y << " is " << y << endl;
#define debuga(g,h,w) rep(i,0,h) { rep(j,0,w) cout << g[i][j] << " "; cout << endl;}
#define debugv(v) for(auto&& x : v){cout << x << " ";} cout << endl;

typedef pair<int, int> Pii;
typedef map<int, int> Mii;
typedef vector<int> Vi;
typedef vector<vector<int> > VVi;
typedef long long ll;
const int inf = 2e9;
const ll ll_inf = 1e17;
const int mod = 1e9 + 7;
const long double eps = 1e-10;
typedef pair<ll, ll> Pll; 

int g[101010];

int calc(int h, int m, int s) 
{
	return h*60*60 + m*60 + s;
}

int main()
{
	int n;
	while (cin >> n && n != 0) {
		memset(g,0,sizeof(g));
		rep(i,0,n) {
			Vi a(3);
			char b, c;
			rep(j,0,3) {
				cin >> b >> c;
				b=='0' ? a[j] = (int)(c-'0') : a[j] = (int)(b-'0')*10 + (int)(c-'0');
				if (j != 2) cin >> b;
			}
			g[calc(a[0], a[1], a[2])]++;
			rep(j,0,3) {
				cin >> b >> c;
				b=='0' ? a[j] = (int)(c-'0') : a[j] = (int)(b-'0')*10 + (int)(c-'0');
				if (j != 2) cin >> b;
			}
			g[calc(a[0], a[1], a[2])]--;
		}
		int ans = 0;
		rep(i,1,101010) {
			g[i] = g[i] + g[i-1];
			ans = max(ans, g[i]);
		}
		cout << ans << endl;
	}

	return 0;
}