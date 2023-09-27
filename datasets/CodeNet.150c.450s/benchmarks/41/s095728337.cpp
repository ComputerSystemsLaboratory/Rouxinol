//knasiri
#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
#define f first
#define s second
#define pb push_back
using namespace std;
pair<int,int>a[20000+10];
const long int INF=9990099999;
long long int dis[100000];
long long int w[100000];
long long int n,m,r;
bool neg_cycle=false;
void belman_ford(int x)
{
	for(int i=0;i<n;i++)
	{
		dis[i]=INF;
	}
	dis[x]=0;
	for(int i=0;i<=n+1;i++)
	{
		for(int j=0;j<m;j++)
		{
			long long int u=a[j].f;
			long long int v=a[j].s;
			if(i>=(n-1))
			{
				if(((dis[u]+w[j])<dis[v])&& dis[u]!=INF)
					neg_cycle=true;
			}
			else
			{
				if(dis[u]!=INF)
				{
					dis[v]=min((dis[u]+w[j]),dis[v]);
				}
			}
			
			//cout<<v<<" <------> "<<dis[v]<<endl;
		}

	}
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a[i].f>>a[i].s>>w[i];
	}
	for(int i=0;i<n;i++)
	{
		belman_ford(i);
		if(neg_cycle)
		{
			cout<<"NEGATIVE CYCLE"<<endl;
			return 0;
		}
		for(int j=0;j<n;j++)
		{
			if(dis[j]==INF)
			{
				cout<<"INF";
			}
			if(dis[j]!=INF)
			{
				cout<<dis[j];
			}
			if(j!=n-1)
				cout<<' ';
		}
		cout<<endl;
	}
	

///ddddddddd//dd//d//ddddd/dd//d
}