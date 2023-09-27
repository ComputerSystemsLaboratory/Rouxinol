#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

static const int N = 100;
static const int WHITE = 0;
static const int GREY = 1;
static const int BLACK = 2;

int n, m[N][N], color[N], nxtNei[N];
int t, t1[N], t2[N];

int nxt(int u){
	for (int v = nxtNei[u]; v < n; ++v) {
		nxtNei[u] = v + 1;
		if (color[v] == WHITE && m[u][v] == 1) {
			return v;
		}
	}
	return -1;
}

void dfs(int r){
	for (int i = 0; i < n; ++i) nxtNei[i] = 0;
	stack<int> s;
	color[r] = GREY;
	s.push(r);
	t1[r] = t++;
	while (!s.empty()) {
		int u = s.top();
		int v = nxt(u);
		if (-1 == v){
			color[u] = BLACK;
			s.pop();
			t2[u] = t++;
			continue;
		}

		color[v] = GREY;
		s.push(v);
		t1[v] = t++;
	}
}

void search(){
	t = 1;
	for (int i = 0; i < n; ++i){
		color[i] = WHITE;
		nxtNei[i] = 0;
	}
	for (int i = 0; i < n; ++i) {
		if (color[i] == WHITE) dfs(i);
	}
	for (int i = 0; i < n; ++i){
		cout << i + 1 << " " << t1[i] << " " << t2[i] << endl;
	}
}


int main()
{
	cin >> n;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) m[i][j] = 0;
	}

	for (int i = 0; i < n; ++i) {
		int u, d; cin >> u >> d;
		for (int j = 0; j < d; ++j) {
			int v; cin >> v;
			m[u - 1][v - 1] = 1;
		}
	}

	search();

	return 0;
}