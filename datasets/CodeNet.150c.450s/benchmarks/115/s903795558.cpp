#include <iostream>
#include <string>
using namespace std;

int preX[1020][55];
int dp[1020];

int main() {
	int q;
	cin >> q;
	for(int t = 0; t < q; t++) {
		string X, Y;
		for(int i = 0; i < 1020; i++) {
			for(int j = 0; j < 55; j++) {
				preX[i][j] = 0;
			}
			dp[i] = 0;
		}
		cin >> X >> Y;
		for(int i = 0; i < X.size(); i++) {
			for(int j = 0; j < 55; j++) {
				preX[i+1][j] = preX[i][j];
			}
			if(i > 0) {
				if('a' <= X[i-1] && X[i-1] <= 'z')
					preX[i+1][X[i-1]-'a'] = i;
				else
					preX[i+1][X[i-1]-'A'] = i;
			}
		}
		for(int i = 0; i < Y.size(); i++) {
			for(int j = (int)X.size()-1; j >= 0; j--) {
				if(Y[i] == X[j])
					for(int k = 0; k < 55; k++)
						dp[j+1] = max(dp[j+1], dp[preX[j+1][k]] + 1);
			}
		}
		int res = 0;
		for(int i = 0; i < 1020; i++)
			res = max(res, dp[i]);
		cout << res << endl;
	}
}