#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b&&a!=0&&b!=0){
		int c[a][b],dp[a][b];
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				c[i][j]=1;dp[i][j]=0;
			}
		}
		int d;
		cin>>d;
		for(int i=0;i<d;i++){
			int e,f;
			cin>>e>>f;
			c[e-1][f-1]=0;
		}
		for(int i=0;i<a;i++){if(c[i][0]==1)dp[i][0]=1;if(c[i][0]==0)break;}
		for(int i=0;i<b;i++){if(c[0][i]==1)dp[0][i]=1;if(c[0][i]==0)break;}
		for(int i=1;i<a;i++){
			for(int j=1;j<b;j++){ 
				if(c[i][j]!=0){
					dp[i][j]=dp[i-1][j]+dp[i][j-1];
				}
			}
		}
		cout<<dp[a-1][b-1]<<endl;
	}
}