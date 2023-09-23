#include<iostream>
using namespace std;

int main() {
	int n,graph[100][100];
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			graph[i][j] = 0;
		}
	}
	cin >> n;

	for (int i = 0; i < n; i++) {
		int vertex,jisu;
		cin >> vertex>>jisu;
		vertex--;
		for (int j = 0; j < jisu; j++) {
			int to;
			cin >> to;
			to--;
			graph[vertex][to] = 1;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << graph[i][j];
			if (j < n - 1)cout << " ";
		}
		cout << "\n";
	}

	return 0;
}