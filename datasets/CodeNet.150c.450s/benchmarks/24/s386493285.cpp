#include "bits/stdc++.h"

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=n-1;i>=m;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007
#define EPS 1e-9

const int dx[8] = { 1,1,0,-1,-1,-1,0,1 };
const int dy[8] = { 0,1,1,1,0,-1,-1,-1 };

typedef long long ll;
using namespace std;

bool paircmp(pair<int, int> a, pair<int, int> b) {
	return a.second > b.second;
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		int n, m,ans=0;
		cin >> n >> m;
		if (!n) break;
		vector<pair<int, int>> v(n);
		REP(i, n) {
			int a, b;
			cin >> a >> b;
			v[i] = { a,b };
		}
		sort(ALL(v), paircmp);
		REP(i, n) {
			int a = min(m, v[i].first);
			m -= a;
			v[i].first -= a;
			ans += v[i].first*v[i].second;
		}
		cout << ans << endl;
	}
	return 0;
}