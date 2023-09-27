#include<iostream>
#include<cstdio>
using namespace std;

int n, M[100][100];

int prim()
{
	int i,u,v,min_v,sum;
	int d[100],p[100],c[100];
	
	for(i=0;i<=n-1;i++)
	{
		d[i]=(1<<21);
		p[i]=-1;
		c[i]=0;
	}
	
	d[0]=0;
	
	while(1)
	{
		min_v=(1<<21);
		u=-1;
		for(i=0;i<=n-1;i++)
		{
			if(min_v > d[i] && c[i] != 2)
			{
				u=i;
				min_v=d[i];
			}
		}
		if(u==-1) break;
		c[u]=2;
		for(v=0;v<=n-1;v++)
		{
			if(c[v] != 2 && M[u][v] != (1<<21))
			{
				if(d[v] > M[u][v])
				{
				    d[v]=M[u][v];
				    p[v]=u;
				    c[v]=1;
				}
			}
		}
	}
	sum=0;
	for(i=0;i<=n-1;i++)
	{
		if(p[i] != -1) sum+=M[i][p[i]];
	}
	return sum;
}

int main()
{
	int i,j,e;
	cin >> n;
	
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			cin >> e;
			if(e == -1) M[i][j]=(1<<21);
			else M[i][j]=e;
		}
	}
	
	cout << prim() << endl;
	return 0;
}