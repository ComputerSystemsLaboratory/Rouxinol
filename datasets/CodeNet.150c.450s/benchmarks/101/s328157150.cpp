#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#define Lens 100005
#define Nil -1

using namespace std;
int n, m, q;
queue<int> Q;
vector<int> A[Lens];
int c[Lens], d[Lens];

void bns(int k, int v)
{
	Q.push(k);
	c[k] = v;
	while (!Q.empty())
	{
		k = Q.front();
		Q.pop();
		c[k] = v;
		for (int i = 0; i < A[k].size(); i++)
		{
			int tmp = A[k][i];
			if (c[tmp] == Nil)
			{
				Q.push(tmp);
			}
		}
	}
}

int main()
{
	int v = 1;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int s, t;
		cin >> s >> t;
		c[s] = c[t] = Nil;
		A[s].push_back(t);
		A[t].push_back(s);
	}
	for (int i = 0; i < n; i++)
	{
		if (c[i] == Nil)
		{
			bns(i, v);
			v++;
		}

	}
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int s, t;
		cin >> s >> t;

		if (c[s] == c[t]&&c[s]!=Nil&&c[s]!=0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}

