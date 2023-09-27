#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
#define INF 1<<21
int main()
{
	long long int min,n,u,k,v,c,dist[100][100],s,cost[100],t[100],l=1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			dist[i][j]=INF;
			cost[i]=INF;
			t[i]=-1;
		}
	}
	min=INF;
	dist[0][0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>u;
		cin>>k;
		for(int i=1;i<=k;i++)
		{
			cin>>v>>c;
			dist[u][v]=c;
		}
	}
	s=0;
	cost[s]=0;
	while(l!=n)
	{
		for(int i=0;i<n;i++)
		{
			if(dist[s][i]!=INF)
			{
				if(cost[s]+dist[s][i]<cost[i])
				{
					cost[i]=cost[s]+dist[s][i];
				}
				
			}
		}
		t[s]=1;
		for(int i=1;i<n;i++)
		{
			if(cost[i]<min&&t[i]==-1)
			{
				min=cost[i];
				s=i;
			}
		}
		min=INF+1;
		l++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<i<<" "<<cost[i]<<endl;
	}
	return 0;
}
