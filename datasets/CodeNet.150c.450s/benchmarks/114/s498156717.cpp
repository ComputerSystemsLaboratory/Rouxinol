#include <iostream>
using namespace std;
const int MAXn=100;
const int INFTY=1<<21;

int n,M[MAXn][MAXn],col[MAXn],d[MAXn],p[MAXn];

void prim()
{
	for(int i=0;i<n;i++)
	{
		col[i]=0;
		d[i]=INFTY;
	}
	d[0]=0;
	p[0]=-1;
	
	while(1)
	{
		int mincost=INFTY;
		int u;
		for(int i=0;i<n;i++)
		{
			if(col[i]!=2&&d[i]<mincost)
			{
				mincost=d[i];
				u=i;
			}
		}
		if(mincost==INFTY)break;
		col[u]=2;
		for(int v=0;v<n;v++)
		{
			if(col[v]!=2&&M[u][v]!=INFTY)
			{
				if(M[u][v]<d[v])
				{
					d[v]=M[u][v];
					p[v]=u;
					col[v]=1;
				}
			}
		}
	}
	return;
}

int sum()
{
	int sum=0;
	for(int i=0;i<n;i++)if(p[i]!=-1)sum+=M[i][p[i]];
	return sum;
}

int main() {
	cin>>n;
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)
	{
		cin>>M[i][j];
		if(M[i][j]==-1)M[i][j]=INFTY;
	}
	prim();cout<<sum()<<endl;
	return 0;
}