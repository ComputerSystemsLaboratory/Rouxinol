#include <bits/stdc++.h>
using namespace std;

int dp[1000000];
int dpodd[1000000];
int num[200];
int INF = 10000000;
int main(){
	for(int i = 0; i < 200; i++){
		num[i] = (i + 1) * (i + 2) * (i + 3)/ 6;
	}
	dp[0] = 0;
	dpodd[0] = 0;
	for(int i = 1; i < 1000000; i++){
		dp[i] = INF;
		dpodd[i] = INF;
		for(int j = 0; num[j] <= i; j++){
			dp[i] = min(dp[i], dp[i - num[j]] + 1);
			if(num[j] % 2 == 1){
				dpodd[i] = min(dpodd[i], dpodd[i - num[j]] + 1);
			}
		}
	}
	int N;
	while(cin >> N, N){
		cout << dp[N] << " " << dpodd[N] << endl;
	}
}