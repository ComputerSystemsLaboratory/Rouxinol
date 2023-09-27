#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define Rep(i,s,f) for(int i=(int)s;i<(int)f;i++)
using ll=long long;
using namespace std;

vector<int> bfs(vector<vector<int>> g,int N)
{
	vector<int> ans(N,-1);
	ans[0]=0;
	queue<int> que;
	que.push(0);
	while(!que.empty())
	{
		int p=que.front();que.pop();
		for(int v : g[p])
		{
			if(ans[v]!=-1) continue;
			ans[v]=p;
			que.push(v);
		}
	}
	return ans;
}
int main()
{
	int N,M;
	cin>>N>>M;
	vector<vector<int>> g(N);
	rep(i,M)
	{
		int a,b;
		cin>>a>>b;
		a--;b--;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	vector<int> ans=bfs(g,N);
	cout<<"Yes"<<endl;
	for(int i=1;i<N;i++)
	{
		cout<<ans[i]+1<<endl;
	}
	return 0;
}
