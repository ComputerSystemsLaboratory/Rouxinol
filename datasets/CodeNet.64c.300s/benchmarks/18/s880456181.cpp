#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int solve(int n);
int dp[100];

int main(){
	int n;
	while(cin >> n , n){
		memset(dp,0,n+2);
		int ans = solve(n);
		cout << ans/365/10+1 << endl;
	}
}

int solve(int n){
	if(n == 0) return 1;
	if(dp[n] != 0) return dp[n];
	int cou=0;
	for(int i=1;i<=3;i++){
		if(n-i >= 0) cou += solve(n-i);
	}
	return dp[n] = cou;
}