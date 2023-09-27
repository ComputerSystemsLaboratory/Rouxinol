#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		if(a==0&&b==0)break;

		int  n;
		int dp[25][25]={0};
		dp[1][1]=1;//?§????

		cin>>n;
		for(int i=0;i<n;i++){
			int x,y;
			cin>>x>>y;
			dp[y][x]=-1;
		}

		for(int y=1;y<=b;y++){
			for(int x=1;x<=a;x++){
				if(dp[y][x]!=-1){
					if(y!=1&&dp[y-1][x]!=-1){
						dp[y][x]+=dp[y-1][x];
					}if(x!=0&&dp[y][x-1]!=-1){
						dp[y][x]+=dp[y][x-1];
					}
				}
			}
		}

		cout<<dp[b][a]<<endl;

	}
}