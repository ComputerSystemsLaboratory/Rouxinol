#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int mill = 1+999*(20*10-5)+333*5;
	for(int i = 0; i < n; ++i){
		int y, m, d; cin >> y >> m >> d;
		int byear = (y-1)/3;
		int ans = d;
		if(y % 3 == 0){
			ans += (m-1)*20;
		}
		else{
			ans += (m-1)*19 + m/2;
		}
		ans += (y -1)*(20*10-5)+byear * 5;
		ans = mill - ans;
		cout << ans << endl;
	}

	return 0;
}