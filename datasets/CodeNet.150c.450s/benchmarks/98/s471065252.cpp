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
	int n, m;
	while (cin>>n>>m,n) {
		vi taro(n);
		vi hanako(m);
		int ts = 0;
		int hs = 0;
		REP(i, n) {
			cin >> taro[i];
			ts += taro[i];
		}
		REP(i, m) {
			cin >> hanako[i];
			hs += hanako[i];
		}
		SORT(taro);
		SORT(hanako);
		bool clear = false;
		int idx1=999999;
		int idx2=999999;
		REP(i,n) {
			REP(j,m) {
				if ((taro[i] - hanako[j]) * 2 == ts - hs) {
					if (idx1 + idx2 > taro[i] + hanako[j]) {
						idx1 = taro[i];
						idx2 = hanako[j];
						clear = true;
					}
				}
			}
		}
		if (!clear)
			cout << -1 << endl;
		else
			cout << idx1 << " " << idx2 << endl;
	}
}