#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>
#include <string>
#include <queue>
using namespace std;
const int MAXN = 10005;
const int INF = 1 << 30;
const int NIL = -1;
struct Node {
	int v, w, next;	//u->v
	friend bool operator<(const Node& a, const Node& b)
	{
		return a.w > b.w;
	}
	Node() {}
	Node(int vv, int ww) : v(vv), w(ww) {}
};
int cnt;
int head[MAXN];
Node edge[MAXN];




int prim(int n)
{
	
	bool vis[MAXN]{ false };
	priority_queue<Node> q;
	vis[1] = true;

	for (int i = head[1]; i != NIL; i = edge[i].next)
		q.push(edge[i]);
	int count = 0;
	int ans = 0;
	Node t;
	while (count < n - 1)
	{
		t = q.top();
		q.pop();
		if (vis[t.v])
			continue;
		vis[t.v] = true;
		ans += t.w;
		++count;
		for (int i = head[t.v]; i != NIL; i = edge[i].next)
			if (!vis[edge[i].v])
				q.push(edge[i]);

	}
	
	return ans;
}


void add(int u, int v, int w)
{
	edge[cnt].v = v;
	edge[cnt].w = w;
	edge[cnt].next = head[u];
	head[u] = cnt++;
}



int main(void)
{
	int n, m, u, v, w;
	scanf("%d", &n);
	int N = n * n;
	for (int i = 0; i <= N; ++i)
		head[i] = NIL;
	cnt = 0;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			scanf("%d", &w);
			if (w != NIL)
				add(i, j, w);
		}
	}
	cout << prim(n) << endl;
	return 0;
}