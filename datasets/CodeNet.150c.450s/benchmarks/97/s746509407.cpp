


#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include <functional>

using namespace std;

int INF = 10000000;




int main()
{
	int n;

	while(cin >> n  &&  n )
	{
		int cell[500][500];

		int x[300];
		int y[300];

		memset(cell,-1,sizeof(int)*500*500);
		memset(x,-1,sizeof(int)*300);
		memset(y,-1,sizeof(int)*300);

		cell[250][250] = 0;
		
		x[0] = 250;
		y[0] = 250;

		for(int i = 1;i < n;i++)
		{
			int tmp0,tmp1;

			cin >> tmp0 >> tmp1;

			int tx,ty;

			if(tmp1 == 0)
			{
				tx = -1;
				ty =  0;
			}else
			if(tmp1 == 1)
			{
				tx =  0;
				ty =  1;
			}else
			if(tmp1 == 2)
			{
				tx =  1;
				ty =  0;
			}else
			if(tmp1 == 3)
			{
				tx =  0;
				ty = -1;
			}

			cell[x[tmp0] + tx][y[tmp0] + ty] = i;
			x[i] = x[tmp0] + tx;
			y[i] = y[tmp0] + ty;
		}
		
		int h,w;

		int start = 500;
		int end = 0;
		for(int i = 0;i < 500;i++)
		{
			for(int j = 0;j < 500;j++)
			{
				if(cell[i][j] != -1){start = min(start,j);break;}
			}
			for(int j = 499;j >= 0;j--)
			{
				if(cell[i][j] != -1){end   = max(end,j);break;}
			}
		}

		h = end - start + 1;
		
		start = 500;
		end = 0;

		for(int i = 0;i < 500;i++)
		{
			for(int j = 0;j < 500;j++)
			{
				if(cell[j][i] != -1){start = min(start,j);break;}
			}
			for(int j = 499;j >= 0;j--)
			{
				if(cell[j][i] != -1){end   = max(end,j);break;}
			}
		}

		w = end - start + 1;

		cout << w << " " << h << endl;
		
	}

  return 0;
}