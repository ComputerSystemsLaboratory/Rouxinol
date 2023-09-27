#include <iostream>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	while(cin >> n && n != 0){
	
	int dp[31];
	
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	
	for(int i = 4; i <= n; ++i){
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	
	int sum = dp[n];
	
	if(sum % 10 == 0)
		sum /= 10;
	else
		sum = sum / 10 + 1;
	
	if(sum % 365 == 0)
		sum /= 365;
	else
		sum = sum / 365 + 1;
	
	cout << sum << endl;
	}
}