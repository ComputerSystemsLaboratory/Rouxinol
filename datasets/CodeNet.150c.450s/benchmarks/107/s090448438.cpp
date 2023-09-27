#include<iostream>
#include<algorithm>
#define REP(i,n) for(int (i) = (0);(i) < (n);++i)
using namespace std;
int dp[1010][1010];
int main(){
	string a,b;cin>>a>>b;
	REP(i,a.size()+1)dp[i][0]=i;
	REP(i,b.size()+1)dp[0][i]=i;	
	for(int i=1;i<=a.size();i++){
		for(int j=1;j<=b.size();j++){
			int q=1;if(a[i-1]==b[j-1])q = 0;
			dp[i][j]=min(min(dp[i-1][j-1]+q,dp[i][j-1]+1),dp[i-1][j]+1);
		}
	}	
	cout<<dp[a.size()][b.size()]<<endl;
	return 0;
}