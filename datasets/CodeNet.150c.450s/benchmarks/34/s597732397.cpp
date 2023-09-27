#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
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
	memo[0] = memo[1] = 1;
	memo[2] = 2;

	for(int i=3; i<=num; i++){
		memo[i] = memo[i-1] + memo[i-2] + memo[i-3];
	}

	return memo[num];
}