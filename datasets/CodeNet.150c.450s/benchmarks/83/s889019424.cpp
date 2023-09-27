#include<iostream>
#include<vector>
using namespace std;

#define MAX_N 100
#define MAX_U 10000

int main(){
	int n,u;
	cin>>n>>u;

	vector<int> v(n),w(n);	//??????n???vector?????£?¨?
	for(int i=0;i<n;i++){
		cin>>v[i]>>w[i];
	}
	
	//dp?????£?¨???¨?????????
	int dp[MAX_N+1][MAX_U+1];
	for(int i=0;i<MAX_N+1;i++){
		for(int j=0;j<MAX_U+1;j++){
			dp[i][j] = 0;
		}
	}
	
	//???????????§????????´??°
	for(int i=1;i<=n;i++){
		for(int j=1;j<=u;j++){
			if( j-w[i-1]>=0 ){	//j-w[i-1]???<0??\????????¨??????????????§????????????????????§?????§??????
				dp[i][j] = max( dp[i-1][j-w[i-1]]+v[i-1] , dp[i-1][j] );
			}
			else dp[i][j] = dp[i-1][j];
		}
	}
	
	int ans = 0;
	for(int i=0;i<=u;i++){
		ans = max(ans,dp[n][i]);	//n???????????§?????¢??????????????????????????????u??\????????¶???????????????
	}
	
	cout<<ans<<endl;
}