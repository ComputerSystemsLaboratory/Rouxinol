#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main(){
	while(true){
		int n;
		cin >> n;
		if(n == 0){ break; }
		vector<ll> dp(n + 3);
		dp[0] = 1;
		for(int i = 0; i < n; ++i){
			dp[i + 1] += dp[i];
			dp[i + 2] += dp[i];
			dp[i + 3] += dp[i];
		}
		cout << ((dp[n] + 9) / 10 + 364) / 365 << endl;
	}
	return 0;
}