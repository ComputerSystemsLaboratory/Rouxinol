#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <deque>
 
using namespace std;
 
#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,s,e) for(int i=(s); i<(e); i++)
#define pb(n) push_back((n))
#define mp(n,m) make_pair((n),(m))
#define all(r) r.begin(),r.end()
#define fi first
#define se second
 
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MAX_N=110, MAX_W=10010;
int dp[MAX_N][MAX_W];

int main(){
	int n, W;
	cin>>n>>W;
	vi v(n+1, 0), w(n+1, 0);
	v[0]=0; w[0]=0;
	for(int i = 1; i <= n; i++){
		cin>>v[i]>>w[i];
	}
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= W; j++){
			if(j<w[i]) dp[i][j]=dp[i-1][j];
			else dp[i][j]=max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
		}
	}
	cout<<dp[n][W]<<endl;
}
 
 