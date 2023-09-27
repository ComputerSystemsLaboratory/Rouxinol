#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define EPS 1e-14

#define all(v) v.begin(),v.end()
#define INF 1<<30
#define mp make_pair
#define pb push_back

#define fi first
#define se second

#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

typedef long long ll;

void solve(){
	int n,m;
	int c[21];
	int dp[50000];
	rep(i,50000) dp[i]=-1;
	dp[0] = 0;
	cin >> n >> m;
	rep(i,m){
		cin >> c[i];
	}
	rep(i,n+1){
		int tm = 50001;
		rep(j,m){
			if(i-c[j]>=0 && dp[i-c[j]]!=-1){
				tm = min(dp[i-c[j]]+1,tm);
			}
		}
		if(tm!=50001) dp[i] = tm;
	}
	cout << dp[n] << endl;

}

int main(){
	solve();
	
	return 0;
}