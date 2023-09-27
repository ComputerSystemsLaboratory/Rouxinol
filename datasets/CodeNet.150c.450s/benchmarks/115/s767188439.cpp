#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

static const int N = 1000;

int lcs(string X, string Y){
	int dp[N + 1][N + 1];
	int h = X.size();
	int w = Y.size();
	
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			if(X[i]==Y[j]){
				dp[i+1][j+1]=dp[i][j]+1;
			}
			else{
				dp[i+1][j+1]=max(dp[i+1][j], dp[i][j+1]);
			}
		}
	}
	return dp[h][w];
}



int main(void){

	int n;
	string s1, s2;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> s1 >> s2;
		cout << lcs(s1, s2) << endl;
	}
	return 0;
}