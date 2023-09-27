#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int main(void) {
	while(1){
		int n;
		vector<int> vec;
		cin >> n;
		if(n == 0) break;

		for(int i=0; i<n; i++){
			int t;
			cin >> t;
			vec.pb(t);
		}
		sort(vec.begin(), vec.end());

		int ans = 0;
		for(int i=1; i<n-1; i++){
			ans += vec[i];
		}
		ans /= (n-2);

		cout << ans << endl;
	}

	
	return 0;
}