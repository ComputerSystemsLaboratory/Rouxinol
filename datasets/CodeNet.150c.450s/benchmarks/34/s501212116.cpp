#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int dp[31];
	fill(dp,dp+31,0);
	dp[0]=1;
	for(int i = 1; i <= 30; i++){
		for(int j = 1; j <= 3; j++){
			if(i-j>=0)
				dp[i] += dp[i-j];
		}
	}

	int n;
	while(cin>>n&&n!=0){
		int t = (dp[n]-1)/3650;
		t++;
		cout<<t<<endl;
	}

	return 0;
}