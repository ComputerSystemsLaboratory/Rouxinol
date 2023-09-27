#include<bits/stdc++.h>
using namespace std;

int dp[17][17];

int main(){
	int a,b,n;
	while(cin>>a>>b,a,b){
		for(int i=0;i<17;i++){
			for(int j=0;j<17;j++){
				dp[i][j]=1;
				}
			}
		
		cin>>n;
		int c,d;
		for(int i=0;i<n;i++){
			cin>>c>>d;
			dp[c-1][d-1]=0;
			
			if(c==1){
				for(int ia=d-1;ia<b;ia++){
					dp[0][ia]=0;
					}
				}
				
			if(d==1){
				for(int ia=c-1;ia<a;ia++){
					dp[ia][0]=0;
					}
				}	
			}
			
		for(int i=1;i<a;i++){
			for(int j=1;j<b;j++){
				if(dp[i][j]!=0){dp[i][j]=dp[i-1][j]+dp[i][j-1];}
				}
			}
			
			cout<<dp[a-1][b-1]<<endl;	
		}
		return 0;
	}