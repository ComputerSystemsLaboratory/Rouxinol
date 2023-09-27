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
	int32 n, m, p;
	while(cin >> n >> m >> p && (n || m || p)){
		vector<int32> x(n);
		int32 sum = 0;
		REP(i, n){
			cin >> x[i];
			sum += x[i];
		}
		int32 res = 0;
		if(x[m-1] != 0){
			sum = (sum*100-sum*p);
			while(res*x[m-1] <= sum) res++;
			res--;
		}
		else res = 0;
		cout << res << endl;
	}
}
