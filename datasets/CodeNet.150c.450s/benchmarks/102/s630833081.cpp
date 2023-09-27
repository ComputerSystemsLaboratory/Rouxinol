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

struct UnionFind {
	vector<int> v;
	UnionFind(int n) : v(n)  { for (int i = 0; i < n; i++) v[i] = i; }
	int  find(int x)         { return v[x] == x ? x : v[x] = find(v[x]); }
	void unite(int x, int y) { v[find(x)] = find(y); }
};

int main() {
	int w, h;
	while (cin >> w >> h, w){
		vector<string> cell(h);
		int sx=-1, sy;
		REP(i, h){
			cin >> cell[i];
			if (sx==-1)
			REP(j, w){
				if (cell[i][j] == '@'){
					sx = j;
					sy = i;
					cell[i][j] = '#';
				}
			}
		}
		queue<pair<int, int>> Q;
		Q.push(pair<int, int>(sx, sy));
		int ans = 0;
		while (!Q.empty()){
			ans++;
			pair<int, int> p = Q.front(); Q.pop();
			REP(i, 4){
				if (0 <= p.first + dx[i] && p.first + dx[i] < w && 0 <= p.second + dy[i] && p.second + dy[i] < h&&cell[p.second + dy[i]][p.first + dx[i]] == '.'){
					cell[p.second + dy[i]][p.first + dx[i]] = '#';
					Q.push(pair<int, int>(p.first + dx[i], p.second + dy[i]));
				}
			}
		}
		cout << ans << endl;
	}
}