
#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
char map[1005][1005];
char map1[1005][1005];
int a[1005][1005];
int m,n,q,num=0;
int main()
{
	int x,y;
	cin>>m>>n>>q;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>map[i][j];
			if(map[i][j]=='S')
				{
					x=i;
					y=j;
				 map[x][y]='0';
				}
		}
	}
	for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				map1[i][j]=map[i][j];

			}
		}

	for(int k=1;k<=q;k++)
	{
			queue<int> ac;
			queue<int> ak;

		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				map[i][j]=map1[i][j];
				if(map1[i][j]-'0'==k-1)
				{
					x=i;
					y=j;
					map[x][y]='X';
				}
			}
		}
		memset(a,0,sizeof(a));
		ac.push(x);
		ak.push(y);
		while(!ac.empty())
		{
			x=ac.front();
			y=ak.front();
			ac.pop();
			ak.pop();
			if(x+1<m)
			{
				if(map[x+1][y]!='X')
				{
					if(map[x+1][y]-'0'==k)
					{
						num+=a[x][y];
						num+=1;
						break;
					}
						map[x+1][y]='X';
						ac.push(x+1);
						ak.push(y);
						a[x+1][y]=a[x][y]+1;
				}
			}
				if(x-1>=0)
				{
					if(map[x-1][y]!='X')
					{

						if(map[x-1][y]-'0'==k)
						{
							num+=a[x][y]+1;
							break;
						}
						map[x-1][y]='X';
						ac.push(x-1);
						ak.push(y);
						a[x-1][y]=a[x][y]+1;
					}
				}
			if(y+1<n)
			{
				if(map[x][y+1]!='X')
				{

					if(map[x][y+1]-'0'==k)
					{
						num+=a[x][y]+1;
						break;
					}

						map[x][y+1]='X';
						ac.push(x);
						ak.push(y+1);
						a[x][y+1]=a[x][y]+1;
				}
			}
			if(y-1>=0)
			{
				if(map[x][y-1]!='X')
				{

					if(map[x][y-1]-'0'==k)
					{
						num+=a[x][y]+1;
						break;
					}

						map[x][y-1]='X';
						ac.push(x);
						ak.push(y-1);
						a[x][y-1]=a[x][y]+1;
				}
			}
		}
	}
	cout<<num<<endl;
	return 0;
}

