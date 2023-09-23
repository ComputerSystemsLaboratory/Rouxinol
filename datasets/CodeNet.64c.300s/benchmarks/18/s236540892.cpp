#include <iostream>
#include <cmath>
using namespace std;
#define rep2(x,from,to) for(int x=(from);x<(to);++(x))
#define rep(x,to) rep2(x,0,to)
int main(){
	int n;
	int dp[32] = {};
	dp[0] = dp[1] = 1;
	dp[2] = 2;
	rep2(i,3,32) {
		dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
	}
	while(cin >> n, n) {
		cout << ceil(dp[n] / 3650.0) << endl;
	}
    return 0;
}