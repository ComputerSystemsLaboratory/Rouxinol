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

//AOJ 0168(?????¢????????°)

int memo[31];

int dfs(int k) {
	if (k<= 1) return 1;
	if (k == 2) return 2;
	if (memo[k] == 0) {
		memo[k] = dfs(k - 1) + dfs(k - 2) + dfs(k - 3);
	}
	return memo[k];
}

signed main(){
	int n;
	while (cin>>n && n) {
		cout << (dfs(n) + 3649) / 3650 << endl;
	}
}