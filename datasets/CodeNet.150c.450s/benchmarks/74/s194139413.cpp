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

	vector<int> dp(n+1,INT_MAX);
	dp[0]=0;
	for(int i=1;i<n+1;++i){
		for(int j=0;j<m;++j){
			if(i>=Coins[j]){
				dp[i]=min(dp[i],dp[i-Coins[j]]+1);
			}
		}
	}

	cout<<dp[n]<<endl;

	//system("pause");
	return 0;
}