#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

int memo[300];
int dp(int num);

int main(void){
	while(1){
		int n;
		cin >> n;
		if(n == 0) break;

		memset(memo, -1, sizeof(memo));

		cout << (int)ceil(dp(n) / 3650.0) << endl;
		//cout << dp(n) << endl;
		
	}

	return 0;
}

int dp(int num){
	if(num < 0) return 0;
	if(memo[num] != -1) return memo[num];
	if(num <= 1) return memo[num] = 1;

	return memo[num] = dp(num-1) + dp(num-2) + dp(num-3);
}