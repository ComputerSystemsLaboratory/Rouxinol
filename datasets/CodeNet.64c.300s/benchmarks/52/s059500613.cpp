#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)



int main(){
	int n,s;
	while(cin>>n>>s&&(n||s)){
		int dp[11][11][101]={};
		dp[0][0][0] = 1;
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=10;j++){
				rep(k,s+1){
					for(int l=1;l<=j;l++){
						if(k-(j-1)<0)continue;
						dp[i][j][k]+=dp[i-1][j-l][k-(j-1)];
					}
				}
			}
		}
		int ans = 0;
		rep(i,11) ans += dp[n][i][s];
		cout<<ans<<endl;
	}
}