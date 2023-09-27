#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e9;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
int main(){
	int n,m;
	cin>>n>>m;
	vi dp(n+1,inf);
	dp[0]=0;
	while(m--){
		int a;
		cin>>a;
		rep(i,n-a+1)dp[i+a]=min(dp[i+a],dp[i]+1);
	}
	cout<<dp[n]<<endl;
}