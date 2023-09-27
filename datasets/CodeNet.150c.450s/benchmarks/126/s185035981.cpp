#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
int main(){
	for(;;)
	{
		queue<pair<int,int> > que;
		int x,y,f[18][18],n,m,ans=0;
		pair<int,int> g,p,ex;
		scanf("%d %d",&x,&y);
		if(x==0&&y==0)
		{
			break;
		}
		g.first=x;
		g.second=y;
		ex.first=1;
		ex.second=1;
		que.push(ex);
		for(n=0;n<=x+1;n++)
		{
			for(m=0;m<=y+1;m++)
			{
				if(n==0||n>x||m==0||m>y)
				{
					f[n][m]=1;
				}
				else
				{
					f[n][m]=0;
				}
			}
		}
		scanf("%d",&n);
		for(m=0;m<n;m++)
		{
			scanf("%d %d",&x,&y);
			f[x][y]=1;
		}
		while(!que.empty())
		{
			p=que.front();
			if(f[p.first+1][p.second]==0)
			{
				ex.first=p.first+1;
				ex.second=p.second;
				if(ex==g)
				{
					ans=ans+1;
				}
				else
				{
				que.push(ex);
				}
			}
			if(f[p.first][p.second+1]==0)
			{
				ex.first=p.first;
				ex.second=p.second+1;
				if(ex==g)
				{
					ans=ans+1;
				}
				else
				{
				que.push(ex);
				}
			}
			que.pop();
		}
		printf("%d\n",ans);
	}
	return 0;
}