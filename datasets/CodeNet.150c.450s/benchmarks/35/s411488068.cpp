#include <bits/stdc++.h>
using namespace std;

typedef complex<double> P;

int main(){
	int n;
	while(cin >> n && n){
		int ans = -1e9;
		int tot = 0;
		for(int i = 0 ; i < n ; i++){
			if( tot < 0 ) tot = 0;
			int x;
			cin >> x;
			tot += x;
			ans = max(ans,tot);
		}
		cout << ans << endl;
	}
}