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
	int32 N, M;
	while(cin >> N >> M && N+M){
		vector<int64> h(N+1), w(M+1);
		REP(i, N) cin >> h[i+1];
		REP(i, N) h[i+1] += h[i];
		map<int64, int64> cnt;
		REP(i, N+1){
			FOR(j, i+1, N+1){
				cnt[h[j]-h[i]]++;
			}
		}
		REP(i, M) cin >> w[i+1];
		REP(i, M) w[i+1] += w[i];
		int64 res = 0;
		REP(i, M+1){
			FOR(j, i+1, M+1){
				res += cnt[w[j]-w[i]];
			}
		}
		cout << res << endl;
	}
}
