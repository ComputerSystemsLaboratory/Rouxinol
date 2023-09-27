#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int C[105][10005];
struct items {
	int value, weight;
};

int main()
{
	int N, W;
	int a, b;
	items item[105];
	cin >> N >> W;

	for (int i = 1; i <= N; i++) {
		cin >> a >> b;
		item[i].value = a;
		item[i].weight = b;
	}

	for (int i = 0; i <= N; i++) {
		C[i][0] = 0;
	}

	for (int i = 0; i <= W; i++) {
		C[0][i] = 0;
	}


	for (int i = 1; i <= N; i++) {
		for (int w = 1; w <= W; w++) {
			C[i][w] = C[i - 1][w];
			if (item[i].weight > w) continue;
			C[i][w] = max(C[i - 1][w - item[i].weight] + item[i].value, C[i - 1][w]);
		}
	}

	cout << C[N][W] << endl;

}