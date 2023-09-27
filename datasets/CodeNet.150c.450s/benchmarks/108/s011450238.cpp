#include <iostream>
#include <queue>
using namespace std;

const int INF = -1;
int n;
int a[100][100], d[100];

int dist(int id) {
	int t = 0;
	queue<int> pd;

	for (int i = 0; i < n; i++)
		d[i] = INF;

	pd.push(1);
	d[0] = 0;

	while (pd.size()) {
		int id1 = pd.front();
		pd.pop();

		if (id1 == id)
			break;

		for (int i = 0; i < n; i++) {
			if (a[id1 - 1][i] && d[i] == INF) {
				pd.push(i + 1);
				d[i] = d[id1 - 1] + 1;
			}
		}
	}
	return d[id - 1];
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++) {
		int u, k, v;
		cin >> u >> k;
		
		for (int j = 0; j < k; j++) {
			cin >> v;
			a[u - 1][v - 1] = 1;
		}
	}

	for (int i = 1; i < n + 1; i++) {
		int dmin = dist(i);
		cout << i << " " << dmin << endl;
	}

	return 0;
}
