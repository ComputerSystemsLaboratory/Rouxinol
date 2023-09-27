

#include<cstdio>
#include<iostream>

using namespace std;


const int N = 111;

int main(){
	
	
	while(1){
		
		int h,w;
		cin>>w>>h;
		
		if(w==0 && h==0)break;
		
		int n;
		cin>>n;
		
		
		int board[N][N] = {0};
		
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			
			board[b][a] = 1;
		}
		
		
		int dp[N][N] = {0};
		
		dp[1][1] = 1;
		for(int i=1;i<=h;i++){
			for(int j=1;j<=w;j++){
				if(board[i][j]==1) dp[i][j] = 0;
				if(board[i][j]==0) dp[i][j] = dp[i][j] + dp[i-1][j] + dp[i][j-1];
			}
		}
		
		printf("%d\n",dp[h][w]);
	}
}