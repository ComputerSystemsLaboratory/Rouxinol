#include <iostream>
using namespace std;

const int MAX = 100;
const int INF = 1 << 29;

int n;
int grid[MAX][MAX];

void solve()
{
	int ans[MAX];
	bool visited[MAX];

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
			if (grid[min_index][i] != INF&&ans[i] > ans[min_index] + grid[min_index][i]) {
				ans[i] = ans[min_index] + grid[min_index][i];
			}
		}
	}
	

	for (int i = 0; i < n; i++) {
		cout << i << " " << ans[i] << endl;
	}
}

int main()
{
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			grid[i][j] = INF;
		}
	}

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num >> num;

		for (int j = 0; j < num; j++) {
			int k;
			cin >> k;
			cin >> grid[i][k];
		}
	}

	solve();

	return 0;
}