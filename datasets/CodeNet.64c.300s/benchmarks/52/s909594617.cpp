#include <iostream>
using namespace std;


int dp[10][110];


void makeDP(){
	dp[0][0] = 1;
	for(int i = 0;i <= 9;i++){
		for(int j = 100;j >= i;j--){
			for(int k = 9;k >= 1;k--){
				dp[k][j] += dp[k-1][j-i];
			}
		}
	}
}


int main(){
	int n, s;

	makeDP();

	while(cin >> n >> s, n || s) cout << dp[n][s] << endl;
	
	return 0;
}