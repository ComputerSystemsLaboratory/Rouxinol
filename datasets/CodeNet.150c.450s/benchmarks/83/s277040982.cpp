#include <iostream>
using namespace std;

int main(){

	int N, W;
	cin >> N >> W;

	int w[101];
	int* v = new int[1001];

	for (int i = 0; i < N; i++)
		cin >> v[i] >> w[i];
	

	int DP[102][10001];

	for (int j = 0; j <= W; j++)
		DP[0][j] = 0;

	for (int i = 1; i <= N; i++)
		for (int j = 0; j <= W; j++)
			if (j < w[i - 1])
				DP[i][j] = DP[i-1][j];
			else{
				if (DP[i-1][j]>DP[i-1][j - w[i - 1]] + v[i - 1])
					DP[i][j] = DP[i - 1][j];
				else
					DP[i][j] = DP[i-1][j - w[i - 1]] + v[i - 1];
			}


			cout << DP[N][W] << endl;

			delete[] v;

			return 0;
}