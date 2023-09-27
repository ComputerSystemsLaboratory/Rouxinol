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
#include<sstream>
#include<iomanip>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
using namespace std;
//kaewasuretyuui
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef pair<int,pii> pip;
typedef vector<pip>vip;
const double PI=acos(-1);
const double EPS=1e-8;
const int inf=1e8;
int main(){
	int N=9,S=100;
	vvi dp(N+1,vi(S+1));
	dp[0][0]=1;
	loop(x,0,10)for(int i=N-1;i>=0;i--)for(int j=S-x;j>=0;j--){
		dp[i+1][j+x]+=dp[i][j];
	}
	int n,s;
	while(cin>>n>>s,n+s){
		cout<<dp[n][s]<<endl;
	}
}