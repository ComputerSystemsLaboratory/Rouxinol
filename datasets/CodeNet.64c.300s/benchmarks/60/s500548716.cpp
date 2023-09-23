#include<iostream>

using namespace std;

int main()
{
	int n,m,k,i,j;
	int map[20][20];
	
	for(;;)
	{
		cin >> n >> m ;
		if(n==0 && m==0)
			break;
		
		cin >> k ;
		
		for(i=0;i<20;i++)
			for(j=0;j<20;j++)
				map[i][j]=1;
		
		for(i=0;i<k;i++)
		{
			int x,y;
			cin >> x >> y ;
			x--;
			y--;
			map[x][y]=-1;
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(map[i][j]==-1)
				{
					map[i][j]=0;
				}
				else if(i==0 && j!=0)
				{
					if(map[i][j-1]==0)
						map[i][j]=0;
				}
				else if(i!=0 && j==0)
				{
					if(map[i-1][j]==0)
						map[i][j]=0;
				}
				else if(i!=0 && j!=0)
				{
					map[i][j]=map[i-1][j]+map[i][j-1];
				}
			}
		}
		cout << map[n-1][m-1] << endl;
	}
}