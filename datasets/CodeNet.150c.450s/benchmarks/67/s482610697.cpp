#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	
	while(1) {
		int n ; cin >> n;
		if(n == 0) break;

		int ans = 0;
		for (int i = 1; i < n; i++) {
			int sum = 0;	
			for (int j = i; j <= n; j++) {
				sum += j;
				if(sum == n) {
					ans++;
					break;
				}else if (sum > n) {
					break;
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}

