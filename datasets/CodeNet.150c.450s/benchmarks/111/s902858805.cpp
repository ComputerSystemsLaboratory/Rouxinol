#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define vi vector<int>
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
#define pi 3.14159265359
#define shosu(X) fixed << setprecision(X)
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

ll int dp[101][21];
int main(){
	int n;
	cin >> n;
	REP(i,101) REP(j,21) dp[i][j] = 0;
	REP(i,n-1){
		int t;
		cin >> t;
		if(i == 0){
			dp[1][t] = 1;
			continue;
		}
		REP(j,21){
			int v = j + t;
			int v2 = j - t;
			if(v >= 0 && v <= 20) dp[i+1][v] += dp[i][j];
			if(v2 >= 0 && v2 <= 20) dp[i+1][v2] += dp[i][j];
		}
	}
	int a;
	cin >> a;
	cout << dp[n-1][a] << endl;
}