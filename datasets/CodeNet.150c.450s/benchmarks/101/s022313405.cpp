#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stack>
#include <queue>
#include <list>
#include <stdio.h>
#include <algorithm>
#define MAX 100000
using namespace std;
typedef long long ll;
#define MAX 100000
vector<int> g[MAX];
int col[MAX];
void dfs(int s,int color)
{
	int v;
	col[s]=color;
	for(int i=0;i<g[s].size();i++)
	{
		v=g[s][i];
		if(col[v]==-1){
			dfs(v,color);
		}
	}
}
void init(int n)
{
	int id=0;
	for(int i=0;i<n;i++)
	{
		if(col[i]==-1){
			dfs(i,++id);
		}
	}
}
int main()
{	
	int n,m,num;
	int s,k;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>s>>k;
		g[s].push_back(k);
		g[k].push_back(s);
	}
	for(int i=0;i<n;i++)
	{
		col[i]=-1;
	}
	init(n);
	cin>>num;
	while(num--)
	{
		cin>>s>>k;
		if(col[s]==col[k]) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
