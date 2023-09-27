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
int dp[1010][1010];
int main(){
	string a,b;
	cin>>a>>b;
	rep(i,1010)rep(j,1010)if(i&&j)dp[i][j]=inf;
	else dp[i][j]=max(i,j);
	rep(i,a.size())rep(j,b.size())if(a[i]==b[j])dp[i+1][j+1]=dp[i][j];
	else dp[i+1][j+1]=min(dp[i][j],min(dp[i][j+1],dp[i+1][j]))+1;
	cout<<dp[a.size()][b.size()]<<endl;
}