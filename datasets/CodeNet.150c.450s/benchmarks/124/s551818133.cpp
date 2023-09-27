
#include<iostream>

using namespace std;


static const int MAX = 100;
static const int inf = (1 << 21);
static const int white = 0;
static const int gray = 1;
static const int black = 2;

int n, m[MAX][MAX];
int sht[MAX];


void dijkstra() {

	int u, minv;
	int d[MAX], p[MAX], color[MAX];

	for (int i = 0; i < n; i++)
	{
		sht[i] = d[i] = inf;
		p[i] = -1;
		color[i] = white;
	}

	d[0] = 0;
	color[0] = gray;

	while (1)
	{
		minv = inf;
		u = -1;

		for (int i = 0; i < n; i++) {
			if (minv > d[i] && color[i] != black) {
				u = i;
				minv = d[i];
			}
		}

		if (u == -1) break;
		color[u] = black;

		for (int v = 0; v < n; v++) {
			if (color[v] != black && m[u][v] != inf) {
				if (d[v] > d[u] + m[u][v]) {
					d[v] = d[u] + m[u][v];
					color[v] = gray;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << i << " " << (d[i] == inf ? -1 : d[i]) << endl;

	}
}


int main() {


	cin >> n;

	for (int i = 0;i < n;i++) {
		for (int k = 0; k < n; k++)
		{
			m[i][k] = inf;
		}
	}

	int nm, c, u, v;
	for (int i = 0;i < n;i++) {
		cin >> u >> nm;
		for (int k = 0; k < nm; k++)
		{
			cin >> v >> c;
			m[u][v] = c;
		}
	}

	dijkstra();

	return 0;
}

