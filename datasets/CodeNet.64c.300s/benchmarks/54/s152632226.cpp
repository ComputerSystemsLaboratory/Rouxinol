#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	int n;
	int nums[101];
	cin >> n;
	// iÜÅÌðgpµÄjª¢­Âìêé©Ìdpe[u
	long long dp[101][21];
	for(int i = 0; i < n; i++){
		cin >> nums[i];
		fill(dp[i],dp[i]+21,0);
	}
	dp[0][nums[0]] = 1;
	for(int i = 1; i < n-1; i++){
		for(int j = 0; j < 21; j++){
			if(j + nums[i] <= 20)
				dp[i][j] += dp[i-1][j+nums[i]];
			if(j - nums[i] >= 0){
				dp[i][j] += dp[i-1][j-nums[i]];
			}
		}
	}

	long long sum = 0;
	sum += dp[n-2][nums[n-1]];
	cout << sum << endl;

	//int x;
	//cin >> x;
	
	return 0;
}