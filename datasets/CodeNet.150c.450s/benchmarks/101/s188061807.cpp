#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

const int NMAX = 100000;
const int MMAX = 100000;

vector<int> table[NMAX]; 

int color[NMAX];

void search(int s, int id, int n) {
	queue<int> q;
	q.push(s);
	color[s] = id;

	while(true) {
		if (q.empty()) {
			return;
		}
		int current = q.front(); q.pop();
		for (int i = 0; i < table[current].size(); i++) {
			int v = table[current][i];
			if (color[v] == -1) {
				q.push(v);
				color[v] = id;
			}
		}
	}
}

void assignColor(int n) {
	int id = 0;
	for (int i = 0; i < n; i++) {
		color[i] = -1;
	}	
	
	for (int i = 0; i < n; i++) {
		if (color[i] == -1) {
			id++;
			search(i, id, n);
		}
	}
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++) {
		int s, t;
		scanf("%d %d", &s, &t);
		table[s].push_back(t);
		table[t].push_back(s);
	}

	assignColor(n);

	int q;
	scanf("%d", &q);

	for (int i = 0; i < q; i++) {
		int s, t;
		scanf("%d %d", &s, &t);

		bool result = color[s] == color[t];
		if (result) {
			printf("yes\n");
		} else {
			printf("no\n");
		}
	}

	return 0;
}

