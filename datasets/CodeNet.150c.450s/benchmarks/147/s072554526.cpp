#include <bits/stdc++.h>
using ll = long long;
const ll MOD = 1e9+7;

signed main(){
	int n; 
	std::cin >> n;
	std::vector<int> ans(n + 1);
	for(int i = 1; i <= n; i++){
		int num = 0;
		for(int x = 1; x <= sqrt(i); x++){
			for(int y = 1; y <= sqrt(i); y++){
				int p = (x + y) * (x + y) + 4 * (i - x*x - y*y - x*y);
				if(p < 0) continue;
				int q = sqrt(p);
				if(q * q == p){
					int r = -(x + y) + q;
					if(r >= 2 && r % 2 == 0) num++;
				}
			}
		}
		ans[i] = num;
	}
	for(int i = 1; i <= n; i++){
		std::cout << ans[i] << '\n';
	}
}