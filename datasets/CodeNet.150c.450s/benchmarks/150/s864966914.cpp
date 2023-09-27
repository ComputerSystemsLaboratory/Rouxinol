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

vector<int> countingSort(const vector<int> &a, int k) {
	int n = a.size();
	vector<int> res(k + 1, 0);
	vector<int> ans(n);
	REP(i, n) {
		res[a[i]]++;
	}
	REP(i, k) {
		res[i + 1] += res[i];
	}
	RREP(i, n) {
		ans[res[a[i]]-1] = a[i];
		res[a[i]]--;
	}
	return ans;
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k = 10000;
	cin >> n;
	vector<int> a(n);
	REP(i, n) {
		cin >> a[i];

	}
	vector<int> v=countingSort(a, k);
	REP(i, n) {
		cout << v[i];
		if (i == n - 1) cout << endl;
		else cout << " ";
	}
	return 0;
}