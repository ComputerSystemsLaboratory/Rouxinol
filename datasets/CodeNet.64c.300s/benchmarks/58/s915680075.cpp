#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

int x[4]={1,-1,0,0};
int y[4]={0,0,1,-1};
int a[200][200],n,m,ans;
int cn,nn,mm,v[200][200],q[1000000][2];
char c;

void doit(int p,int qq)
{
	int t=0,w=0;
	q[0][0]=p;
	q[0][1]=qq;
	for (t=w=0;t<=w;t++)
	{
		for (int r=0;r<=3;r++)
		{
			int xx=q[t][0]+x[r];
			int yy=q[t][1]+y[r];
			if (a[xx][yy]==a[q[t][0]][q[t][1]] && v[xx][yy]==0)
			if (xx>0 && xx<=n && yy>0 && yy<=m)
			{
				w++;
				q[w][0]=xx;
				q[w][1]=yy;
				v[xx][yy]=1;
			}
		}
	}
}

int main(void)
{
	while(1)
	{
		memset(a,0,sizeof(a));
		memset(v,0,sizeof(v));
		ans=0;
		scanf("%d%d",&n,&m);
		if (n==0 && m==0)
		{
			break;
		}
		for (int i=1;i<=n;i++)
		{
			scanf("%c",&c);
			for (int j=1;j<=m;j++)
			{
				scanf("%c",&c);
				if (c=='#')
				a[i][j]=1;
				else
				if (c=='@')
				a[i][j]=2;
				else
				a[i][j]=3;
			}
		}
		for (int i=1;i<=n;i++)
		for (int j=1;j<=m;j++)
		{
			if (v[i][j]==0)
			{
				ans++;
				doit(i,j);
			}
		}		
		printf("%d\n",ans);
	}
	return 0;
}