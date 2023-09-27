#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int larger(int x, int y){
	if(x > y){
		return x;
	}
	else{
		return y;
	}
}

int main(){
	int N, W;
	cin >> N >> W;
	int values[N];
	int weight[N];
	for(int i = 0; i < N; i++){
		cin >> values[i] >> weight[i];
	}
	int dp[N+1][W+1];
	for(int i = 0; i < N+1; i++){
		for(int j = 0; j < W+1; j++){
			dp[i][j] = 0;
		}
	}
	for(int i = 0; i < N; i++){
		for(int j = 0; j < W+1; j++){
			if(j < weight[i]){
				dp[i+1][j] = dp[i][j];
			}
			else{
				dp[i+1][j] = larger(dp[i][j-weight[i]]+values[i], dp[i][j]);
			}
		}
	}
	cout << dp[N][W] << "\n";
}

