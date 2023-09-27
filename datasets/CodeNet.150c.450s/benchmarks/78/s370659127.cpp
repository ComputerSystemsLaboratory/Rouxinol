#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 1000000;

int main(){
	vector<int> tetrahedral, odd_tetrahedral;
	for(int i = 0; ; ++i){
		int y = i * (i + 1) * (i + 2) / 6;
		if(y > MAX_N){ break; }
		tetrahedral.push_back(y);
		if(y % 2 == 1){ odd_tetrahedral.push_back(y); }
	}
	vector<int> dp(MAX_N, -1), odd_dp(MAX_N, -1);
	dp[0] = odd_dp[0] = 0;
	for(int i = 0; i < MAX_N; ++i){
		for(int j = 0; j < tetrahedral.size(); ++j){
			int next = i + tetrahedral[j];
			if(next >= MAX_N){ break; }
			if(dp[next] < 0){
				dp[next] = dp[i] + 1;
			}else if(dp[next] > dp[i] + 1){
				dp[next] = dp[i] + 1;
			}
		}
		for(int j = 0; j < odd_tetrahedral.size(); ++j){
			int next = i + odd_tetrahedral[j];
			if(next >= MAX_N){ break; }
			if(odd_dp[next] < 0){
				odd_dp[next] = odd_dp[i] + 1;
			}else if(odd_dp[next] > odd_dp[i] + 1){
				odd_dp[next] = odd_dp[i] + 1;
			}
		}
	}
	while(true){
		int n;
		cin >> n;
		if(n == 0){ break; }
		cout << dp[n] << " " << odd_dp[n] << endl;
	}
	return 0;
}