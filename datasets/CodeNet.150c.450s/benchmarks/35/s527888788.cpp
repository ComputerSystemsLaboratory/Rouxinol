#include <iostream>
#define INF 1e+9
using namespace std;

int main(){
	int n;
	while(cin >> n,n){
		int a,dp[5001] = {},ma = -INF;
		for(int i = 0;i <= n;i++) dp[i] = -INF;
		for(int i = 0;i < n;i++) {
			cin >> a;
			dp[i + 1] = max(a,dp[i] + a);
			ma = max(ma,dp[i + 1]);
		}
		cout << ma << endl;
	}
	return 0;
}