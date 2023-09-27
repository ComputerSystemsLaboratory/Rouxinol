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

const int INF=1e9;
int dp[100010]={};

int main(){
	int n;
	cin>>n;
	vi a(n);
	rep(i,0,n) cin>>a[i];
	fill(dp,dp+n,INF);
	rep(i,0,n){
		*lower_bound(dp,dp+n,a[i])=a[i];
	}
	o(lower_bound(dp,dp+n,INF)-dp);
}