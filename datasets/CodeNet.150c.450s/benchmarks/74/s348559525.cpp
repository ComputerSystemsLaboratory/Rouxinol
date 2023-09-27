#include <iostream>
#define INF 1000000
using namespace std;

int n, m;
int _dp[50010];
int c[30];

int dp(int cost){
	if(_dp[cost]) return _dp[cost];
	if(cost == 0) return 0;
	int min = INF;
	for(int i=0; i<m; i++){
		if(cost - c[i] >= 0){
			int temp = dp(cost - c[i]) + 1;
			if(temp < min) min = temp;
		}
	}
	_dp[cost] = min;
	return _dp[cost];
}

int main(void){
	cin >> n;
	cin >> m;
	
	for(int i=0; i<m; i++) cin >> c[i];
	
	cout << dp(n) << endl;
	
	return 0;
}
