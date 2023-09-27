/*#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5;
typedef struct edgenode {
	int adjvex;
	int w;
	struct edgenode *next;
}edgenode;
typedef struct vertexnode {
	int vertex;
	edgenode *first_v;
}vertexnode;
typedef struct graph {
	int n, e;
	vertexnode adjlist[maxn];
}graph;
graph *g;
void greatedg(int a,int n, int e) {
	edgenode *s;
	int w, b;
	cin >> b >> w;
	s = (edgenode *)malloc(sizeof(edgenode));
	s->adjvex == b;
	s->next = g->adjlist[a].first_v;
	g->adjlist[a].first_v = s;
}
int main()
{
	int n, e;
	cin >> n;
	g->n = n;
	for (int i = 0;i < n;i++){
		int a, k;
		cin >> n >> k;
		for (int j = 0;j < k;j++) {
			int b, w;
			cin >> b >> w;
			greatedg(a, b, w);
		}
	}

	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
const int maxn = 111;
typedef long long ll;
ll mp[maxn][maxn];
const ll INF = 1LL << 32;
int main()
{
	int v, e;
	int flag = 0;
	cin >> v >> e;
	for (int i = 0;i < v;i++)
	{
		for (int j = 0;j < v;j++)
		{
			if (i == j)mp[i][j] = 0;
			else mp[i][j] = INF;
		}
	}
	int a, b, w;
	for (int i = 0;i < e;i++)
	{
		cin >> a >> b>>w;
		if (mp[a][b] > w)
			mp[a][b] = w;
	}
	for (int k = 0;k < v;k++)
	{
		for (int i = 0;i < v;i++)
		{
			if (mp[i][k] == INF)
				continue;
			for (int j = 0;j < v;j++)
			{
				if (mp[k][j] == INF)
					continue;
				if (mp[i][k] + mp[k][j] < mp[i][j])
					mp[i][j] = mp[i][k] + mp[k][j];
			}
		}
	}
	for (int i = 0;i < v;i++)
	{
		if (mp[i][i] < 0)
		{
			flag = 1;break;
		}
	}
	if (flag == 1)
		cout << "NEGATIVE CYCLE" << endl;
	else
	{
		for (int i = 0;i < v;i++)
		{
			for (int j = 0;j < v;j++)
			{
				if (j)
					cout << " ";
				if (mp[i][j] == INF)
					cout << "INF";
				else
					cout << mp[i][j];
			}
		cout << endl;
		}
	}
	return 0;
}
