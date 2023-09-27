#include <iostream>
#include <algorithm>
using namespace std;


int dp[20][50001];
int coin[20];
int n, m;


void makeDP(){
	for(int i = 0;i < 50001;i++){
		dp[0][i] = i;
	}
	for(int i = 0;i < m;i++){
		dp[i][0] = 0;
		dp[i][1] = 1;
	}
	for(int i = 1;i < m;i++){
		for(int j = 2;j <= n;j++){
			dp[i][j] = min(dp[i-1][j], ((j-coin[i])>-1)?dp[i][j-coin[i]]+1:dp[i-1][j]);
		}
	}
}


int main(){
	cin >> n >> m;

	for(int i = 0;i < m;i++){
		cin >> coin[i];
	}

	makeDP();

	cout << dp[m-1][n] << endl;

	return 0;
}