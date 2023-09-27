#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
	int N,W;
	cin >>N >>W;
	vector< pair<int,int> > A(N);
	for(int i = 0; i< N ; i++) {
		cin >>A[i].first;
		cin >>A[i].second;
	}
	
	vector<vector<int> > dp(N, vector<int>(W+1));
	for(int i = 0; i<N;i++){
		for(int c = 0;c<=W;c++){
			int k = c-A[i].second;
			if(i == 0){
						if(k >=0)	dp[0][c] = A[0].first;
						else	dp[0][c] = 0;
 					}	
			else if(k < 0) {
				dp[i][c] = dp[i-1][c];
				}
			else {
					if(A[i].first+dp[i-1][k]<dp[i-1][c])
							dp[i][c] = dp[i-1][c];
					else dp[i][c] = A[i].first + dp[i-1][k];
				}
		}
	}

	cout << dp[N-1][W] << endl;
	return 0 ;
}