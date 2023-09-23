#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
ll dfs(int sum,int cou);
int n;
int num[101];
ll dp[30][110];

int main(){
	cin >> n;
	for(int i=0;i<n;i++) cin >> num[i];
	for(int i=0;i<30;i++){
		for(int j=0;j<110;j++){
			dp[i][j] = -1;
		}
	}
	cout << dfs(num[0],1) << endl;
}

ll dfs(int sum,int cou){
	if(cou == n-1){
		if(sum == num[cou]) return 1;
		else return 0;
	}
	if(dp[sum][cou] != -1) return dp[sum][cou];
	ll ret = 0;
	if(sum-num[cou] >= 0) ret += dfs(sum-num[cou],cou+1);
	if(sum+num[cou] <= 20) ret += dfs(sum+num[cou],cou+1);
	return dp[sum][cou] = ret;
}