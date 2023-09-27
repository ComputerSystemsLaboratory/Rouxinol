#include<iostream>
#include<algorithm>

using namespace std;

const int INF=1<<21;

int main()
{
	int n;
	while(cin>>n,n)
	{
		int m[10][10]={};
		for(int i=0;i<10;i++)for(int j=0;j<10;j++)if(i!=j)m[i][j]=INF;
		int a,b,w,maxn=0;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b>>w;
			m[a][b]=m[b][a]=w;
			maxn=max(maxn,max(a,b));
		}
		maxn++;
		for(int k=0;k<maxn;k++)
			for(int i=0;i<maxn;i++)
				for(int j=0;j<maxn;j++)
					m[i][j]=min(m[i][j],m[i][k]+m[k][j]);
		
		int d[10];
		for(int i=0;i<maxn;i++)d[i]=0;
		for(int i=0;i<maxn;i++)
		{
			for(int j=0;j<maxn;j++)
			{
				d[i]+=m[i][j];
			}
		}
		int mini=0,mind=INF;
		for(int i=0;i<maxn;i++)
		{
			if(mind>d[i])
			{
				mini=i;
				mind=d[i];
			}
		}
		cout<<mini<<" "<<d[mini]<<endl;;
	}
	return 0;
}