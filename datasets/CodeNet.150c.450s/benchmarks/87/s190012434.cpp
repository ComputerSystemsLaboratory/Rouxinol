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
	int h;
	while (cin >> h, h) {
		vvi cell(h, vi(5));
		int sum = 0;
		REP(i, h)
			REP(j, 5) {
			cin >> cell[i][j];
			sum += cell[i][j];
		}
		bool change;
		do {
			change = false;
			REP(i, h) {
				int a = -1;
				int cnt = 1;
				REP(j, 5) {
					if (cell[i][j] == a) {
						cnt++;
					}
					else {
						cnt = 1;
					}
					a = cell[i][j];
					if (cnt >= 3 && a != 0)
						FOR(k, j - cnt + 1, j + 1) {
						cell[i][k] = 0;
						change = true;
					}

				}
			}
			REP(k,h){
			for (int i = h - 1;i > 0;i--) {
				REP(j, 5)
					if (cell[i][j] == 0) {
						cell[i][j] = cell[i - 1][j];
						cell[i - 1][j] = 0;
					}
			}
		}
		 } while (change);
		 
		 REP(i, h)
			 REP(j, 5)
			 sum -= cell[i][j];
		 cout << sum << endl;
	}
}