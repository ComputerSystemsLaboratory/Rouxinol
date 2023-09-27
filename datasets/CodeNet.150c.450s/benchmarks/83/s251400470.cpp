#include <iostream>
#include <vector>
#include <algorithm>
#define NMAX 105
#define WMAX 10005
#define DIAGONAL 1
#define TOP 0

using namespace std;

struct Item {
	int value, weight;
};

int N, W;
Item items[NMAX+1];
int C[NMAX+1][WMAX+1], G[NMAX+1][WMAX+1];

void compute(int &maxValue, vector<int> &selection){
	for (int w = 0; w <= W; w++) {
		C[0][w] = 0;
		G[0][w] = DIAGONAL;
	}

	for (int i = 1; i <= N; ++i) C[i][0] = 0;

	for (int i = 1; i <= N; ++i) {
		for (int w = 1; w <= W; ++w) {
			C[i][w] = C[i-1][w];
			G[i][w] = TOP;
			if (items[i].weight > w) continue;
			if (items[i].value + C[i-1][w-items[i].weight] > C[i-1][w]) {
				C[i][w] = items[i].value + C[i-1][w-items[i].weight];
				G[i][w] = DIAGONAL;
			}
		}
	}

	maxValue = C[N][W];
	selection.clear();
	for (int i = N, w = W; i >= 1; i--) {
		if (G[i][w] == DIAGONAL) {
			selection.push_back(i);
			w -= items[i].weight;
		}
	}

	reverse(selection.begin(), selection.end());
}

void input(){
	cin >> N >> W;
	for (int i = 1; i <= N; ++i) {
		cin >> items[i].value >> items[i].weight;
	}
}

int main(int argc, char const *argv[])
{
	int maxValue;
	vector<int> selection;
	input();
	compute(maxValue, selection);

	cout << maxValue << endl;

	return 0;
}
