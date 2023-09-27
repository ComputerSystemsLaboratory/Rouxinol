#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <queue>

using namespace std;

list<int> *AdjacenceyList;
int CID;
int *ComponentID;
queue<int> Q;

void bfs(int v) {
	ComponentID[v] = CID;
	Q.push(v);
	while (Q.empty() != true) {
		v = Q.front();
		Q.pop();
		for (list<int>::iterator it = AdjacenceyList[v].begin(); it != AdjacenceyList[v].end(); it++) {
			if (ComponentID[*it] == 0) {
				ComponentID[*it] = CID;
				Q.push(*it);
			}
		}
	}
	CID++;
}

int main() {
	int n;
	int m;
	int s, t;
	int q;
	int i;
	cin >> n >> m;

	AdjacenceyList = new list<int>[n];
	
	ComponentID = new int[n];
	for (i = 0; i < n; i++) {
		ComponentID[i] = 0;
	}
	CID = 1;

	for (i = 1; i <= m; i++) {
		cin >> s >> t;
		AdjacenceyList[s].push_back(t);
		AdjacenceyList[t].push_back(s);
	}

	for (i = 0; i < n; i++) {
		if (ComponentID[i] == 0) {
			bfs(i);
		}
	}

	cin >> q;
	for (i = 1; i <= q; i++) {
		cin >> s >> t;
		if (ComponentID[s] == ComponentID[t]) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}

	delete[] AdjacenceyList;
	delete[] ComponentID;
	return 0;
}