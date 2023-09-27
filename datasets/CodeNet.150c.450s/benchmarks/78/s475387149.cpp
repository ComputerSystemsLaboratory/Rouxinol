#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> ttr;
	int n = 1;
	while(1){
		int tr = n*(n+1)*(n+2) / 6;
		if(tr > 1000000) break;
		ttr.push_back(tr);
		n++;
	}

	vector<int> dp(1000010,1000000);
	vector<int> dp_odd(1000010,1000000);
	dp[0] = dp_odd[0] = 0;

	for( int i = 0; i < ttr.size(); i++ ){
		for( int j = 0; j < 1000000-ttr[i]+1; j++ ){
			dp[j+ttr[i]] = min(dp[j+ttr[i]], dp[j]+1);
			if(ttr[i] % 2) dp_odd[j+ttr[i]] = min(dp_odd[j+ttr[i]], dp_odd[j]+1);
		}
	}

	while(cin >> n, n){
		cout << dp[n] << ' ' << dp_odd[n] << endl;
	}
}