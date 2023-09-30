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
	int dp[MAX_U+1];
	for(int i=0;i<MAX_U+1;i++){
		dp[i]= 0;
	}
 
	//???????????§????????´??°
	for(int i=1;i<=n;i++){
		for(int j=u;j>=1;j--){
			if( j-w[i-1]>=0 ){	//j-w[i-1]???<0??\????????¨??????????????§????????????????????§?????§??????
				dp[j] = max( dp[j-w[i-1]]+v[i-1] , dp[j] );
			}
		}
	}
 
	cout<<dp[u]<<endl;
}