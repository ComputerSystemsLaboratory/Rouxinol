#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int main(void) {
	while(1){
		int n, a, b, c, x;
		vector<int> stop;
		cin >> n >> a >> b >> c >> x;
		if(n == 0 && a == 0 && b == 0 && c == 0 && x == 0) break;

		for(int i=0; i<n; i++){
			int t;
			cin >> t;
			stop.pb(t);
		}

		int now = 0;
		int ans = 0;
		int i;
		if(x == stop[now]){
			now++;
			if(now == n){
				ans = 0;
				cout << ans << endl;
				continue;
			}
		}
		for(i=1; i<=10000; i++){
			x = (a*x + b) % c;

			if(x == stop[now]){
				now++;
				if(now == n){
					ans = i;
					break;
				}
			}
			
		}
		if(i > 10000){
			cout << "-1" << endl;
		}else{
			cout << ans << endl;
		}
	}

	return 0;
}