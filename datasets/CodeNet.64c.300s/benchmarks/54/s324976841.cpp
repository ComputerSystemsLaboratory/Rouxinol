#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	unsigned long long dp[102][21];
	int n;
	while(cin >> n){
		if(!n)
			break;
		int d[100];
		for(int i=0;i<n;i++){
			cin >> d[i];
		}
		memset(dp,0,sizeof(dp));
		dp[1][d[0]] = 1;
		for(int i=1;i<=100;i++){
			for(int j=0;j<=20;j++){
				if(dp[i][j]!=0){
					if(0<=j+d[i] && j+d[i]<=20){
						dp[i+1][j+d[i]] += dp[i][j];
					}
					if(0<=j-d[i] && j-d[i]<=20){
						dp[i+1][j-d[i]] += dp[i][j];
					}
				}
			}
		}
		cout << dp[n-1][d[n-1]] << endl;
	}
	return 0;
}