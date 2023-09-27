#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define DEBUG 0
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()
#define dump(o) if(DEBUG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DEBUG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
using ll = long long; using ull = unsigned long long; using pii = pair<int, int>;
static const int INF = 0x3f3f3f3f; static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;
static const int MOD = 1e9 + 7;

signed main() {
	for (int m, f, r; cin >> m >> f >> r && !(m == -1 && f == -1 && r == -1);) {
		if (m == -1 || f == -1)cout << "F" << endl;
		else if (m + f >= 80)cout << "A" << endl;
		else if(m + f >= 65)cout << "B" << endl;
		else if (m + f >= 50)cout << "C" << endl;
		else if (m + f >= 30) {
			if (r >= 50)cout << "C" << endl;
			else cout << "D" << endl;
		}
		else cout << "F" << endl;
	}
	return 0;
}