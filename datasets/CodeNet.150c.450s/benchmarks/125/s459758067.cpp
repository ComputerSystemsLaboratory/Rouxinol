#include <iostream>
#include<stack>
using namespace std;
const int MAXn=100;

int n,M[MAXn][MAXn]={0},nt[MAXn],col[MAXn];//color:0=white,1=gray,2=brack
int d[MAXn],f[MAXn],t;

int next(int u)
{
	for(int v=nt[u];v<n;v++)
	{
		nt[u]=v+1;
		if(M[u][v])return v;
	}
	return -1;
}

void dfs_visit(int u)
{
	stack<int> S;
	S.push(u);
	col[u]=1;
	d[u]=++t;
	while(!S.empty())
	{
		int v=S.top();
		int r=next(v);
		if(r!=-1)
		{
			if(col[r]==0)
			{
				col[r]=1;
				d[r]=++t;
				S.push(r);
			}
		}
		else
		{
			S.pop();
			col[v]=2;
			f[v]=++t;
		}
	}
	return;
}

void dfs()
{
	int u;
	for(u=0;u<n;u++)
	{
		col[u]=0;
		nt[u]=0;
	}
	t=0;
	
	for(u=0;u<n;u++)if(col[u]==0)dfs_visit(u);
	
	for(u=0;u<n;u++)cout<<u+1<<" "<<d[u]<<" "<<f[u]<<endl;
	
	return;
}

int main() {
	cin>>n;
	int id,k,v;
	for(int i=0;i<n;i++)
	{
		cin>>id>>k;
		id--;
		for(int j=0;j<k;j++)
		{
			cin>>v;
			M[id][--v]=1;
		}
	}
	dfs();
	return 0;
}