#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>
 
using namespace std;
 
#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) (r).begin(),(r).end()
 
#define REP(i,s,e)	for(int i=(s); i<(e); i++)
#define rep(i,n)	REP(i,0,n)
#define REPE(i,s,e)	for(int i=s; i>e; i--)
#define repe(i,n)	REPE(i,n,-1)


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
typedef vector<vi> vvi;
 
const int IMAX=((1<<30)-1)*2+1;
const int INF=100000000;
const double EPS=1e-10;
//int mod=1000000007
 

int N,W;
vi v(1000), w(1000);
vvi dp(1000,vi(10001,-1));


int calc(int i,int j){
	if(i>=N) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	int ret;
	if(j+w[i]>W) ret=calc(i+1,j);
	else ret=max(calc(i+1,j),calc(i+1,j+w[i])+v[i]);
	return dp[i][j]=ret;
}


int main(){
	cin>>N>>W;
	rep(i,N) cin>>v[i]>>w[i];
	cout<<calc(0,0)<<endl;
}