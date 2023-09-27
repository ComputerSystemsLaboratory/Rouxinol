#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <string.h>
#include <stack>
#include <algorithm>
using namespace std;

int dp[101][10001]; //i番目で、残りの容量がjの時の価値
int n, weight;
int v[101], w[101];

int rec(int i, int j) //i番目で、残りの容量がj
{
	if (dp[i][j] > 0)
	{
		return dp[i][j];
	}

	if (i == n)
	{
		return 0;
	}
	else if (j < w[i]) //次に入れる物の重さが容量を超えている時は「入れない」一択
	{
		dp[i][j] = rec(i + 1, j); //iは次に進み、残り容量はそのまま
	}
	else //入りそうな時は、「入れる」「入れない」を計算して、大きい方を選択
	{
		dp[i][j] = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
		//上のやつと、iは次に進み、残り容量を減らしたものに価値を足したものを比較
	}

	return dp[i][j];
}

int main()
{
	cin >> n >> weight;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i] >> w[i];
	}
	memset(dp, -1, sizeof(dp));

	cout << rec(0, weight) << endl;
	return 0;
}