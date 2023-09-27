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

int g[21][21];
int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};

int main()
{
	while(1) {
		int n, m;
		cin >> n;
		if (!n) break;
		memset(g, 0, sizeof(g));
		rep(i,0,n) {
			int a, b; cin >> a >> b;
			g[a][b]++;
		}

		cin >> m;
		int tx = 10, ty = 10;
		int cnt = 0;
		rep(i,0,m) {
			char a;
			int b; 
			cin >> a >> b;
			int d;
			if (a == 'N') d = 0;
			else if (a == 'E') d = 1;
			else if (a == 'S') d = 2;
			else if (a == 'W') d = 3;
			rep(j,0,b) {
				tx += dx[d];
				ty += dy[d];
				if (g[tx][ty]) {
					cnt++;
					g[tx][ty]--;
				}
			}
		}
		if (cnt == n) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}