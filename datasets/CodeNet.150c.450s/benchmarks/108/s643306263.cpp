#include <bits/stdc++.h>
using namespace std;
int n, u, v, k, l;
int edge[10001];
int start[101];
int goal[101];
int c;
int bfs[101];
queue<int> Q;
int main()
{
	cin >> n;
	c=0;
	for(int i=1; i<=n; i++)
	{
		cin >> u;
		start[i]=c;
		cin >> k;
		c+=k;
		goal[i]=c;
		for(int j=start[i]; j<goal[i]; j++)
		{
			cin >> edge[j];
		}
	}
	for(int i=1; i<=n; i++)
	{
		bfs[i]=-1;
	}
	bfs[1]=0;
	Q.push(1);
	while(!Q.empty())
	{
		v=Q.front();
		Q.pop();
		for(int j=start[v]; j<goal[v]; j++)
		{
			l=edge[j];
			if(bfs[l]==-1)
			{
				bfs[l]=bfs[v]+1;
				Q.push(l);
			}
		}
	}
	for(int i=1; i<=n; i++)
	{
		cout << i << ' ' << bfs[i] << endl;
	}
	return 0;
}