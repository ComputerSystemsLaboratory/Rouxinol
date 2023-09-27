#include<iostream>
#include<algorithm>
using namespace std;

struct item {
	int v, w;
};

int main() {
	int N, W;
	cin >> N >> W;
	int V[N + 1][W + 1];
	item items[N + 1];
	for (int i = 1; i <= N; i++) {
		cin >> items[i].v >> items[i].w;
	}

	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= W; j++)	{
			V[i][j] = 0;
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= W; j++) {
			V[i][j] = j >= items[i].w ? max(V[i - 1][j], V[i - 1][j - items[i].w] + items[i].v) : V[i - 1][j];
		}
	}

	cout << V[N][W] << endl;
	return 0;
}