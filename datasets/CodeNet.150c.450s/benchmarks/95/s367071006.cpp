#include <bits/stdc++.h>
using namespace std;

#define INF_LL (int64)1e18
#define INF (int32)1e9
#define REP(i, n) for(int64 i = 0;i < (n);i++)
#define FOR(i, a, b) for(int64 i = (a);i < (b);i++)
#define all(x) x.begin(),x.end()
#define fs first
#define sc second

using int32 = int_fast32_t;
using uint32 = uint_fast32_t;
using int64 = int_fast64_t;
using uint64 = uint_fast64_t;
using PII = pair<int32, int32>;
using PLL = pair<int64, int64>;

const double eps = 1e-10;

template<typename A, typename B>inline void chmin(A &a, B b){if(a > b) a = b;}
template<typename A, typename B>inline void chmax(A &a, B b){if(a < b) a = b;}

template<typename T>
vector<T> make_v(size_t a){return vector<T>(a);}

template<typename T,typename... Ts>
auto make_v(size_t a,Ts... ts){
  return vector<decltype(make_v<T>(ts...))>(a,make_v<T>(ts...));
}

template<typename T,typename U,typename... V>
typename enable_if<is_same<T, U>::value!=0>::type
fill_v(U &u,const V... v){u=U(v...);}

template<typename T,typename U,typename... V>
typename enable_if<is_same<T, U>::value==0>::type
fill_v(U &u,const V... v){
  for(auto &e:u) fill_v<T>(e,v...);
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int64 N;
	while (cin >> N && N) {
		vector<string> step(N);
		REP(i, N) cin >> step[i];
		int on_down = 1;
		int64 d[2] = {1, 1};
		int64 res = 0;
		REP(i, N) {
			if (step[i] == "lu") {
				if (d[0]) d[0] = 0;
			} else if (step[i] == "ld") {
				if (!d[0]) d[0] = 1;
			} else if (step[i] == "ru") {
				if (d[1]) d[1] = 0;
			} else if (step[i] == "rd") {
				if (!d[1]) d[1] = 1;
			}
			if ((on_down && !d[0] && !d[1]) || (!on_down && d[0] && d[1])) {
				res++;
				on_down ^= 1;
			}
		}
		cout << res << endl;
	}
}

