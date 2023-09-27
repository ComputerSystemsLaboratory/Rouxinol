#include "bits/stdc++.h"

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

using namespace std;


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int m, minn, maxn;
	while (1) {
		cin >> m >> minn >> maxn;
		if (!m) break;
		vector<int> v(m);
		REP(i, m) {
			cin >> v[i];
		}
		int gap = -INF, ans = 0;
		FOR(i, minn, maxn + 1) {
			if (gap <= v[i - 1] - v[i]) {
				gap = v[i - 1] - v[i];
				ans = i;
			}
		}
		cout << ans << endl;
	}
	return 0;
}