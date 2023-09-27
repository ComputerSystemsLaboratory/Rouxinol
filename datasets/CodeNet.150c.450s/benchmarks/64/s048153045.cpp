#include "bits/stdc++.h"

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

const int dx[8] = { 1,1,0,-1,-1,-1,0,1 };
const int dy[8] = { 0,1,1,1,0,-1,-1,-1 };

using namespace std;


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n;
	vector<int> v(n);
	int sum = 0;
	REP(i, n) {
		cin >> v[i];
		sum += v[i];
	}
	vector<bool> ans(sum + 1, false);

	for (int j = 0; j < 1 << n; ++j) {
		int s=0;
		int a = j;
		REP(i, n) {
			s += v[i] * (a & 1);
			a >>= 1;
		}
		ans[s] = true;
	}
    cin >> m;

	REP(i, m) {
		int a;
		cin >> a;
		if (a<=sum&&ans[a]) cout << "yes" << endl;
		else cout << "no" << endl;
	}


	return 0;
}