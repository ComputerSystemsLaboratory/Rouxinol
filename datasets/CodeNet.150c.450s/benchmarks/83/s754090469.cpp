#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <functional>

using namespace std;

static const int NMAX = 105;
static const int WMAX = 10005;
static const int DIAGONAL = 1;
static const int TOP = 0;

struct Item{
	int value, weight;
};

int N, W;
Item items[NMAX + 1];
int C[NMAX + 1][WMAX + 1], G[NMAX + 1][WMAX + 1];

int compute(){
	for (int w = 0; w <= W; w++) {
		C[0][w] = 0;
		G[0][w] = DIAGONAL;
	}

	for (int i = 1; i <= N; ++i) C[i][0] = 0;

	for (int i = 1; i <= N; ++i) {
		for (int w = 1; w <= W; ++w) {
			C[i][w] = C[i - 1][w];
			G[i][w] = TOP;
			if (items[i].weight > w) continue;
			if (items[i].value + C[i - 1][w - items[i].weight] > C[i - 1][w]) {
				C[i][w] = items[i].value + C[i - 1][w - items[i].weight];
				G[i][w] = DIAGONAL;
			}
		}
	}
	return C[N][W];
}

int main(){
	cin >> N >> W;
	for (int i = 1; i <= N; ++i) cin >> items[i].value >> items[i].weight;
	cout << compute() << endl;
	return 0;
}