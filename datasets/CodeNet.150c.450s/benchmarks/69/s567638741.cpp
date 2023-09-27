#include <bits/stdc++.h>
#define INF 114514810
#define FOR(i, r, n) for(int i=(r); i<(n); i++) 
#define REP(i, n) FOR(i, (0), n)

using namespace std;

int n, ct = 1, d[13], flg = 1, t;
vector<int> x, y;

int judge(int ct){
	while (ct < 1023){
		t = ct;
		REP(i, 10){
			if (t & 1) x.push_back(d[i]);
			else y.push_back(d[i]);
			t >>= 1;
		}
		REP(i, x.size() - 1){
			if (x.at(i) > x.at(i + 1)) flg *= 0;
		}
		REP(i, y.size() - 1){
			if (y.at(i) > y.at(i + 1)) flg *= 0;
		}
		if (flg) return 1;
		x.clear(); y.clear(); t = 0; flg = 1; ct++;
	}
	return 0;
}

int main(){
	cin >> n;
	REP(k, n){
		REP(i, 10) cin >> d[i];
		if (judge(1)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}