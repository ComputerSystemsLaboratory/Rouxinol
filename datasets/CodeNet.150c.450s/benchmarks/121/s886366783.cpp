#include <iostream>
#include <queue>
#include <map>
#include <stack>
#include <bitset>
#include <string>
#include <set>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <ctime>
//#include<bits/stdc++.h>
using namespace std;
#define maxn 107
#define maxm 444
#define modn 998244353
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define scans(a) scanf("%s",a)
#define scand(a) scanf("%lf",&a)
#define scan2(a,b) scanf("%d%d",&a,&b)
#define scand2(a,b) scanf("%lf%lf",&a,&b)
#define scan3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define mp      make_pair	
#define pb      push_back
#define eb      emplace_back
#define mm(a,b) memset(a,b,sizeof a)
typedef long long ll;
typedef unsigned long long ull;
const ll base = 100000;
const int inf = 0x3f3f3f3f;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef map <char, int> mci;
typedef map <char, char> mcc;
typedef pair <char, int> pci;
typedef unsigned long long ull;

const double eps = 1e-11;
const double PI = 2 * acos(0.0);
const double sqrt2 = sqrt(2);

int main() {
	int w, h;
	queue<pii> q;
	int vis[maxn][maxn];
	char g[maxn][maxn];
	int d[4][2] = { -1,0,1,0,0,-1,0,1 };
	while (cin >> h >> w && w) {
		for (int i = 0; i < h; i++)
			scans(g[i]);
		memset(vis, 0, sizeof vis);
		char now;
		int res = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (vis[i][j])continue;
				now = g[i][j];
				q.push(make_pair(i, j));
				vis[i][j] = 1;
				res++;
				while (!q.empty()) {
					int x = q.front().first, y = q.front().second;
					q.pop();
					int nx, ny;
					for (int i = 0; i < 4; i++) {
						nx = x + d[i][0], ny = y + d[i][1];
						if (nx < h && nx >= 0 && ny < w && ny >= 0 && g[nx][ny] == now && !vis[nx][ny]) {
							q.push(make_pair(nx, ny));
							vis[nx][ny] = 1;
						}
					}
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}
