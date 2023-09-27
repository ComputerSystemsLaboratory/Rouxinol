// 2018/07/10 Tazoe

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, W;
	cin >> N >> W;

	int v[100];
	int w[100];
	for(int i=0; i<N; i++){
		cin >> v[i] >> w[i];
	}

	int DP[101][10001];

	for(int j=0; j<=W; j++){
		DP[0][j] = 0;
	}

	for(int i=1; i<=N; i++){
		for(int j=0; j<=W; j++){
			if(j<w[i-1]){
				DP[i][j] = DP[i-1][j];
			}
			else{
				DP[i][j] = max(DP[i-1][j], DP[i-1][j-w[i-1]]+v[i-1]);
			}
		}
	}

	cout << DP[N][W] << endl;

	return 0;
}

