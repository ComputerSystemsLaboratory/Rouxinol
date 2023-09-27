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
int main(){
	int n;
	cin>>n;
	vector<int>in(n);
	rep(i,n)cin>>in[i];
	vector<vector<ll> >dp(n-1,vector<ll>(21));
	dp[0][in[0]]=1;
	loop(i,1,n-1)rep(j,21){
		if(j-in[i]>=0)dp[i][j]+=dp[i-1][j-in[i]];
		if(in[i]+j<=20)dp[i][j]+=dp[i-1][in[i]+j];
	}
	/*rep(i,n-1){
		rep(j,21)cout<<" "<<dp[i][j];
		cout<<endl;
	}*/
	cout<<dp[n-2][in[n-1]]<<endl;
}