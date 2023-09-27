#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<bitset>
#include<vector>
#include<deque>
#include<queue>
#include<map>
#include<set>
#include<stack>
#include<cmath>
#include<iomanip>
#include <functional>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
const int INF = 1 << 28;
//cout << fixed << std::setprecision(9)
//memset(a, 0, sizeof(a));
//--------------------------

const int MAX = 100;
const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;

int n, M[MAX][MAX];

int prim()
{
	int u, minv;
	int d[MAX], p[MAX], color[MAX];

	for (int i = 0; i < n; i++) {
		d[i] = INF;
		p[i] = -1;
		color[i] = WHITE;
	}

	d[0] = 0;

	while (1) {
		minv = INF;
		u = -1;
		for (int i = 0; i < n; i++){
			if (minv > d[i] && color[i] != BLACK) {
				u = i;
				minv = d[i];
			}
		}

		if (u == -1) break;

		color[u] = BLACK;
		for (int v = 0; v < n; v++) {
			if (color[v] != BLACK && M[u][v] != INF) {
				if (d[v] > M[u][v]) {
					d[v] = M[u][v];
					p[v] = u;
					color[v] = GRAY;
				}
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (p[i] != -1) sum += M[i][p[i]];
	}

	return sum;
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int e;
			cin >> e;
			M[i][j] = (e == -1) ? INF : e;
		}
	}

	cout << prim() << endl;

	return 0;
}