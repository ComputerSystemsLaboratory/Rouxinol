#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>

#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

#define NO -1

using namespace std;


int adjacencyList[MAX + 1][MAX + 1];
int color[MAX + 1];
int d[MAX + 1];
int n;



void bfs(int o)
{
	queue<int> S;
	S.push(o);
	color[o] = GRAY;
	d[o] = 0;

	int fr;

	while (S.size() > 0) {
		fr = S.front();
		S.pop();
		color[fr] = BLACK;
		for (int i = 1; i <= n; i++) {
			if (color[i] == WHITE && adjacencyList[fr][i] != NO) {
				S.push(i);
				color[i] = GRAY;
				d[i] = d[fr] + 1;
			}
		}
	}

}

int main(void)
{

	int u;
	int k;
	int v;


	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			adjacencyList[i][j] = NO;
		}
	}

	for (int i = 0; i < n; i++) {
		cin >> u >> k;

		for (int j = 0; j < k; j++) {
			cin >> v;
			adjacencyList[u][v] = 1;
		}

	}

	bfs(1);

	for (int i = 1; i <= n; i++) {
		cout << i << " ";
		if (color[i] == BLACK) {
			cout << d[i];

		}
		else {			
			cout << -1;
		}
		cout << endl;
	}


	return 0;
}