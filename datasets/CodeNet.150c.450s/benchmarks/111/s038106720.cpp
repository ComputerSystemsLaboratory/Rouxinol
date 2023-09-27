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
 
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define rep(i,n) REP(i,0,(n))
#define pb(n) push_back(n)
#define mp(n,m) make_pair(n, m)
#define all(r) r.begin(),r.end()
#define fi first
#define se second
#define println(X) cout<<X<<endl;
 
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int INF = 1e9;


int main(){
	int n;
	cin>>n;
	vi v(n);
	rep(i, n) cin>>v[i];
	ll dp[110][30];
	for(int i = 0; i < 110; i++){
		for(int j = 0; j < 30; j++){
			dp[i][j]=-1;
		}
	}
	dp[0][v[0]] = 1LL;
	for(int i = 1; i < n-1; i++){
		for(int j = 0; j <= 20; j++){
			if(dp[i-1][j] >= 0){
				if(j+v[i] <= 20) {
					dp[i][j + v[i]] = max(dp[i][j + v[i]], 0LL);
					dp[i][j+v[i]] += dp[i-1][j];
				}
				if(j-v[i]>=0){
					dp[i][j - v[i]] = max(dp[i][j - v[i]], 0LL);
					dp[i][j - v[i]] += dp[i-1][j];
				}
			}
		}
	}
	cout<<dp[n-2][v.back()]<<endl;
}