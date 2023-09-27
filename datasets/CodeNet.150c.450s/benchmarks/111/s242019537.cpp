#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

signed main(){
	int n;
	cin>>n;
	int dp[110][30]={};
	int a[110]={};
	rep(i,0,n) cin>>a[i];

	dp[1][a[0]]=1;
	rep(i,1,n-1){
		rep(j,0,21){
			if(dp[i][j]){
				int tmp1=j+a[i];
				int tmp2=j-a[i];
				//o(i<<" "<<j<<" "<<tmp1<<" "<<tmp2<<" "<<dp[i][j]);
				if(tmp1<=20) dp[i+1][tmp1]+=dp[i][j];
				if(0<=tmp2) dp[i+1][tmp2]+=dp[i][j];
			}
		}
	}
	int ans=dp[n-1][a[n-1]];
	o(ans);
}