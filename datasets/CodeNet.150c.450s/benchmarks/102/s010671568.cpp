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
#include <tuple>
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
char a[21][21];

int bfs(int sh,int sw) {
	//cout<<"--------------------------------------------"<<endl;
	int ans = 1;
	queue<pair<int,int> > q;
	q.push(pair<int,int>(sh, sw));
	while (!q.empty())
	{
		//for (int i = 0; i < h; i++) {
			//for (int j = 0; j < w; j++) {
				//cout << a[i][j] << " ";
			//}
			//cout << endl;
		//}

		//cout << ans << endl;
		int nowx, nowy;
		nowy = q.front().first;
		nowx = q.front().second;
		//cout << nowy << " " << nowx << endl;
		q.pop();
		if (a[nowy][nowx + 1] == '.' && nowx<w-1) {
			q.push(pair<int,int>(nowy, nowx + 1));
			a[nowy][nowx + 1] = '#';
			ans++;
		}
		if (a[nowy][nowx - 1]=='.' && nowx>0) {
			q.push(pair<int,int>(nowy, nowx - 1));
			a[nowy][nowx - 1] = '#';
			ans++;
		}
		if (a[nowy + 1][nowx] == '.' && nowy<h-1) {
			q.push(pair<int,int>(nowy + 1, nowx));
			a[nowy + 1][nowx] = '#';
			ans++;
		}
		if (a[nowy - 1][nowx] == '.' && nowy>0) {
			q.push(pair<int,int>(nowy - 1, nowx));
			a[nowy - 1][nowx] = '#';
			ans++;
		}
	}
	return ans;
}

int main() {
	while (cin >> w >> h, w) {
		int sw, sh;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> a[i][j];
				if (a[i][j] == '@') {
					sw = j;
					sh = i;
				}
			}
		}
		cout << bfs(sh, sw) << endl;
	}
}