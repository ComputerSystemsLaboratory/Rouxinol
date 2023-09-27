#include <iostream>
using namespace std;

int main() {
	while(1){
		int a,b,c,x,y;
		cin>>a>>b>>c;
			if(a==0){
				return 0;
			}
		int map[17][17]={};
		for(int i=0;i<c;i++){
			cin>>x>>y;
			map[x][y]=1;
		}	
		int dp[17][17]={};
		dp[0][1]=1;
				for(int i=1;i<=a;i++){
					for(int j=1;j<=b;j++){
						if(map[i][j] == 1){
							continue;
						}
					dp[i][j] = dp[i][j-1]+dp[i-1][j];
					}
				}
		cout<<dp[a][b]<<endl;
	}
	return 0;
}