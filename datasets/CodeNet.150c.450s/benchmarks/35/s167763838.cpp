#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, k;
	vector<int> dp;
	while(true){
		cin >> n;
		if(n == 0)
			return 0;
		for(int i = 0; i < n; i++){
			cin >> k;
			if(i == 0)
				dp.push_back(k);
			else
				dp.push_back(max(dp[i -1] + k, k));
		}
		int max = dp[0];
		for(int i = 0; i < n; i++){
			if(max < dp[i]){
				max = dp[i];
			}
		}
		dp.clear();
		cout << max << endl;
	}
}