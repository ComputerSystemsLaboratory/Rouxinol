#include <bits/stdc++.h>
using namespace std;

int dp[101][10001]={0};

int main(){
	int n , w;
	cin >> n >> w;
	vector< pair<int,int> > v(n+1);
	for(int i=1;i<=n;++i){
		cin >> v[i].second >> v[i].first;  //v.first:????????????v.second:??????
	}
	sort(v.begin(), v.end());

	for(int i=1;i<n+1;++i){
		for(int j=0;j<=w;++j){
				if ((j-v[i].first)>=0){
							dp[i][j]=max(dp[i-1][j-v[i].first]+v[i].second , dp[i-1][j]);
						} else {
							dp[i][j]=dp[i-1][j];
						}
					}	
		}
	
	cout << dp[n][w] << endl;
	return 0;
}