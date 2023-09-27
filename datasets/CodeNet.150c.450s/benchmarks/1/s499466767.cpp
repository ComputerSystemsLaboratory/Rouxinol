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
const int INF=2e9;
const double EPS=1e-10;
//int mod=1000000007
 

const int MAX_N = 100000;
int n, a[MAX_N];
int dp[MAX_N];


int solve() {
	fill(dp, dp + n, INF);
	for(int i = 0; i < n; i++){
		*lower_bound(dp, dp + n, a[i]) = a[i];
	}
	return lower_bound(dp, dp + n, INF) - dp;
}


int main(){
	cin>>n;
	rep(i, n) cin>>a[i];
	cout<<solve()<<endl;
}