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


int dp[10001]={};

int main(){
	int N,W,v[110]={},w[110]={};
	cin>>N>>W;
	rep(i,0,N) cin>>v[i]>>w[i];
	rep(i,0,N){
		for(int j=W;j>=w[i];j--){
			dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
		}
	}
	o(dp[W]);
}