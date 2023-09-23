#include <iostream>
#include <string>
#define GYOU_RETSU_MAX 100
using namespace std;

int main()
{
	int gyouresu[GYOU_RETSU_MAX][GYOU_RETSU_MAX];
	int bekutoru[GYOU_RETSU_MAX];
	int gyou_beku[GYOU_RETSU_MAX];
	for (int g = 0; g < GYOU_RETSU_MAX; g++)
	{
		for (int r = 0; r < GYOU_RETSU_MAX; r++)
		{
			gyouresu[g][r] = 0;
			bekutoru[r] = 0;
			gyou_beku[r] = 0;
		}
	}

	int n,m;
	cin >> n >> m;
	
	for (int g = 0; g < n; g++)
	{
		for (int r = 0; r <m ; r++)
		{
			cin >> gyouresu[g][r];
		}
	}
	
	for (int i = 0; i < m; i++)
	{
		cin >> bekutoru[i];
	}

	int g = 0;
	for (int i = 0; i < n; i++)
	{
		for (int r = 0; r < m; r++)
		{
			gyou_beku[i] = gyou_beku[i] + (gyouresu[g][r] * bekutoru[r]);
		}
		g = g + 1;
	}

	for (int i = 0; i < n; i++)
	{
		cout << gyou_beku[i] << endl;
	}
	return 0;
}