#include<iostream>
using namespace std;

const int I_MAX = 0xfffffff;
const int MAX = 100;


int main() {
	int n;
	int graph[MAX][MAX];
	bool table[MAX] = { false };
	int sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int temp;
			cin >> temp;
			if (temp == -1)temp = I_MAX;
			graph[i][j] = temp;
		}
	}

	table[0] = true;

	for (int i = 0; i < n - 1; i++) {
		int cost = I_MAX;
		int m;

		for (int j = 0; j < n; j++) {
			if (table[j] == false)continue;

			for (int k = 0; k < n; k++) {
				if (graph[j][k] < cost && table[k] == false) {
					cost = graph[j][k];
					m = k;
				}
			}
		}

		sum += cost;
		table[m] = true;
	}

	cout << sum << endl;

	return 0;
}