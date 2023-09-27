#ifndef _WIN32
#include<iostream>
#endif 
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;
typedef long long LL;
#define FOR(i,bg,ed) for(int i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
template<typename T> bool chmin(T &l, T r) {
	bool res = l > r;
	if (res) {
		l = r;
	}
	return res;
}
/*
template<typename T>
istream& oprator>> (istream &is, vector<T>& v) {
	for (auto &it : v)is >> it;
	return is;
}*/

struct cww {
	cww() {
		cout << fixed;
		cout << setprecision(10);
	}
}star;

vector<LL> r, c;
int main() {
	int R, C;
	while (cin >> R >> C, R) {
		r.assign(R+1, 0);
		c.assign(C+1, 0);
		//cin >> r >> c;
		REP(i, R)cin >> r[i+1];
		REP(i, C)cin >> c[i+1];
		FOR(i, 1, R+1) {
			r[i] += r[i - 1];
		}
		FOR(i, 1, C+1) {
			c[i] += c[i - 1];
		}

		map<LL, LL> cnt;
		REP(x, R)FOR(y, x + 1, R+1) {
			LL len = r[y] - r[x];
			cnt[len]++;
		}
		LL res = 0;
		REP(x, C)FOR(y, x + 1, C+1) {
			LL len = c[y] - c[x];
			if(cnt.count(len))res+=cnt[len];
		}
		cout << res << endl;
	}

	return 0;
}