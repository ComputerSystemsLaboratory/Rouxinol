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

int32 dx[4] = {-1, 1, 0, 0};
int32 dy[4] = {0, 0, 1, -1};
int32 dir[1000] = {};

int main(void){
	int32 n, r;
	dir['N']=2; dir['E']=1; dir['W']=0; dir['S'] = 3;
	while(cin >> n && n){
		int32 cnt = n;
		bool f[30][30] = {};
		int32 y = 10, x = 10;
		REP(i, n){
			int32 a, b;
			cin >> a >> b;
			f[b][a] = 1;
			if(a == 10 && b == 10){
				f[b][a] = 0; cnt--;
			}
		}
		int32 q;
		cin >> q;
		REP(i, q){
			char c; int32 dis;
			cin >> c >> dis;
			REP(j, dis){
				y = y+dy[dir[c]]; x = x+dx[dir[c]];
				if(f[y][x]){
					f[y][x] = 0; cnt--;
				}
			}
		}
		cout << (cnt ? "No" : "Yes") << endl;
	}
}
