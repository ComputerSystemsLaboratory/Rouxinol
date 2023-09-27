#include <iostream>
#include <string>
using namespace std;
static const int MAX = 1001;

void lcs(string X, string Y) {
	int dp[MAX][MAX];  
	int i,j;

	int xLength = X.size();
	int yLength = Y.size();


	// initialize dp[][]
	for (i = 1; i <= xLength; i++)
		dp[i][0] = 0;
	for (i = 1; i <= yLength; i++)
		dp[0][i] = 0;

	for (i = 1; i <= xLength; i++){
		for (j = 1; j <= yLength; j++){
			// Because the original string is 0-based , so subtracted from 1
			if (X[i - 1] == Y[j - 1]) {
				dp[i][j] = dp[i-1][j-1] + 1;
			}else {
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}

	// testing code: print out the dp[][]
	// cout << "j";
	// for (j = 1; j <= yLength; j++)
	// 	cout << ' ' << j ;
	// cout << endl;
		

	// for (i = 1; i <= xLength; i++){
	// 	cout << i << '.';
	// 	for (j = 1; j <= yLength; j++){
	// 		cout << dp[i][j] << ' ';
	// 	}
	// 	cout << endl;
	// }

	cout << dp[xLength][yLength] << endl;
}

int main() {
	int n , i;
	string X, Y;

	cin >> n;
	for (i = 0 ; i < n; i++ ) {
		cin >> X;
		cin >> Y;
		lcs(X, Y);
	}

	return 0;

}