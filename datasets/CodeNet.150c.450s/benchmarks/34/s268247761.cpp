#include<iostream>
#include<cmath>
using namespace std;
long long f(long long a,long long b) {
	return floor(a / b);
}
int main(){
	long long dp[30];
	dp[1] = 1; dp[2] = 2; dp[3] = 4;
	for (int i = 4; i <= 30; i++)
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	int n;
	while (cin >> n){
		if (n == 0)return 0;
		cout << f(f(dp[n], 10), 365) + 1 << endl;
	}
}