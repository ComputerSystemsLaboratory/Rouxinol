#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		int n; cin >> n;
		if( n == 0) break;
		int ans = 0;
		for(int i = 1; i < n; ++i){
			int nsum = 0;
			for(int j = i; nsum < n; ++j){
				nsum += j;
			}
			if(nsum == n) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}