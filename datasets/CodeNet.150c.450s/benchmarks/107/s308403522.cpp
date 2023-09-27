#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define rrep(i,n) for(int i=n-1;i>=0;--i)
#define yesno(flg) if(flg){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define MAX_N 1002
#define i197 1000000007

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P1;
typedef pair<int,int> Pi;
typedef pair<double,Pi> Pdi;
typedef pair<ll,int>Pli;
typedef pair<P1,ll> P2;
typedef pair<string,string> Ps;
const ll INF=1000000000000000001;
struct edge{int to,cost;};
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
struct Road{double cost;int a,b;};
struct pos{
	// 1 変数を入れる;
	int x,y,sx,sy,cost;
};
int dp[1001][1001];

int main() {

	string s1,s2;
	cin>>s1;
	cin>>s2;

	rep(i,s1.size()){
		rep(j,s2.size()){
			dp[j+1][i+1]=2001;
		}
	}

	dp[0][0]=0;
	rep(i,s1.size())dp[0][i+1]=i+1;
	rep(i,s2.size())dp[i+1][0]=i+1;

	for(int i=1; i<s1.size()+1; i++){
		for(int j=1; j<s2.size()+1; j++){
			dp[j][i]=min(dp[j][i],dp[j][i-1]+1);
			dp[j][i]=min(dp[j][i],dp[j-1][i]+1);
			if(s2[j-1]==s1[i-1])dp[j][i]=min(dp[j][i],dp[j-1][i-1]);
			else dp[j][i]=min(dp[j][i],dp[j-1][i-1]+1);
		}
	}
	int ans=s1.size()+s2.size();
	for(int i=1; i<s2.size()+1; i++){
		int x=s2.size()-i;
		ans=min(ans,dp[i][s1.size()]+x);
	}
	cout<<ans<<endl;

	return 0;
}

