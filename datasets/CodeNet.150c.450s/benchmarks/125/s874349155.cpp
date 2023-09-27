#include <iostream>
#include <cstdio>
#include <stack>

#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

using namespace std;


int adjacencyList[MAX + 1][MAX + 1];
int color[MAX + 1];
int d[MAX + 1];
int f[MAX + 1];
int n;
int timer;



int minWhiteNode(int v)
{

	for (int i = 1; i <= n; i++) {
		if (color[i] == WHITE && adjacencyList[v][i] == 1) {
			return i;
		}
	}
	return 	MAX + 1;
}


void dfs(int o)
{
	stack<int> S;
	int cr;


	S.push(o);
	color[o] = GRAY;
	d[o] = ++timer;

	while (S.size() > 0) 
	{
		cr = minWhiteNode(S.top());
		timer++;

		if (cr != MAX + 1) {
			S.push(cr);
			color[cr] = GRAY;
			d[cr] = timer;
		}
		else {
			int poped = S.top();
			S.pop();
			color[poped] = BLACK;
			f[poped] = timer;
		}
	}
}

int main(void)
{

	int u;
	int k;
	int v;


	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> u >> k;

		for (int j = 0; j < k; j++) {
			cin >> v;
			adjacencyList[u][v] = 1;
		}

	}

	for (int i = 1; i <= n; i++) {
		if (color[i] == WHITE) {
			dfs(i);
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << i << " " <<d[i] << " " << f[i] << endl;
	}

	return 0;
}