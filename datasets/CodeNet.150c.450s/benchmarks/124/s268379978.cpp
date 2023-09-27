#include <iostream>
using namespace std;
const int MAXn=100;
const int INFTY=1<<21;

int n,M[MAXn][MAXn],col[MAXn],d[MAXn],p[MAXn];

void dijkstra(int s)
{
	for(int i=0;i<n;i++)
	{
		col[i]=0;
		d[i]=INFTY;
	}
	d[s]=0;
	p[s]=-1;
	
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
				if(d[u]+M[u][v]<d[v])
				{
					d[v]=d[u]+M[u][v];
					p[v]=u;
					col[v]=1;
				}
			}
		}
	}
	
	for(int i=0;i<n;i++)cout<<i<<" "<<(d[i]==INFTY?-1:d[i])<<endl;
	
	return;
}

int main() {
	cin>>n;
	int id,k,v,c;
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)M[i][j]=INFTY;
	for(int i=0;i<n;i++)
	{
		cin>>id>>k;
		for(int j=0;j<k;j++)
		{
			cin>>v>>c;
			M[id][v]=c;
		}
	}
	dijkstra(0);
	return 0;
}