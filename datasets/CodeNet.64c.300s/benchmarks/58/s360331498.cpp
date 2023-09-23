/*
ID:greenty2
LANG:C++
TASK:
*/
#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long LL;
int n,m;
char maps[105][105];
int book[105][105]; 
int dx []= {1,-1, 0,0};
int dy []= {0, 0,-1,1};
void dg(int x,int y,char ch)
{
	book[x][y]=1;
//	cout<<x<<" "<<y<<endl;
	for(int i=0;i<4;i++)
	{
		int xx= x+dx[i];
		int yy= y+dy[i];
		if(xx>0&&xx<=n&&yy>0&&yy<=m&&book[xx][yy]==0&&maps[xx][yy] == ch)
		{
			dg(xx,yy,ch);
		}
	}
	return ;
}
int main()
{
	while(~scanf("%d%d",&n,&m))
	{
		if(m==0&&n==0)
		return 0;
		memset(book,0,sizeof(book));
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				scanf(" %c",&maps[i][j]);
			}
		}
		int tot = 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(book[i][j]==0)
				{
					dg(i,j,maps[i][j]);
					tot++;
				}
			}
		}
		printf("%d\n",tot);
	}	
} 