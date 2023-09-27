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

int dfs(int index,int rest,vector<vector<int>>& dp,const vector<pair<int,int>>& Items){
	if(index>dp.size()-1)return 0;
	if(dp[index][rest]>=0)return dp[index][rest];

	int tmp1=dfs(index+1,rest,dp,Items);
	int tmp2=-1;
	if(rest>=Items[index].second)tmp2=dfs(index+1,rest-Items[index].second,dp,Items)+Items[index].first;
	dp[index][rest]=max(tmp1,tmp2);
	return dp[index][rest];
}

int main() {
	int N,W;
	cin>>N>>W;
	vector<pair<int,int>> Items(N);
	for(auto& val:Items){
		cin>>val.first>>val.second;
	}

	vector<vector<int>> dp(N,vector<int>(W+1,-1));

	int ans=dfs(0,W,dp,Items);

	cout<<ans<<endl;

	//system("pause");
	return 0;
}