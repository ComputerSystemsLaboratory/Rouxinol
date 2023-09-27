#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<deque>
using namespace std;
const int MAX=1e5+10; 
vector<int>v[MAX];
deque<int>q;
int d[MAX];
int vis[MAX];
void bfs()
{
	while(q.size())
	{
		
		int x=q.front();
		q.pop_front();
		for(int i=0;i<v[x].size();i++)
		{
			int y=v[x][i];
			if(!vis[y])
			{
				if(d[y]==999999999)
				d[y]=x;
				q.push_back(y);
				vis[y]=1;
			}
		}
	}
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++)
	{
		int hhn,hn;
		scanf("%d%d",&hhn,&hn);
		v[hhn].push_back(hn);
		v[hn].push_back(hhn);
	} 
	d[1]=0;
	vis[1]=1;
	for(int i=2;i<=n;i++)
	{
		d[i]=999999999;vis[i]=0;
	}
	q.push_back(1);
	bfs();
	int flag=1;
	for(int i=2;i<=n;i++)
	{
		if(d[i]==999999999)
		{
			flag=0;break;
		}
	}
	if(flag)
	{
		cout<<"Yes"<<endl;
		for(int i=2;i<=n;i++)
		cout<<d[i]<<endl;
	}else
	cout<<"No"<<endl;
return 0;
 } 