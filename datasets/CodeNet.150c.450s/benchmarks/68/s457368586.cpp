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
	int n;
	while (cin >> n&&n != 0) {
		vector<int>  v(n);
		int cmin = INF;
		REP(i, n) {
			cin >> v[i];
		}
		REP(i, n) {
			REP(j, n) {
				if(i!=j)
				cmin = min(cmin, abs(v[i] - v[j]));
			}
		}
		cout << cmin << endl;
	}

	return 0;
}