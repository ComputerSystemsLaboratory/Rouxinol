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

int dfs(int index,int time,vector<vector<int>>& dp,const vector<pair<int,int>>& Works){
	if(index>dp.size()-1)return 0;
	if(dp[index][time]>=0)return dp[index][time];

	int tmp1=dfs(index+1,time,dp,Works);
	int tmp2;
	if(time>=Works[index].second)tmp2=dfs(index+1,time-Works[index].second,dp,Works)+Works[index].first;
	dp[index][time]=max(tmp1,tmp2);
	return dp[index][time];
}

int get_ans(int W,int n,vector<vector<int>>& dp,const vector<pair<int,int>>& items){
	for(int j = 0; j <= W; j++) {
		dp[n][j] = 0;
	}
	for(int i = n - 1; i >= 0; i--) {
		for(int j = 0; j <= W; j++) {
			if(j < items[i].second)
				dp[i][j] = dp[i + 1][j];
			else
				dp[i][j] = max(dp[i + 1][j],dp[i + 1][j - items[i].second] + items[i].first);
		}
	}
	return dp[0][W];
}

int main() {
	//while(1){
		int N,M;
		cin>>N>>M;
		vector<pair<int,int>> Works(N);
		for(auto& val:Works){
			cin>>val.first>>val.second;
		}

		vector<vector<int>> dp(N+1,vector<int>(M+1,-1));

		//cout<<dfs(0,M,dp,Works)<<endl;
		cout<<get_ans(M,N,dp,Works)<<endl;

	//}
	//system("pause");
	return 0;
}