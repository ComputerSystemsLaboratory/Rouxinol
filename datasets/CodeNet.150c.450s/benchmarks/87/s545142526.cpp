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
#define debugg(g,h,w) rep(i,0,h) { rep(j,0,w) cout << g[i][j] << " "; cout << endl;}
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

int g[10][5];
int n;
int score;

int check()
{
	int ret = 0;

	rep(i,0,n) rep(j,0,3) {
		if (g[i][j] > 0 && g[i][j] == g[i][j+1] && g[i][j] == g[i][j+2]) {
			int num = g[i][j];
			int same = 0;
			int jj = j;
			while (jj < 5) {
				if (g[i][jj] == num) {
					same++;
					g[i][jj] = -1;
					jj++;
				}
				else break;
			}
			score += num * same;
			ret++;
			continue;
		}
	}
	return ret;
}

void down()
{
	bool update = true;
	while (update) {
		update = false;
		rep(i,0,n-1) rep(j,0,5) {
			if (g[i][j] > 0 && g[i+1][j] == -1) {
				swap(g[i][j], g[i+1][j]);
				update = true;
			}
		}
	}
}

int main()
{
	Vi vans;
	while (1) {
		cin >> n;
		if (!n) break;
		rep(i,0,n) rep(j,0,5) cin >> g[i][j];
		score = 0;
		
		while (1) {
			int a = check();
			if (!a) break;
			down();
			//debugg(g,n,5);
			//debug(score);
		}
		//cout << score << endl;
		vans.pb(score);
	}
	for (auto a:vans) cout << a << endl;
	return 0;
}