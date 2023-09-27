#include "bits/stdc++.h"
using namespace std;
#define int long long
#define REP(i, n) for (int i = 0; i < (int)n; ++i)
#define RREP(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define FOR(i, s, n) for (int i = s; i < (int)n; ++i)
#define RFOR(i, s, n) for (int i = (int)n - 1; i >= s; --i)
#define ALL(a) a.begin(), a.end()
#define IN(a, x, b) (a <= x && x < b)
template<class T>inline void out(T t){cout << t << "\n";}
template<class T,class... Ts>inline void out(T t,Ts... ts){cout << t << " ";out(ts...);}
template<class T>inline bool CHMIN(T&a,T b){if(a > b){a = b;return true;}return false;}
template<class T>inline bool CHMAX(T&a,T b){if(a < b){a = b;return true;}return false;}
constexpr int INF = 1e18;

vector<vector<int> > calcNext(const vector<int> &S) {
	int n = (int)S.size();
	vector<vector<int> > res(n+1, vector<int>(26, 0));
	for (int i = 1; i < n + 1; ++i) {
		for (int j = 0; j < 26; ++j) res[i][j] = res[i-1][j];
		res[i][S[i - 1]] = i;
	}
	return res;
}

signed main(){
	int D;
	cin >> D;
	vector<int>c(26);
	REP(i,26){
		cin >> c[i];
	}
	vector<vector<int>>s(D,vector<int>(26));
	REP(i,D){
		REP(j,26){
			cin >> s[i][j];
		}
	}
	vector<int>ans(D,-1);
	REP(i,D){
		cin >> ans[i];
		--ans[i];
	}
	auto last = calcNext(ans);
	auto getScore = [&](int day) -> int {
		int ret = 0;
		ret += s[day][ans[day]];
		REP(i,26){
			ret -= (day + 1 - last[day + 1][i]) * c[i];
		}
		return ret;
	};
	int sum = 0;
	REP(i,D){
		sum += getScore(i);
		out(sum);
	}
}