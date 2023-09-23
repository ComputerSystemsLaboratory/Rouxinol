#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char Map[105][105];
int m,n,ans;
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
void dfs(int x,int y,char ch)
{
    if(Map[x][y]==ch) Map[x][y]='.';
	for(int i=0;i<4;i++)
	{
	    int nx=x+dir[i][0],ny=y+dir[i][1];
		if(nx>=0&&nx<m&&ny>=0&&ny<n&&Map[nx][ny]==ch)
		{
			dfs(nx,ny,ch);
        }
	}
}
int main()
{
	while(scanf("%d%d",&m,&n)!=EOF)
	{
	    if(m==0&&n==0)  break;
		for(int i=0;i<m;i++) 	scanf("%s",Map[i]);
		ans=0;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(Map[i][j]!='.')
                {
                    ans++;
                    dfs(i,j,Map[i][j]);
                }
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}