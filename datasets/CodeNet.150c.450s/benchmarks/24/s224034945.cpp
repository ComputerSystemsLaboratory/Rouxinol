#ifndef _WIN32
#include<iostream>
#endif

#include<iomanip>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
#define FOR(i,bg,ed) for(int i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()

typedef long long LL;
template<typename T>
bool chmin(T &l, T& r){
	bool f = l>r; if (f)l = r; return f;
}
template<typename T>
bool chmax(T &l, T& r){
	bool f = l<r; if (f)l = r; return f;
}
typedef vector<int> V;
typedef vector<V> VV;
typedef pair<int, LL> P;

int main(){
	LL N, M;
	while (cin >> N >> M,N+M){
		vector<LL> d(11);
		REP(i, N){
			int a, b;
			cin >> a >> b;
			d[b] += a;
		}
		REP(_, 11){
			int i = 10 - _;
			LL cost = min(d[i], M);
			M -= cost;
			d[i] -= cost;
		}
		LL res = 0;
		REP(i, 11){
			res += d[i] * i;
		}
		cout << res << endl;
	}

	return 0;
}