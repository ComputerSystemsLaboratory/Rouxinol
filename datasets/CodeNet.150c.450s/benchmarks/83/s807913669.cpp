#include<iostream>
#include<algorithm>
using namespace std;
const int MAXN = 100;
const int MAXW = 10000;
int v[MAXN + 1], w[MAXN + 1];
int maxVal[MAXN + 1][MAXW + 1] = { 0 };
int main()
{
	int itemNum, maxCap;
	cin >> itemNum >> maxCap;
	for (int i = 1; i <= itemNum; i++)
		cin >> v[i] >> w[i];
	for(int i=1;i<=itemNum;i++)
		for (int c = 0; c <= maxCap; c++)
		{
			maxVal[i][c] = maxVal[i - 1][c];
			if (w[i] <= c)
				maxVal[i][c] = max(maxVal[i - 1][c], maxVal[i - 1][c-w[i]] + v[i]);
		}
	cout << maxVal[itemNum][maxCap] << endl;
}
