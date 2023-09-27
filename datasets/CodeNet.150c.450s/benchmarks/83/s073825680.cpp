#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#define rep(i,l,n) for(lint i=l;i<n;i++)
#define rer(i,l,n) for(lint i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int dp[110][10010]={};

int main(){
	int N,W,v[110]={},w[110]={};
	cin>>N>>W;
	rep(i,1,N+1){
		cin>>v[i]>>w[i];
	}
	rep(i,1,N+1){
		rep(j,0,W+1){
			if(j>=w[i]){
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			}else{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	o(dp[N][W]);
}