#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
#define size 21
typedef long long int ll;

ll dp[2][size];

int main() {
	int n;
	cin >> n;
	
	for(int i = 0; i < size; i++) {
		dp[0][i] = dp[1][i] = 0;
	}
	
	int fst;
	cin >> fst;
	dp[0][fst] = 1;
	for(int i = 1; i < n - 1; i++) {
		int num;
		cin >> num;
		for(int j = 0; j < size; j++) {
			if(j+num < size) dp[i%2][j+num] += dp[(i-1)%2][j];
			if(j-num >= 0) dp[i%2][j-num] += dp[(i-1)%2][j];
		}
		for(int j = 0; j < size; j++) {
			dp[(i-1)%2][j] = 0;
		}
	}
	int res;
	cin >> res;
	cout << dp[n%2][res] << endl;
	return 0;
}