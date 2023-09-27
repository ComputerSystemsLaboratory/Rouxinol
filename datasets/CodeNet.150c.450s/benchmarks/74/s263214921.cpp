#include <iostream>
#include <cstring>

#define rep(i,n) for (int i=0;i< (n);i++)

const int INF = 1e9;

using namespace std;

int m,n;
int c[21];

int dp[21][100005];

int dfs(int i,int sum){
	if(i==m){
		if(n==sum)
			return 0;
		else
			return INF;
	}
	
	if(dp[i][sum] != -1) return dp[i][sum];
	
	int ret;
	
	ret=dfs(i+1,sum);
	
	if(sum + c[i] <= n){
		ret = min(ret,dfs(i,sum+c[i])+1);
	}
	return dp[i][sum] = ret;
}	
int main() {
	rep(i,21) rep(j,100005) dp[i][j] = -1;
	cin >> n >> m;
	rep(i,m) cin >> c[i];
	cout << dfs(0,0) << endl;
	return 0;
}