//	created : 16/03/13
// 	author   : Rp7rf
#include <iostream>
#include <vector>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define INF 1e9
#define MAX 100000

int main(void){
	int n,m;
	cin>>n>>m;
	vi c(m);
	int dp[50000];
	rep(i,m)cin>>c[i];
	rep(i,n+1)dp[i] = INF;
	dp[0] = 0;
	rep(i,m+1)
		for(int j = 0 ; j + c[i] <= n ; j ++)
			dp[j+c[i]] = min(dp[j + c[i]],dp[j] + 1);
	cout << dp[n] << endl;
}