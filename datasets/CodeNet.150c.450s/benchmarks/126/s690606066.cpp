#include<bits/stdc++.h>

using namespace std;

int main(){
	while(1){
	int a,b;
	cin >> a >> b;
	if(a==0){
		break;
	}
	int dp[17][17]={};
	int map[17][17]={};
	int n;
	cin >> n;
	int x,y;
	for(int i=1;i<=n;i++){
		cin >> x >> y;
		map[x][y]=1;
	}
	
	dp[1][0]=1;
	
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(map[i][j]==1)
				dp[i][j]=0;
			else
				dp[i][j]=dp[i][j-1]+dp[i-1][j];
		}
	}
	
	cout << dp[a][b] <<endl;
	}
	return 0;
}