#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int v[200], w[200];

int DP[200][20000];

int main(){
	
	int N, W;
	
	cin >> N >> W;
	
	for(int i = 1; i <= N; i++){
		cin >> v[i] >> w[i];
	}
	
	for(int i = 0; i <= W; i++){
		DP[0][i] = 0;
	}
	
	for(int i = 1; i <= N; i++){
		for(int j = 0; j <= W; j++){
			if(j < w[i]){
				DP[i][j] = DP[i - 1][j];
			}else{
				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - w[i]] + v[i]);
			}
		}
	}
	
	cout << DP[N][W] << endl;
	
	return 0;
}