#include<iostream>
#include<algorithm>
using namespace std;

const int MAX = 200;
const int INF = 1000;
const int D_x[4] = { -1,0,1,0 };
const int D_y[4] = { 0,1,0,-1 };

struct Node {
	Node() {
		for (int i = 0; i < 4; i++) {
			child[i] = NULL;
		}
	}
	Node* child[4];
};

void solve(Node* node, int x, int y, int& min_x, int& min_y, int& max_x, int& max_y) {
	min_x = min(x, min_x);
	min_y = min(y, min_y);
	max_x = max(x, max_x);
	max_y = max(y, max_y);

	for (int i = 0; i < 4; i++) {
		if (node->child[i]) {
			solve(node->child[i], x + D_x[i], y + D_y[i], min_x, min_y, max_x, max_y);
		}
	}
}

int main() {
	int N;
	while (true) {
		cin >> N;
		if (N == 0)break;
		Node node[MAX];
		int min_x = INF;
		int min_y = INF;
		int max_x = -INF;
		int max_y = -INF;

		for (int i = 1; i < N; i++) {
			int n, d;
			cin >> n >> d;
			node[n].child[d] = &node[i];
		}

		solve(node, 0, 0, min_x, min_y, max_x, max_y);

		cout << max_x - min_x + 1 << " " << max_y - min_y + 1 << endl;
	}
	return 0;
}