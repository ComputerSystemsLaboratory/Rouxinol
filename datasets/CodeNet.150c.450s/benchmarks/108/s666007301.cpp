#include<iostream>
#include<queue>
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
using namespace std;
int G[100][100];
queue<int> q;

class ANS
{
public:
	int id, d;
	bool done;
};

void bfs(ANS a[])
{
	q.push(a[0].id);
	a[q.front() - 1].done = true;
	a[q.front() - 1].d++;
	while (q.empty() != true)
	{
		int Q = q.front();
		FOR(i, 1, 101)
		{
			if (G[Q-1][i-1] == 1 && a[i-1].done == false)
			{
				a[i-1].done = true;
				a[i-1].d = a[Q-1].d + 1;
				q.push(i);
			}
		}
		q.pop();
	}
}

int main()
{
	ANS ans[100];
	int n;
	cin >> n;
	FOR(i, 0, n)
	{
		ans[i] = { i + 1,-1,false };
		int u, m;
		cin >> u >> m;
		FOR(j, 0, m)
		{
			int l;
			cin >> l;
			G[u - 1][l - 1] = 1;
		}
	}
	bfs(ans);
	FOR(i, 0, n)
	{
		cout << ans[i].id << " " << ans[i].d << endl;
	}
	return 0;
}