#include<iostream>
using namespace std;
int main()
{
	int count[4][3][10];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				count[i][j][k] = 0;
			}
		}
	}
	int n, b, f, r, v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> b >> f >> r >> v;
		count[b - 1][f - 1][r - 1] = count[b - 1][f - 1][r - 1] + v;
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				if (k == 9)cout <<" "<< count[i][j][k] << endl;
				else cout <<" "<< count[i][j][k] ;
				if (k == 9 && j == 2)
				{
					if (i < 3)cout << "####################" << endl;
				}
			}
		}
	}
	


	return 0;

}