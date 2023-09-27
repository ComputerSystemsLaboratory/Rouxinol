
#include <iostream>
using namespace std;

int N;//??°
int W;//?????§???
int v[100], w[100];
int DP[1000][1000] = { 0,0 };

int main()
{
	cin >> N >> W;
	for (int j = 0; j < N ; j++)
	{
		cin >> v[j];
		cin >> w[j];

	}



	for (int i = N - 1; i >= 0; i--)
	{
		for (int j = 0; j<=W; j++)
		{
			if (j < w[i]) {
				DP[i][j] = DP[i + 1][j];//???????????????????????????
			}
			else
			{
				if (DP[i + 1][j] > DP[i + 1][j - w[i]] + v[i])
				{
					DP[i][j] = DP[i + 1][j];
				}
				else
				{
					DP[i][j] =  DP[i + 1][j - w[i]] + v[i];
				}
			}
		}
	}
	cout << DP[0][W] << endl;

	return 0;
}