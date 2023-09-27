#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		int n,m,p;cin >> n >> m >>p;
		m--;
		if( n == 0)break;
		vector<int> x(n);
		for(int i = 0; i < n; i++){
			int t; cin >> t;
			x[i] = t;
		}
		int sum = accumulate(x.begin(), x.end(), 0);
		int ans = x[m] == 0 ? 0 : sum * (100 - p) / x[m];
		cout << ans << endl;
	}

	return 0;
}

