#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for(int i = 0 ; i < n ; i++)

int dp[1000001] , dp2[1000001];

vector<int> item;

int main(){
	int n;
	for(int i = 1 ; i * (i+1) * (i+2) / 6 <= 1000000 ; i++) item.push_back(i * (i+1) * (i+2) / 6);
	rep(i,1000001) dp[i] = 9999;
	rep(i,1000001) dp2[i]= 9999;
	dp[0] = dp2[0] = 0;

	for(int i = 0 ; i <= 1000000 ; i++){
		for(int j = 0 ; j < item.size() && item[j]+i <= 1000000 ; j++){
			dp[i + item[j]] = min(dp[i + item[j]] , dp[i] + 1);
		}
	}
	for(int i = 0 ; i <= 1000000 ; i++){
		for(int j = 0 ; j < item.size() && item[j]+i <= 1000000 ; j++){
			if(item[j] % 2) dp2[i + item[j]] = min(dp2[i + item[j]] , dp2[i] + 1);
		}
	}
	
	while(cin >> n && n){
		cout << dp[n] << " " << dp2[n] << endl;
	}
}