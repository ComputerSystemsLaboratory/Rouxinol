#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int main(void) {
	while(1){
		int n, m, p;
		cin >> n >> m >> p;
		if(n == 0 && m == 0 && p == 0) break;

		int sum = 0;
		int pick = -1;
		for(int i=1; i<=n; i++){
			int x;
			cin >> x;
			sum += x * 100;
			if(i == m) pick = x;
		}
		if(pick == 0){
			cout << 0 << endl;
			continue;
		}
		int ans = (sum - sum*p/100) / pick;

		cout << ans << endl;

	}
	
	return 0;
}