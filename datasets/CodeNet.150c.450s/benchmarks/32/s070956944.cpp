#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
#define llong long long

using namespace std;

signed main(){
	while(true){
		int m, nmin, nmax; cin >> m >> nmin >> nmax;
		if(m == 0)break;
		vector<int> p(m);
		for(auto &&e : p)cin >> e;
		sort(ALL(p), greater<int>());
		int acc = 0, ans;
		for(int i = nmin; i <= nmax; i++){
			if(p[i-1] - p[i] >= acc){
				ans = i;
				acc = p[i-1]-p[i];
			}
		}
		cout << ans << endl;

	}

	return 0;
}


