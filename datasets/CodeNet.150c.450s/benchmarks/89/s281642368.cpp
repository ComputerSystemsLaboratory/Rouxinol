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

#define MAX_N 1000000

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	vector<bool> b(MAX_N, true);
	b[0] = false;
	b[1] = false;
	for (int i = 2; i < sqrt(MAX_N);++i) {
		if (b[i]) for (int j = i + i;j < MAX_N;j += i) b[j] = false;
	}

	int a, d, n;
	while (cin >> a >> d >> n) {
		if (!n) break;
		int cnt = 0;
		while (cnt<n) {
			if (b[a]) cnt++;
			a += d;
		}
		cout << a-d << endl;
	}
	return 0;
}