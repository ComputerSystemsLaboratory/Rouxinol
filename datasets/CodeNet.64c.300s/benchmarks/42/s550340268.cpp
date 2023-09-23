#include<cmath>
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<cstdio>
#include<map>
#define rep(i,n) for(int i=0;i<n;i++)
#define fori(i,k,n) for(int i=k;i<n;i++)
using namespace std;
const int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
const int dX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }, dY[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };



int main()
{
	int n;
	cin >> n;
	while (n)
	{
		int a[25][25] = {};
		int x = 10, y = 10;

		for (int i = 0; i < n; i++)
		{
			int X, Y;
			cin >> X >> Y;
			a[X][Y] = 1;
		}
		int m;
		cin >> m;
		char v;
		int s;
		for (int i = 0; i < m; i++)
		{
			cin >> v >> s;
			switch (v)
			{
			case'N':
				for (int z = 0; z < s; z++)
				{
					y++;
					if (a[x][y] == 1)
					{
						a[x][y] = 0;
						n--;
					}
				}
				break;
			case'E':
				for (int z = 0; z < s; z++)
				{
					x++;
					if (a[x][y] == 1)
					{
						a[x][y] = 0;
						n--;
					}
				}
				break;
			case'S':
				for (int z = 0; z < s; z++)
				{
					y--;
					if (a[x][y] == 1)
					{
						a[x][y] = 0;
						n--;
					}
				}
				break;
			case'W':
				for (int z = 0; z < s; z++)
				{
					x--;
					if (a[x][y] == 1)
					{
						a[x][y] = 0;
						n--;
					}
				}
				break;
			}

		}




		if (n)cout << "No" << endl; else cout << "Yes" << endl;
		cin >> n;
	}


	return 0;
}