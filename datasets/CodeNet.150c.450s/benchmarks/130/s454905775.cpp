#include <iostream>
#include <string>
#include <vector>
#define GYOU_RETSU_MAX 100
using namespace std;

int main()
{
	int gyouretsu[GYOU_RETSU_MAX][GYOU_RETSU_MAX];
	int bekutoru[GYOU_RETSU_MAX];
	int gyou_beku[GYOU_RETSU_MAX];
	for (int g = 0; g < GYOU_RETSU_MAX; g++)
	{
		for (int r = 0; r < GYOU_RETSU_MAX; r++)
		{
			gyouretsu[g][r] = 0;
			bekutoru[r] = 0;
			gyou_beku[r] = 0;
		}
	}

	int n,m;
	cin >> n >> m;
	
	vector<int> input;

	int z;
	for (int i = 0; i < (n*m) + m; i++)
	{
		cin >> z;
		input.push_back(z);
	}

	int in = 0;
	for (int g = 0; g < n; g++)
	{
		for (int r = 0; r <m ; r++)
		{
			gyouretsu[g][r] = input[in];
			in++;
		}
	}
	
	int beku = 0;
	for (int i = n*m; i < (n*m)+m; i++)
	{
		bekutoru[beku] = input[i];
		beku++;
	}

	int g = 0;
	for (int i = 0; i < n; i++)
	{
		for (int r = 0; r < m; r++)
		{
			gyou_beku[i] = gyou_beku[i] + (gyouretsu[g][r] * bekutoru[r]);
		}
		g = g + 1;
	}

	for (int i = 0; i < n; i++)
	{
		cout << gyou_beku[i] << endl;
	}
	return 0;
}