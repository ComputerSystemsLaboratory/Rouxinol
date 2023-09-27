#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<set>
#include<numeric>
#include<map>
#include<iostream>
using namespace std;
#define rep(i,n) for(int i = 0;i<((int)(n));i++)
#define reg(i,a,b) for(int i = ((int)(a));i<=((int)(b));i++)
#define irep(i,n) for(int i = ((int)(n)-1);i>=0;i--)
#define ireg(i,a,b) for(int i = ((int)(b));i>=((int)(a));i--)
typedef long long ll;
typedef pair<ll, ll> mp;

int main(void){
	ll N,W;
	cin>>N>>W;
	ll v[101],w[101];
	reg(i,1,N)cin>>v[i]>>w[i];
	ll DP[101][10001]; //i???????????§????????£????????????j??§????????¨???????????§?????????
	reg(i,0,N){
		reg(j,0,W)DP[i][j]=0;
	}
	ll ans=0;
	reg(i,1,N){
		reg(j,1,W){
			if(DP[i][j]<DP[i-1][j])DP[i][j]=DP[i-1][j];
			if(j>=w[i] && DP[i][j]<DP[i-1][j-w[i]]+v[i])DP[i][j]=DP[i-1][j-w[i]]+v[i];
			if(ans<DP[i][j])ans=DP[i][j];
		}
	}
	cout<<ans<<endl;
	return 0;
}