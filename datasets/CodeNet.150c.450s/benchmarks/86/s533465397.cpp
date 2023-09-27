#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		int n, m, p;
		cin >> n >> m >> p;
		if(n == 0)break;
		vector<int> x(n);
		int sum = 0;
		for(int i= 0; i < n; i++){
			cin >> x[i];
			sum += x[i];
		}
		m--;
		int ans = 0;
		if(x[m] != 0){
		ans = (100 - p)*sum/x[m];
		}
		cout << ans << endl;
	}
	return 0;
}


