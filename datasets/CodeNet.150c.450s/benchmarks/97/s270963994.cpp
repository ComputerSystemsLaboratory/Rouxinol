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

int dy[4] = {0,-1,0,1}; // w s e n
int dx[4] = {-1,0,1,0};

int main()
{
	while(1) {
		int n;
		cin >> n;
		if (!n) break;
		int w = 0, h = 0;
		int top = 0, bot = 0, left = 0, right = 0;
		vector<Pii> vp;
		vp.pb(mp(h,w));
		rep(i,1,n) {
			int a, b;
			cin >> a >> b;
			int y = vp[a].first;
			int x = vp[a].second;
			y += dy[b];
			x += dx[b];
			if (x < left) left = x;
			if (x > right) right = x;
			if (y < bot) bot = y;
			if (y > top) top = y;
			vp.pb(mp(y,x));
			//printf("x=%d y=%d left=%d bot=%d right=%d top=%d\n", x, y, left, bot, right, top);
		}
		int width = abs(left) + abs(right) + 1;
		int height = abs(top) + abs(bot) + 1;
		cout << width << " " << height << endl;
	}

	return 0;
}