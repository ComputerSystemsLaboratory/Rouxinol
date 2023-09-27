#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>

using namespace std;

int smaller(int x, int y){
	if(x < y){
		return x;
	}
	return y;
}

int main(){
	string X, Y;
	cin >> X >> Y;
	int lenX = X.size();
	int lenY = Y.size();
	int dp[lenX+1][lenY+1];
	for(int i = 0; i <= lenX; i++){
		dp[i][0] = i;
	}
	for(int i = 0; i <= lenY; i++){
		dp[0][i] = i;
	}
	for(int i = 0; i < lenX; i++){
		for(int j = 0; j < lenY; j++){
			int replacecost = 0;
			if(X[i] != Y[j]){
				replacecost = 1;
			}
			dp[i+1][j+1] = smaller(dp[i][j]+replacecost, smaller(dp[i][j+1], dp[i+1][j])+1);
		}
	}
	cout << dp[lenX][lenY] << "\n";
}

