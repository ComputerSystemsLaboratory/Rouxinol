#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>
#include <functional>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,sizeof(a))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = { -1, 0, 1, 0 }; const int dy[] = { 0, 1, 0, -1 };
const int dx2[] = { -1,-1, 0,1,1, 1, 0,-1 }; const int dy2[] = { 0,-1,-1,-1,0, 1, 1, 1 };
struct UnionFind {
	vector<int> v;
	UnionFind(int n) : v(n)  { for (int i = 0; i < n; i++) v[i] = i; }
	int  find(int x)         { return v[x] == x ? x : v[x] = find(v[x]); }
	void unite(int x, int y) { v[find(x)] = find(y); }
};
int h, w;
int cell[50][50];
int main() {
	while (cin>>w>>h,h) {

		REP(i, h)
			REP(j, w)
			cin >> cell[i][j];
		int ans = 0;
		REP(i, h)
			REP(j, w)
			if (cell[i][j] == 1) {
				ans++;
				queue<pii> Q;
				Q.push(pii(i, j));
				cell[i][j] = 0;
				while (!Q.empty()){
					pii q = Q.front();Q.pop();
					int y = q.first;
					int x = q.second;
					REP(k,8) {
						if (0 <= y + dy2[k] && y + dy2[k] < h && 0 <= x + dx2[k] && x + dx2[k] < w &&cell[y + dy2[k]][x + dx2[k]]) {
							cell[y + dy2[k]][x + dx2[k]] = 0;
							Q.push(pii( y + dy2[k], x + dx2[k]));
						}
					}
				}
			}
		cout << ans << endl;
	}
}