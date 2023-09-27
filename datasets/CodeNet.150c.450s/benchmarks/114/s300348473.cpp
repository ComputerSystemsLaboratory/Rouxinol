#include <iostream>

using namespace std;

#define MAX 100
#define INFTY 9999999 
#define WHITE 0
#define GRAY 1
#define BLACK 2

int M[MAX][MAX];
int color[MAX];
int d[MAX];
int p[MAX];
int n;

int prim()
{
	int mincost;
	int u;

	for (int i = 0; i < MAX; i++) {
		d[i] = INFTY;
		p[i] = -1;
	}

	d[0] = 0;
	p[0] = -1;

	while (true) {
		mincost = INFTY;

		for (int i = 0; i < n; i++) {
			if (color[i] != BLACK&&d[i] < mincost) {
				mincost = d[i];
				u = i;
			}
		}


		if (mincost == INFTY) {
			break;
		}

		color[u] = BLACK;

		for (int i = 0; i < n; i++) {
			if (color[i] != BLACK&&M[u][i] != -1) {
				if (M[u][i] < d[i]) {
					d[i] = M[u][i];
					p[i] = u;
					color[i] = GRAY;
				}
			}
		}
	}


	int sum = 0;

	for (int i = 0; i < n; i++) {
		if (p[i] != -1) {
			sum += M[i][p[i]];
		}
	}

	return sum;

}



int main(void)
{



	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> M[i][j];
		}
	}

	cout << prim() << endl;

	return 0;
}