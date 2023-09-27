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
#include <math.h>
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
int w, h;
bool c[55][55];
int ans=0;

void dfs(int nowy, int nowx) {
	c[nowy][nowx] = 0;
	for (int i = -1; i < 2; i++) {
		for (int j = -1; j < 2; j++) {
			if (nowy == 0 && i == -1)continue;
			if (nowx == 0 && j == -1)continue;
			if (nowy == h - 1 && i == 1)continue;
			if (nowx == w - 1 && j == 1)continue;
			if (c[nowy + i][nowx + j] == 1) {
				dfs(nowy + i, nowx + j);
			}
		}
	}
}



int main() {
	while (cin >> w >> h, w) {
		ans = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> c[i][j];
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (c[i][j] == 1) {
					dfs(i, j);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
}