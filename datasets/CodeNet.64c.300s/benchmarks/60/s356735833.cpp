#include<iostream>

using namespace std;

int main()
{
	int map[20][20];
	int x,y,i,j,n;
	
	for(;;)
	{
		cin >> x >> y ;
		if(x==0 && y==0)
			break;
		
		cin >> n ;
		for(i=0;i<n;i++)
		{
			int a,b;
			cin >> a >> b ;
			map[a-1][b-1]=-1;
		}
		int flag=0;
		for(i=0;i<x;i++)
		{
			if(map[i][0]==-1)
				flag=1;
			if(flag==1)
				map[i][0]=0;
			else
				map[i][0]=1;
		}
		flag=0;
		for(j=0;j<y;j++)
		{
			if(map[0][j]==-1)
				flag=1;
			if(flag==1)
				map[0][j]=0;
			else
				map[0][j]=1;
		}
		for(i=1;i<x;i++)
		{
			for(j=1;j<y;j++)
			{
				if(map[i][j]==-1)
					map[i][j]=0;
				else
					map[i][j]=map[i-1][j]+map[i][j-1];
			}
		}
		
		cout << map[x-1][y-1] << endl;
	}
	
}