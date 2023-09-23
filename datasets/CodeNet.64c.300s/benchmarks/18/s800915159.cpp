#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <sstream>
#include <algorithm>
using namespace std;
const int INF = 100000000;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int n;
	while (cin >> n && n){
		//dp[n]はn段目に行く登り方の種類
		int dp[31];
		dp[0] = 1; dp[1] = 1; dp[2] = 2;
		for (int i = 3; i <= n; i++){
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		int cnt = dp[n];
		if (cnt % 10){
			cnt = cnt / 10 + 1;
		}
		else{
			cnt = cnt / 10;
		}
		if (cnt % 365){
			cnt = cnt / 365 + 1;
		}
		else{
			cnt = cnt / 10;
		}
		cout << cnt << endl;
	}
	return 0;
}