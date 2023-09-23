#include<iostream>
using namespace std;

int dp[20][20];
bool map[20][20];



int main(){
	int a,b,n;
	
	while(cin>>a>>b,a!=0||b!=0){
		cin>>n;
		int x,y;
		for(int i=0;i<20;i++){
			for(int j=0;j<20;j++){
				dp[i][j]=map[i][j]=0;
			}
		}
		for(int i=0;i<n;i++){
			cin>>x>>y;
			map[x][y]=1;
		}
		dp[1][1]=1;
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
				if(map[i][j]!=1)dp[i][j]+=dp[i-1][j]+dp[i][j-1];
			}
		}
		
		
		cout<<dp[a][b]<<endl;
	}
}