//
//  main.cpp

#include <iostream>
#include <vector>
using namespace std;

const int INF = 10000000;
int dp[101][101];//dp[i][j]?????§??????????????¢???

int DP(int x,int y){//x,y????????????????????¢????????????
	if(x <= 0 || y <= 0)return 0;
	if(dp[x][y] == INF)return 0;
	if(dp[x][y] != 0)return dp[x][y];
	
	dp[x][y] = DP(x-1,y) + DP(x,y-1);
	
	return dp[x][y];
}

int main(){
	while(1){
		int a,b;
		cin >> a >> b;
		if(a == 0 && b == 0)break;
		int n;
		cin >> n;
		
		for(int i=0;i<101;i++)for(int j=0;j<101;j++)dp[i][j] = 0;
		
		for(int i=0;i<n;i++){
			int x,y;
			cin >> x >> y;
			dp[x][y] = INF;
		}
		
		dp[1][1] = 1;
		
		cout << DP(a,b) << endl;
//
//		for(int i=1;i<=a;i++){
//			for(int j=1;j<=b;j++){
//				if(dp[i][j] == -1)continue;
//				if(dp[i][j] == INF){
//					dp[i+1][j] = 0;
//					dp[i+1][j] =
//				}
//				dp[i+1][j] = dp[i][j] + 1;
//				dp[i][j] = dp[i][j] + 1;
//			}
//		}
//		cout << dp[a][b] << endl;
	}
	return 0;
}