#include <bits/stdc++.h>
using namespace std;

int main(void){
	int m, n_min, n_max, n;
	while(true){
		cin >> m >> n_min >> n_max;
		if(!m&&!n_min&&!n_max) break;
		vector<int> p(m);
		for(int i = 0; i < m; ++i){
			cin >> p[i];
		}
		sort(p.rbegin(), p.rend());
		int gap = 0, ans;
		for(n = n_min; n <= n_max; ++n){
			gap = max(gap, p[n-1] - p[n]);
			if(gap == p[n-1] - p[n]) ans = n;
		}
		cout << ans << endl;
	}
	return 0;
}
