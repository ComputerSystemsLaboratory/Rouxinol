#include<bits/stdc++.h>
#define INF 0x3f3f3f3f 
using namespace std;
const int maxn = 11111;
int n, m;
struct edge
{
	int v, cost;
	edge(int _v=0,int _cost=0):v(_v),cost(_cost){}
};
vector<edge> g[maxn];
bool book[maxn];
int dis[maxn];
void myinit()
{
	memset(book, 0, sizeof(book));
	for (int i = 0; i < maxn; i++)
	{
		g[i].clear();
	}
	fill(dis, dis + maxn,INF);
}
void SPFA(int s)
{
	queue<int> q;
	q.push(s);
	book[s] = 1;//加入队列并标记 
	while (!q.empty())
	{
		int temp = q.front();
		q.pop();
		book[temp] = 0;//弹出队列并取消标记 
		for (int i = 0; i < g[temp].size(); i++)
		{
			if (g[temp][i].cost + dis[temp] < dis[g[temp][i].v])//比较 
			{
				dis[g[temp][i].v] = g[temp][i].cost + dis[temp];//更新路径 
				if (!book[g[temp][i].v])//若该点不在队列 
				{
					q.push(g[temp][i].v);
					book[g[temp][i].v] = 1;
				}
			}
		}
	}
}
void addedge(int u, int v, int w)
{
	g[u].push_back(edge(v, w));
}
int main()

{
	cin >> n;
	m = 0;
	myinit();
	for (int i = 0;i < n;i++)
	{
		int ve, en, co;
		int k;
		cin >> ve >> k;
		for (int j = 0;j < k;j++)
		{
			cin >> en >> co;
			addedge(ve, en, co);
		}
	}
	dis[0] = 0;
	SPFA(0);
	for (int i = 0;i < n;i++)
		cout << i << " " << dis[i] << endl;
	return 0;
}
