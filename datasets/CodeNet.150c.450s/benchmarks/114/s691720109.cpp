#include<iostream>
using namespace std;

static const int MAX = 100;
static const int INFTY = 3000;
static const int WHITE = 0, GRAY = 1, BLACK = 2;

int n;
int A[MAX][MAX];

int prim() {
	int i1, j1, min;
	int p[MAX], color[MAX], d[MAX];

	for (int i = 0; i < n; i++)	{
		p[i] = -1; //MST??????????????????i??????
		color[i] = WHITE; 
		d[i] = INFTY; //MST??¨????????\????????????????°??????¢
	}
	d[0] = 0;

	while (1) {
		min = INFTY;
		i1 = -1;
		for (int i = 0; i < n; i++)	{
			if (d[i] < min && color[i] != BLACK) {
				i1 = i;
				min = d[i];
			}
		}
		if (i1 == -1) break;

		color[i1] = BLACK;
		for (int j = 0; j < n; j++)	{
			if (A[i1][j] != INFTY && color[j] != BLACK) {
				if (d[j] > A[i1][j]) {
					d[j] = A[i1][j];
					p[j] = i1;
					color[j] = GRAY;
				}
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++)	{
		if (p[i] != -1) sum += A[i][p[i]];
	}
	return sum;
}

int main() {
	int i1,j1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int t;
			cin >> t;
			A[i][j] = (t == -1) ? INFTY : t;
		}
	}

	cout << prim() << endl;

	return 0;
}