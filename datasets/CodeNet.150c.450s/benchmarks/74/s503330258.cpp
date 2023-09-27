#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
#define fi first
#define se second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

//DPL Coin Changing Problem

const int INF = 1e8;
int n, m;
int c[21];
int memo[50010];

int dfs(int t){
	if (memo[t] == INF) {
		if (t == 0) {
			memo[0] = 0;
		}
		else {
			rep(i, 0, m) {
				if (t - c[i] >= 0) {
					memo[t] = min(memo[t], dfs(t - c[i]) + 1);
				}
			}
		}
	}
	return memo[t];
}

signed main(){
	cin >> n >> m;
	rep(i, 0, m) cin >> c[i];
	rep(i, 0, 50010) memo[i] = INF;
	cout << dfs(n) << endl;
}