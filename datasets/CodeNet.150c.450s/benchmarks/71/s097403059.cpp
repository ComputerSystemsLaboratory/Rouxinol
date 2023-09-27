#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	int n;
	while (cin >> n) {
		int dp[4][51] = {}; //abcd, n
		for (int i = 0; i <= 9; ++i) {
			dp[0][i] = 1;
		}
		for (int i = 1; i < 4; ++i) {
			for (int j = 0; j < 50; ++j) {
				for (int k = 0; k <= 9; ++k) {
					dp[i][j+k] += dp[i-1][j];
				}
			}
		}
		cout << dp[3][n] << endl;
	}
	return 0;
}