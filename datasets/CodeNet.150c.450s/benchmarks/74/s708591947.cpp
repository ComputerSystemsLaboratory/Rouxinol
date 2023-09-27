#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<algorithm>
#include<list>
#include<cmath>
#include<iomanip>
#include<queue>
#include<functional>
#include<climits>
#include<iterator>
#include<unordered_map>

using namespace std;

const double pi=4*atan(1.0);

int mod=1000000007;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> Coins(m);
	for(auto& val:Coins)
		cin>>val;

	sort(begin(Coins),end(Coins));

	vector<vector<int>> dp(m,vector<int>(n+1));
	for(int i=0;i<m;++i){
		dp[i][0]=0;
	}

	for(int i=0;i<n+1;++i){
		dp[0][i]=i;
	}

	for(int i=1;i<m;++i){
		for(int j=1;j<min(Coins[i],n+1);++j){
			dp[i][j]=dp[i-1][j];
		}
		for(int j=Coins[i];j<n+1;++j){
			dp[i][j]=min(dp[i-1][j],dp[i][j-Coins[i]]+1);
		}
	}

	cout<<dp[m-1][n]<<endl;

	//system("pause");
	return 0;
}