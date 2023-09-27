// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;
long double eps = 1e-9;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		pair<long double, long double> cors[4];
		for(int i = 0; i < 4; i++){
			cin >> cors[i].first >> cors[i].second;
		}
		long double slope1 = (cors[1].second - cors[0].second) * (cors[3].first - cors[2].first);
		long double slope2 = (cors[3].second - cors[2].second) * (cors[1].first - cors[0].first);
		// deb(slope1, slope2);
		if(slope1 - slope2 == 0){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
	return 0;
}
// Write Here

