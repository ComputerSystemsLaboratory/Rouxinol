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


const int MAX_N = 100010;
int dp[MAX_N];

int main(){
	int n;
	cin>>n;
	vi a(n, 0);
	rep(i, n) cin>>a[i];

	for(int i = 0; i <= n; i++){
		dp[i]=INF;
	}
	for(int i = 0; i < n; i++){
		*lower_bound(dp, dp+n,a[i]) = a[i];
	}

	cout<<lower_bound(dp, dp+ n, INF)-dp<<endl;
}