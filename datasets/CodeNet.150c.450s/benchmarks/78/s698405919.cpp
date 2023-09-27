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
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,sizeof(a))
#define WRAP(y,x,h,w) (0<=y && y<h && 0<=x && x<w)

typedef long long ll;
typedef unsigned long long ull;
typedef string str;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<vd> vvd;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = { -1,0,1,0 }; const int dy[] = { 0,1,0,-1 };

int main() {
	vi sikaku;
	vi sikaku2;
	int cnt = 1;
	while (cnt*(cnt + 1)*(cnt + 2) / 6 <= 1000000) {
		sikaku.push_back(cnt*(cnt + 1)*(cnt + 2) / 6);
		if (cnt*(cnt + 1)*(cnt + 2) / 6 % 2 == 1)
			sikaku2.push_back(cnt*(cnt + 1)*(cnt + 2) / 6);
		cnt++;
	}
	int n;

	while (cin >> n, n) {
		vi memo(n + 1, 1e9);
		vi memo2(n + 1, 1e9);
		memo[n] = 0;
		memo2[n] = 0;
		queue<int> Q;
		Q.push(n);
		while (!Q.empty()) {
			int q = Q.front(); Q.pop();
			if (q == 0)
				break;
			REP(i, sikaku.size()) {
				if (q >= sikaku[i]) {
					if (memo[q - sikaku[i]] > memo[q] + 1) {
						memo[q - sikaku[i]] = memo[q] + 1;
						Q.push(q - sikaku[i]);
					}
				}
				else
					break;
			}
		}
		queue<int> Q2;
		Q2.push(n);
		while (!Q2.empty()) {
			int q = Q2.front(); Q2.pop();
			if (q == 0)
				break;
			REP(i,sikaku2.size()) {
				if (q >= sikaku2[i]) {
					if (memo2[q - sikaku2[i]] > memo2[q] + 1) {
						memo2[q - sikaku2[i]] = memo2[q] + 1;
						Q2.push(q - sikaku2[i]);
					}
				}
				else
					break;
			}
		}
		cout << memo[0] << " " << memo2[0] << endl;

	}
	return 0;
}