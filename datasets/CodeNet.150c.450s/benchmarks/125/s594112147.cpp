
#include<iostream>

using namespace std;

const int MAX = 100;

void search(bool graph[MAX][MAX], int find[], int done[], int n, int u,int& count) {
	count++;
	find[u] = count;
	for (int i = 0; i < n; i++) {
		if (graph[u][i] && find[i] == 0) {
			search(graph, find, done, n, i, count);
		}
	}
	count++;
	done[u] = count;
}

int main() {
	bool check[MAX] = { false };
	int find[MAX] = { 0 };
	int done[MAX] = { 0 };
	bool graph[MAX][MAX] = { {false} };
	int N;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int temp;
			cin >> temp;
			graph[u - 1][temp - 1] = true;
		}
	}

	int count = 0;
	for (int i = 0; i < N; i++) {
		if (find[i] == 0) {
			search(graph, find, done, N, i, count);
		}
	}

	for (int i = 0; i < N; i++) {
		cout << i + 1 << " " << find[i] << " " << done[i] << endl;
	}

	return 0;
}