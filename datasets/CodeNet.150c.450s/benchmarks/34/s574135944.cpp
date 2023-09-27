#include <iostream>
#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int n,m;
	int dp[34] = {0};
	dp[0] = 1;
	rep(i,30)rep(j,3)dp[i+j+1] += dp[i];
	while(cin >> n , n)
		cout << (dp[n]+3649)/3650 << endl;

}