#include <iostream>
using namespace std;

int main() {
	int a,b,n;
	while(true){
		cin>>a>>b>>n;
		if(a==0,b==0){
			break;
		}
		int map[a+1][b+1];
		for(int i=0;i<=a;i++){
			for(int j=0;j<=b;j++){
				map[i][j]=0;
			}
		}
		
		for(int i=0;i<n;i++){
			int x,y;
			cin>>x>>y;
			map[x][y]=1;
		}
		
		int dp[a+1][b+1];
		for(int i=0;i<=a;i++){
			for(int j=0;j<=b;j++){
				dp[i][j]=0;
			}
		}
		dp[0][1]=1;
		
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
				if(map[i][j]==1){
					dp[i][j]=0;
				}
				else dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		cout<<dp[a][b]<<endl;
	}
	return 0;
}