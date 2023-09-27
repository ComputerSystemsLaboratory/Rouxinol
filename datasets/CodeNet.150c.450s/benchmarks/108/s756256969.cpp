#include <iostream>
#include <queue>
using namespace std;

#define MAX 100
static const int WHITE = 0; // not visit
static const int GRAY = 1; // visited
static const int BLACK = 2; // searched

int n;
int M[MAX][MAX] = { 0 };
int distance[MAX] = { 0 }; // ?????????????§??????????????????¢
int v_states[MAX] = { WHITE };


void breadthFirstSearch() {
	queue<int> vertices;

	vertices.push(0); // ?§????
	while (!vertices.empty()) {
		int u = vertices.front();
		v_states[u] = GRAY;
		vertices.pop();
		bool is_connected = false;
		for (int v = 0; v < n; v++) {
			if (M[u][v] == 1 && v_states[v] == WHITE) {
				::distance[v] = ::distance[u] + 1;
				vertices.push(v);
				v_states[v] = GRAY;
			}
		}
	}
	return;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		int k, u;
		cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++) {
			int v;
			cin >> v;
			v--;
			M[u][v] = 1;
		}
	}
	breadthFirstSearch();
	for (int i = 0; i < n; i++) {
		if (i && v_states[i] == WHITE) {
			::distance[i] = -1;
		}
		cout << i + 1 << ' ' << ::distance[i] << endl;
	}

	return 0;

}