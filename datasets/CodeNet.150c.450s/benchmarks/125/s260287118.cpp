#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<iostream>
#include<sstream>
#include<utility>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<set>
#include<stack>
using namespace std;
typedef long long ll;
typedef pair<int,int>P;
int N,u,k,x,r=0;
vector<int>V[105];
bool f[105]={0};
P c[105];

void dfs(int p)
{
	if(f[p])return;
	r++;
	f[p]=1;
	c[p].first=r;
	for(int i=0;i<V[p].size();i++)
	{
		dfs(V[p][i]);
	}
	r++;
	c[p].second=r;
}

int main()
{
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d%d",&u,&k);u--;
		for(int j=0;j<k;j++)
		{
			scanf("%d",&x);x--;
			V[u].push_back(x);
		}
		sort(V[u].begin(),V[u].end());
	}
	for(int i=0;i<N;i++)
		dfs(i);
	for(int i=0;i<N;i++)
		printf("%d %d %d\n",i+1,c[i].first,c[i].second);
	return 0;
}