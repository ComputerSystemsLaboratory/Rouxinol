#include<iostream>
using namespace std;
int main()
{
	int n,t[4][3][10],b,f,r,v;

	for (int a = 0;a < 4;a++){
		for (int b = 0; b < 3; b++){
			for (int c = 0; c < 10; c++){
				t[a][b][c] = 0;
			}
		}
	}
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> b >> f >> r >> v;
		int x, y, z;
		x = b - 1;
		y = f - 1;
		z = r - 1;
		t[x][y][z] += v;
	}


	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				cout <<" "<< t[i][j][k];
			}
			cout << endl;
		}
		if (i  != 3)cout << "####################" << endl;
	}
	cin >> n;

	return 0;
}