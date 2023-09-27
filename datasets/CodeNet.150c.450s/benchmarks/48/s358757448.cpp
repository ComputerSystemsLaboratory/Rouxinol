#include <bits/stdc++.h>
using namespace std;

const int INF = 1e+8;
const int E_MAX = 1000000;

int main() {
	int e;
	while(cin >> e && e){
		int ans = INF;
		for(int z = 0; z * z * z <= E_MAX; ++z){
			if(z > e)
				break;
			for(int y = 0; y * y <= E_MAX; ++y){
				if(z * z * z + y * y > e)
					break;
				ans = min(ans, z + y + (e - (y * y + z * z * z)));
			}
		}
		cout << ans << endl;
	}
	return 0;
}