#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<time.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e8;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
int main(){
	int n,m;
	while(cin>>m>>n,n+m){
		vvi dp(n+1,vi(m+1));
		int a;cin>>a;
		rep(i,a){
			int b,c;
			cin>>b>>c;
			dp[c][b]=-1;
		}
		dp[1][1]=1;
		loop(i,1,n+1)loop(j,1,m+1){//cout<<i<<" "<<j<<endl;
			if(dp[i][j]==-1)continue;
			dp[i][j]+=(dp[i-1][j]==-1?0:dp[i-1][j])+(dp[i][j-1]==-1?0:dp[i][j-1]);
		}
		cout<<dp[n][m]<<endl;
		//rep(i,n+1){rep(j,m+1)cout<<" "<<dp[i][j];cout<<endl;}
	}
}