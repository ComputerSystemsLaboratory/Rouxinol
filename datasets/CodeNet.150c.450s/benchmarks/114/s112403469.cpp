#include<iostream>
#include<algorithm>
#define MAXV 101
#define INF 2001
using namespace std;

int n, total = 0, mine, minj;
int mst[MAXV] = {}; //1 origin
int edge[MAXV][MAXV] = {}; //1 origin

void prim(void);
bool doesFinished(void);

int main() {
	int i, j;
	
	cin >> n;
	for (i = 1; i <= n; i++) {
		
		for (j = 1; j <= n; j++) {
			cin >> edge[i][j];
		}
	}

	mst[1] = 1;
	while (!doesFinished()) {
		prim();
	}

	cout << total << endl;

	return 0;
}

void prim(void) {
	int i, j;
	mine = INF;
	for (i = 1; i <= n; i++) {
		if (mst[i] == 0)continue;
		for (j = 1; j <= n; j++) {
			if (edge[i][j] == -1 || mst[j] == 1)continue;
			if (edge[i][j] < mine) {
				mine = edge[i][j];
				minj = j;
			}
		}
	}
	mst[minj] = 1;
	if(mine != INF)total += mine;
}

bool doesFinished(void) {
	for (int i = 1; i <= n; i++) {
		if (mst[i] == 0)return false;
	}
	return true;
}