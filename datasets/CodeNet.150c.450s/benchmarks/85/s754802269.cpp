/*
 * ALDS1_10_B.cpp
 *
 *  Created on: May 5, 2018
 *      Author: 13743
 */

#include<iostream>
#include<algorithm>

using namespace std;

struct Mat {
	int row;
	int col;
};

long mcm(Mat* M, int n) {
	long dp[101][101];
	for(int i=2; i<=n; i++) {
		for(int j=0; j<=n-i; j++) {
			dp[i][j] = 99999999999L;
			for(int k=1; k<i; k++) {
				dp[i][j] = min(dp[k][j]+dp[i-k][j+k]+M[j].row*M[j+k].row*M[j+i-1].col, dp[i][j]);
			}
		}
	}
	return dp[n][0];
}

long dpR[101][101];

long mcmRec(Mat* M, int l, int r) {
	if(r - l < 2) return 0;
	if(dpR[l][r] == 0) {
		dpR[l][r] = 9999999999L;
		for(int i=1; i<r-l; i++) {
			dpR[l][r] = min(mcmRec(M,l,l+i)+mcmRec(M,l+i,r)+M[l].row*M[l+i].row*M[r-1].col, dpR[l][r]);
		}
	}
	return dpR[l][r];
}

int main() {
	int n;
	Mat M[100];

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> M[i].row >> M[i].col;
	}

//	long ans = mcm(M, n);
	long ans = mcmRec(M, 0, n);
	cout << ans << endl;

}



