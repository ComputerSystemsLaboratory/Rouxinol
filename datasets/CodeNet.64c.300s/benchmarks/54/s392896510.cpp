#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
	const int MAXNUM = 20;
	const int MAXN = 100;
	int N;
	long long dp[MAXN][MAXNUM+1];
	int nums[MAXN];

	// init
	for(int i=0; i<MAXN; i++){
		for(int j=0; j<=MAXNUM; j++){
			dp[i][j] = 0;
		}
	}

	// in
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> nums[i];
	}

	// calc
	dp[0][nums[0]] = 1;
	for(int i=0; i<N-2; i++){
		for(int j=0; j<=MAXNUM; j++){
			if( dp[i][j] == 0 )
				continue;

			for(int k=0; k<2; k++){
				int temp = k ? j + nums[i+1] : j - nums[i+1];
				if( temp < 0 || MAXNUM < temp )
					continue;
				dp[i+1][temp] += dp[i][j];
			}
		}
	}

	// out
	cout << dp[N-2][nums[N-1]] << endl;
	
	return 0;
}