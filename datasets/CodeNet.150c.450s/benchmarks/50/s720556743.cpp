#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

const int INF = 100000000;

int main(){

	int dp[1000];
	fill(dp,dp+1000,INF);
	dp[0] = 0;

	int serve[] = {1,5,10,50,100,500};
	for(int i = 1; i < 1000; i++){
		for(int j = 0; j < 6; j++){
			if(i - serve[j] >= 0){
				dp[i] = min(dp[i],dp[i-serve[j]] + 1);
			}
			else
				break;
		}
	}

	int n;
	while(cin >> n && n != 0){
		int left = 1000 - n;
		cout << dp[left] << endl;
	}

	return 0;
}