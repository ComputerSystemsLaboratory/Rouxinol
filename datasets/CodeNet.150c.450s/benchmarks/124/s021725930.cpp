#include<iostream>
#include<cstdio>
#define INF 1000000
#define NIL -2
#define GRAY -3
#define WHITE -4
#define BRACK -5

using namespace std;

int n;
int M[101][101];
int d[101];//重み
//int p[101];//親
int color[101];
int sum = 0;

void Dijkstra(int u) {
	//cout << u << endl;
	color[u] = BRACK;

	//重みの更新
	for (int i = 0; i < n; i++) {
		if (color[i] != BRACK && M[u][i] != 0) {
			color[i] = GRAY;
			if ((d[u] + M[u][i]) < d[i]) {
				d[i] = d[u] + M[u][i];
			}
		}
	}
	
	int min = -1;
	d[min] = 100000;


	for (int v = 0; v < n; v++) {
		if (color[v] != BRACK) {
			if (d[v] < d[min]) {
				min = v;
			}
			else {
				color[v] = WHITE;
			}
		}
	}

	if (min != -1) {
		Dijkstra(min);
	}
}

int main() {
	cin >> n;
	int v, k, g, weight; //v = 節点番号　g = 次数

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			M[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		cin >> v >> g;
		for (int j = 0; j < g; j++) {
			cin >> k;
			cin >> M[i][k];
		}
	}

	for (int i = 1; i <= n; i++) {
		color[i] = WHITE;
	}

	for (int i = 0; i < n; i++) {
		d[i] = INF;
	}

	d[0] = 0;

	//関数
	Dijkstra(0);

	for (int i = 0; i < n; i++) {
		cout << i << " " << d[i] << endl;
	}

	return 0;
}


