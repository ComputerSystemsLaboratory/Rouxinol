#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int dan;
int dp[31];
int solve(int i);

int main(void){
	
	while(cin >> dan, dan){
		fill_n(dp,31,-1);
		int flag = 0;
		if(solve(0) % 3650 != 0){flag++;}
		int ans = solve(0)/3650 + flag;
		cout << ans << endl;
	}
}

int solve(int num){
	if(num == dan){return 1;}
	if(num > dan){return 0;}
	if(dp[num] != -1){return dp[num];}
	int sum = 0;
	for(int i = 0; i < 3; i++){
		sum += solve(num + i + 1);
	}
	return dp[num] = sum;
}