//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
	int n;
	int numbers[101];
	cin >> n;
	for(int i=1;i<=n;i++)cin >> numbers[i];
	
	long long dp[101][21]={{}};//i?????????????´???????????¨?????????????j?????????????????????????????°
	dp[1][numbers[1]] = 1;
	for(int i=1;i<n;i++){
		for(int j=0;j<21;j++){
			if(dp[i][j] != 0){
				if(j+numbers[i+1] >= 0 && j+numbers[i+1] < 21){
					dp[i+1][j+numbers[i+1]] = dp[i+1][j+numbers[i+1]] + dp[i][j];
				}
				if(j-numbers[i+1] >= 0 && j-numbers[i+1] < 21){
					dp[i+1][j-numbers[i+1]] = dp[i+1][j-numbers[i+1]] + dp[i][j];
				}
			}
		}
	}
	
	cout << dp[n-1][numbers[n]] << endl;
	
	return 0;
}