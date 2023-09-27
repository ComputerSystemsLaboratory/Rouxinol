#include <iostream>
#include <algorithm>

using namespace std;

static const int N = 1000;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)

int n,a[N],m,dp[50010];
int dfs(int cost){
	int c = (1<<30);
	if(dp[cost] != (1<<30)){
		return dp[cost];
	}
	rep(i,n){
		if(cost-a[i] < 0)continue;
		c = min(c,dfs(cost-a[i]) + 1);
	}
	if(cost == 0)c=0;
	dp[cost] = c;
	return c;
}

int main(void){
	cin>>m>>n;
	rep(i,n)cin>>a[i];
	rep(i,50010)dp[i] = (1<<30);
	cout<<dfs(m)<<endl;;

}