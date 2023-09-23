


#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include <functional>

using namespace std;

int INF = 10000000;

int n;



int main()
{

	while(cin >> n && n)
	{
		int sx = 10,sy = 10;
		
		bool cell[21][21];
		memset(cell,0,21*21*sizeof(bool));

		for(int i = 0;i < n;i++)
		{
			int x,y;
			cin >> x >> y;
			cell[x][y] = true;
		}

		cell[sx][sy] = false;

		int m;
		cin >> m;

		for(int i = 0;i < m;i++)
		{
			char order;
			int val;

			cin >> order >> val;

			if(order == 'N')
			{
				for(int j = 0;j < val;j++)
				{
					cell[sx][++sy] = false;
				}
				
			}
			if(order == 'E')
			{
				for(int j = 0;j < val;j++)
				{
					cell[++sx][sy] = false;
				}
			}
			if(order == 'S')
			{
				for(int j = 0;j < val;j++)
				{
					cell[sx][--sy] = false;
				}
			}
			if(order == 'W')
			{
				for(int j = 0;j < val;j++)
				{
					cell[--sx][sy] = false;
				}
			}

		}
		bool flag = false;

		for(int i = 0;i < 21;i++)
		{
			for(int j = 0;j < 21;j++)
			{
				if(cell[i][j])flag = true;
			}
		}

		if(flag)cout << "No" << endl;
		else    cout << "Yes"  << endl;

	}

  return 0;
}