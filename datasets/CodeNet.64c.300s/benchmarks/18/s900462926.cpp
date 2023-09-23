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

//AOJ 0168

signed main(){
	int n;
	int dp[31] = { 0 };
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	rep(i, 3, 31) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	while (cin>>n && n) {
		cout << (dp[n] + 3649) / 3650 << endl;
	}
}