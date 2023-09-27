#include <iostream>
using namespace std;
static const int MAX = 100;
static const int INFTY = (1 << 21);
static const int NOT_VISIT = 0;
static const int VISITING = 1;
static const int VISITED = 2;
int n;
int M[MAX][MAX];
int prim()
{
    int minv, u;
    int isVisited[MAX], d[MAX], p[MAX];
    for (int i = 0; i < n; i++) {
	isVisited[i] = NOT_VISIT;
	d[i] = INFTY;
	p[i] = -1;
    }
    d[0] = 0;
    while (1) {
	minv = INFTY;
	u = -1;
	for (int i = 0; i < n; i++) {
	    if (minv > d[i] && isVisited[i] != VISITED) {
		u = i;
		minv = d[i];
	    }
	}
	if (u == -1) {
	    break;
	}

	isVisited[u] = VISITED;
	for (int j = 0; j < n; j++) {
	    if (isVisited[j] != VISITED && M[u][j] != INFTY) {
		if (d[j] > M[u][j]) {
		    d[j] = M[u][j];
		    p[j] = u;
		    isVisited[j] = VISITING;
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

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
	    int e;
	    cin >> e;
	    M[i][j] = (e == -1) ? INFTY : e;
	}
    }
    cout << prim() << endl;
}