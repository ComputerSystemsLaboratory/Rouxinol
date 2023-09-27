#include <iostream>
using namespace std;

const int MAX = 100;
const int INF = 1 << 29;

int n;
int grid[MAX][MAX];

int prim()
{
	int ans[MAX];
	int visited[MAX];

	for (int i = 0; i < n; i++) {
		ans[i] = INF;
		visited[i] = false;
	}

	ans[0] = 0;

	while (true) {
		int min = INF;
		int min_index;

		for (int i = 0; i < n; i++) {
			if (min > ans[i] && visited[i] == false) {
				min = ans[i];
				min_index = i;
			}
		}

		if (min == INF) {
			break;
		}

		visited[min_index] = true;

		for (int i = 0; i < n; i++) {
			if (ans[i] > grid[min_index][i] && visited[i] == false) {
				ans[i] = grid[min_index][i];
			}
		}
	}

	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += ans[i];
	}

	return sum;
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int temp;
			cin >> temp;

			if (temp == -1) {
				grid[i][j] = INF;
			}
			else {
				grid[i][j] = temp;
			}
		}
	}

	cout << prim() << endl;

	return 0;
}