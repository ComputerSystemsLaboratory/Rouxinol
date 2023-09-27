#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int P[10001];

void init(int n) {
	for (int i = 0; i <= n; i++)
		P[i] = i;
}

int root(int a) {
	if (P[a] == a)
		return a;
	return (P[a] = root(P[a]));
}

bool is_same_set(int a, int b) {
	return root(a) == root(b);
}

void unite(int a, int b) {
	P[root(a)] = root(b);
}

bool span(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!is_same_set(i, j))
				return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	init(n);
	vector<vector<int> > map(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	vector<pair<int, pair<int, int> > > edges;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (map[i][j] >= 0)
				edges.push_back(pair<int, pair<int, int> >(map[i][j], pair<int, int>(i, j)));
		}
	}
	sort(edges.begin(), edges.end());
	int result = 0;
	while (!span(n)) {
		pair<int, pair<int, int> > edge = edges.front();
		edges.erase(edges.begin());
		int a = edge.second.first;
		int b = edge.second.second;
		if (!is_same_set(a, b)){
			unite(a, b);
			result += edge.first;
		}
	}
	cout << result << endl;
}