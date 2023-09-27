#include<iostream>
#include<algorithm>
using namespace std;

struct VRTX {
	int dt, ft, v[101];
};

int curtime = 1;
VRTX ver[101];

void depthFirstSearch(int u);

int main() {
	int i, j, n, u, k;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> u >> k;
		for (j = 0; j < k; j++) {
			cin >> ver[u].v[j];
		}
	}
	
	for (i = 1; i <= n; i++) {
		depthFirstSearch(i);
	}

	for (i = 1; i <= n; i++) {
		cout << i << " " << ver[i].dt << " " << ver[i].ft << endl;
	}

	return 0;
}

void depthFirstSearch(int u) {

	if (ver[u].dt == 0) {
		int i = 0;

		ver[u].dt = curtime++;

		while (ver[u].v[i] != 0) {
			depthFirstSearch(ver[u].v[i]);
			i++;
		}

		ver[u].ft = curtime++;

		return;
	}
	return;
}