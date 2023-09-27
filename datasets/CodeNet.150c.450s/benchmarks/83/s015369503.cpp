#include <iostream>
#include <cmath>

int dp[101][10001]; // i????????§?????????j??????????????§???v
int N, W;

int v[10000];
int w[10000];


using namespace std;

int serch(int i,int cw) {
	if (i >= N) return 0; 
	if (dp[i][cw] != -1) return dp[i][cw];
	if (cw + w[i] > W) return dp[i][cw] = serch(i + 1,cw);
	return dp[i][cw] = max(serch(i+1,cw + w[i]) + v[i],serch(i + 1,cw));
}


int main() {

	for (int i = 0; i < 100; i++) {
		for(int j = 0; j < 10000; j++) {
			dp[i][j] = -1;
		}
	}

	cin >> N >> W;

	for (int i = 0; i < N; i++) {
		cin >> v[i] >> w[i];
	}

	cout << serch(0,0) << endl;

	return 0;
}