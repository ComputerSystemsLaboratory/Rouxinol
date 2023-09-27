#include <iostream>
#include <algorithm>
using namespace std;

int N, W;
int V[101][10001];

void init(void) {
	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 10001; j++)
			V[i][j] = 0;
}

int main() {
	init();
	cin >> N >> W;
	int value, weight;
	for (int i = 1; i <= N; i++) {
		cin >> value >> weight;
		for (int c = 0; c <= W; c++) {
			if (c - weight >= 0)
				V[i][c] = max(value + V[i - 1][c - weight], V[i - 1][c]);
			else
				V[i][c] = V[i - 1][c];
//			cout << V[i][c] << " ";
		}
//		cout << endl;
	}
	cout << V[N][W] << endl;
}