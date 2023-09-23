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

int main(){
	ll int dp[21][101] = {0};
	int num[101];
	int n;
	cin >> n;
	REP(i,n) cin >> num[i];
	dp[num[0]][1] = 1;
	FOR(i,1,n-1){
		REP(j,21){
			int tmp = j + num[i];
			if(0 <= tmp && tmp <= 20) dp[tmp][i+1] += dp[j][i];
			tmp = j - num[i];
			if(0 <= tmp && tmp <= 20) dp[tmp][i+1] += dp[j][i];
		}
	}
	cout << dp[num[n-1]][n-1] << endl;
}