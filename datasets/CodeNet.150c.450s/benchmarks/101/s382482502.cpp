#include<iostream>
#include<vector>
#include<stack>
using namespace std;
const int MAXN = 100005;
const int NIL = -1;

int n;
vector<int>G[MAXN];
int color[MAXN];

void dfs(int s, int c)
{
	stack<int> S;
	S.push(s);
	color[s] = c;
	while(!S.empty())
	{
		int u = S.top(); S.pop();
		for(int i = 0; i < G[u].size(); i++)
		{
			int v = G[u][i];
			if(color[v] == NIL)
			{
				color[v] = c;
				S.push(v);
			}
		}	
	}
}

void AssighColor()
{
	int id = 1;
	for(int i = 0; i < n; i++)
		color[i] = NIL;
	for(int i = 0; i < n; i++)
	{
		if(color[i] == NIL)
			dfs(i, id++);
	}
}

int main()
{
	int s, t, m, q;
	cin >> n >> m;
	for(int i = 0; i < m; i++)
	{
		cin >> s >> t;
		G[s].push_back(t);
		G[t].push_back(s);
	}
	
	AssighColor();
	
	cin >> q;
	for(int i = 0; i < q; i++)
	{
		cin >> s >> t;
		if(color[s] == color[t])
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}
