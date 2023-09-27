// Ref : https://book.mynavi.jp/ec/products/detail/id=35408

#include <iostream>
using namespace std;

static const int N = 100;
int G[N][N] = { {} };
int n, t = 0;
int detected_t[N] = {};
int finished_t[N] = {}; 

void depthFirstSearch(int ix) {
	if (!detected_t[ix - 1]) {
		detected_t[ix - 1] = ++t;
		for (int j = 0; G[ix - 1][j]; j++) {
			depthFirstSearch(G[ix - 1][j]);
		}
		if (!finished_t[ix - 1]) finished_t[ix - 1] = ++t;
	}
}

void myCheck() {
	for (int i = 0; i < n; i++) {
		cout << "index " << i + 1 << " : ";
		for (int j = 0; G[i][j]; j++) {
		if (j) cout << " ";
		cout << G[i][j];
		}
		cout << " time " << detected_t[i] << ", " << finished_t[i] << endl;
	}
}

int main() {
	int ix, deg;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ix >> deg;
		for (int j = 0; j < deg; j++) cin >> G[ix - 1][j];
	}

	for (int i = 0; i < n; i++) depthFirstSearch(i+1);
	//myCheck();

	for (int i = 0; i < n; i++) cout << i + 1 << " " << detected_t[i] << " " << finished_t[i] << endl;

	return 0;
}
