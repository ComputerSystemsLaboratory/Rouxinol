#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int inf = 1e9;
const ll INF = 1e18;
const double pi = 3.14159265358979323846;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	string s,t;cin>>s>>t;
	int slen=s.size(),tlen=t.size();

	int dp[slen+1][tlen+1];//dpはi,j文字目までの編集距離を示す
	rep(i,slen+1) dp[i][0]=i;
	rep(j,tlen+1) dp[0][j]=j;

	for(int i=0;i<slen;i++){
		for(int j=0;j<tlen;j++){
			if(s[i]==t[j]) dp[i+1][j+1]=dp[i][j];
			else dp[i+1][j+1]=min(dp[i][j]+1,min(dp[i+1][j]+1,dp[i][j+1]+1));
		}
	}

	cout<<dp[slen][tlen]<<endl;
}
