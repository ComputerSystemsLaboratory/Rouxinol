#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void){
	int dp[17][17];
	int p,q,t; //p:= horizontal q:=vertical
	int x,y;

	while(cin >> q >> p){
		if((p|q) == 0) break;
	memset(dp,0,sizeof(dp));

	cin >> t;
	for(int i=0;i<t;i++){
		cin >> y >> x;
		dp[x][y] = -1; //-1 represents under construction
	}
	if(dp[1][1] != -1){
		dp[1][1] = 1;
	}else{
		dp[1][1] = 0;
	}

	for(int i=1;i<=p;i++){
		for(int j=1;j<=q;j++){
			if(i==1&&j==1)continue;
			if(dp[i][j] != -1){
				if(dp[i][j-1] == -1 && dp[i-1][j] == -1){
					dp[i][j] = 0;
				}else if(dp[i][j-1] == -1){
					dp[i][j] = dp[i-1][j];
				}else if(dp[i-1][j] == -1){
					dp[i][j] = dp[i][j-1];
				}else{
					dp[i][j] = dp[i-1][j] + dp[i][j-1];
				}
			}
			//cout << dp[i][j];
		}
		//cout << endl;
	}
	cout << dp[p][q] << endl;
	}
}