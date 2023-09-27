#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n, s;
int dp[11][101][11];
int solve(int i, int j, int k);

int main(void){
	
	while(cin >> n >> s){
		if(n == 0 && s == 0){break;}
		fill_n(**dp,11*101*11,-1);
		cout << solve(0,0,10) << endl;
	}
}

int solve(int now, int sum, int b1){
	if(now == n){
		if(sum == s){return 1;}
		else return 0;
	}
	if(dp[now][sum][b1] != -1){return dp[now][sum][b1];}
	int t = 0;
	for(int i = 0; i < 10; i++){
		if(b1 != 10 && b1 >= i){continue;}
		t += solve(now+1, sum + i, i);
	}
	return dp[now][sum][b1] = t;
}