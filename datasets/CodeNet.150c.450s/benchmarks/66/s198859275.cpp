#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define DBG 1
#define dump(o) if(DBG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)
#define all(c) c.begin(),c.end()
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9 + 7);

signed main() {
	int N; cin >> N;
	vector<string> U(N); rep(i, 0, N) { cin >> U[i]; }
	int M; cin >> M;
	vector<string> T(M); 
	bool isopened = false;
	rep(i, 0, M) {
		cin >> T[i];
		if (count(U.begin(), U.end(), T[i])) {
			if (isopened)cout << "Closed by "+T[i] << endl;
			else cout << "Opened by " + T[i] << endl;
			isopened = !isopened;
		}
		else
			cout << "Unknown " + T[i] << endl;
	}
	return 0;
}