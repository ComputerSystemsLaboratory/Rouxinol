#include <iostream>

int dp[31];
int count(int n){
	if(dp[n] < 0){
		dp[n] = count(n-3)+count(n-2)+count(n-1);
	}
	return dp[n];
}
using namespace std;
int main(){
	for(int i = 0; i < 31; ++i){
		dp[i] = -1;
	}
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	int n;
	cin >> n;
	while(n){
		cout << ((count(n)+9)/10+364)/365 << endl;
		cin >> n;
	}
}