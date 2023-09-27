#include<iostream>
#include<queue>
#define N 100
#define NIL -1

int M[N][N];
int d[N];
int n;

// 初期化処理後、sを開始地点として幅優先探索を行い、探索結果を出力する
// d[N]にはsからの距離を記録し(sは0)、sからたどり着けない頂点はNIL(空)を記録する
void bfs(int s)
{
	for (int i = 0; i < n; i++)d[i] = NIL;

	std::queue<int> Q;
	Q.push(s);
	d[s] = 0;

	while (!Q.empty())
	{
		int u = Q.front();
		Q.pop();
		for (int v = 0; v < n; v++)
		{
			if (M[u][v] == 0)continue;
			if (d[v] != NIL) continue;
			Q.push(v);
			d[v] = d[u] + 1;
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << i + 1 << " " << d[i] << std::endl;
	}
}

int main()
{
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			M[i][j] = 0;
		}
	}

	int u, v, k;
	for (int i = 0; i < n; i++)
	{
		std::cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++)
		{
			std::cin >> v;
			v--;
			M[u][v] = 1;
		}
	}
	bfs(0);
}
