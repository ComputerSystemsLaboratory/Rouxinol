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


const int INF=1e9;


const int MAX_N = 110, MAX_W=10010;
int dp[MAX_W];

int main(){
	int n, W;
	cin>>n>>W;
	vi v(n, 0), w(n, 0);
	rep(i, n) cin>>v[i]>>w[i];

	for(int i = 0; i < n; i++){
		for(int j = W; j >=w[i]; j--){
			dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
		}
	}
	cout<<dp[W]<<endl;
}