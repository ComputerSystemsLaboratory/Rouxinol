#include <bits/stdc++.h>
using namespace std;

#define INF_LL (int64)1e18
#define INF (int32)1e9
#define REP(i, n) for(int i = 0;i < (n);i++)
#define FOR(i, a, b) for(int i = (a);i < (b);i++)
#define all(x) x.begin(),x.end()
#define fs first
#define sc second

using int32 = int_fast32_t;
using uint32 = uint_fast32_t;
using int64 = int_fast64_t;
using uint64 = uint_fast64_t;
using PII = pair<int32, int32>;
using PLL = pair<int64, int64>;

const double eps = 1e-6;

template<typename A, typename B>inline void chmin(A &a, B b){if(a > b) a = b;}
template<typename A, typename B>inline void chmax(A &a, B b){if(a < b) a = b;}

const int64 mod = 1e9+7;

int main(void){
	int32 n, m;
	while(cin >> n >> m && n && m){
		vector<int32> a(n), b(m);
		int32 sa = 0, sb = 0;
		REP(i, n){
			cin >> a[i]; sa+=a[i];
		}
		REP(i, m){
			cin >> b[i]; sb+=b[i];
		}
		int32 x = INF, y = INF;
		REP(i, n){
			REP(j, m){
				if(sa-a[i]+b[j] == sb-b[j]+a[i]){
					if(x+y > a[i]+b[j]){
						x = a[i]; y = b[j];
					}
				}
			}
		}
		if(x == INF && y == INF) cout << -1 << endl;
		else cout << x << " " << y << endl;
	}
}
