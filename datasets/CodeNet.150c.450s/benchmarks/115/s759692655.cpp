#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int dp[1001][1001];

int main(){
	int n; cin >> n;
	while (n--){
		string X, Y; cin >> X >> Y;
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= X.size(); ++i){
			for (int j = 1; j <= Y.size(); ++j){
				if (X[i-1] == Y[j-1]) dp[i][j] = max(dp[i][j-1],max(dp[i-1][j],dp[i-1][j-1]+1));
				else dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}
		}
		cout << dp[(int)X.size()][(int)Y.size()] << '\n';
	}
}