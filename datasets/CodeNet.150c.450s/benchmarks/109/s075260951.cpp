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
	int n;
	while (cin >> n, n) {
		vector<pair<int, bool>> jikoku;
		REP(i, n) {
			string s;
			cin >> s;
			jikoku.push_back({ (s[0]-'0')*36000+ (s[1] - '0') * 3600 + (s[3] - '0') * 600 + (s[4] - '0') * 60 + (s[6] - '0') * 10 + (s[7] - '0') * 1,true });
			cin >> s;
			jikoku.push_back({ (s[0] - '0') * 36000 + (s[1] - '0') * 3600 + (s[3] - '0') * 600 + (s[4] - '0') * 60 + (s[6] - '0') * 10 + (s[7] - '0') * 1,false });
		}
		SORT(jikoku);
		int cnt = 0;
		int ans = 0;
		REP(i, n * 2) {
			if (jikoku[i].second) {
				cnt++;
			}
			else {
				cnt--;
			}
			ans = max(ans, cnt);
		}
		cout << ans << endl;
	}

}