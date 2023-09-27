#include<iostream>
#include<vector>

using namespace std;

class Node {
public:
	int p, d = -1;
};

class Edge {
public:
	int v, u, d;
};

int n, V[100], e = 0;
Edge E[5000];

void Path() {
	V[0] = 0; for (int i = 1; i < n; i++)  V[i] = -1;
	for (int a = 1; a < e; a++) {
		for (int i = 0; i < e; i++) {
			if (V[E[i].u] == -1 && V[E[i].v] != -1 || V[E[i].u] > V[E[i].v] + E[i].d && V[E[i].v] != -1) {
				V[E[i].u] = V[E[i].v] + E[i].d;
			}
		}
	}
}

int main() {
	int u, k, v, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v >> c;
			E[e].v = u; E[e].u = v; E[e].d = c; e++;
		}
	}

	Path();

	for (int i = 0; i < n; i++) cout << i << " " << V[i] << endl;
}
