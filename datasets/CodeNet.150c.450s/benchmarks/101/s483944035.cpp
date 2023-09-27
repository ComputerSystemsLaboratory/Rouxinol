#include <cstdio>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int NIL = -1;
const int MAX = 100000;
vector<int> SNS[MAX];
int color[MAX];

void dfs(int v, int colorIdx) {

	stack<int> S;
	S.push(v);
	color[v] = colorIdx;

	while (!S.empty()) {
		int s = S.top();
		S.pop();
		for (int i = 0; i < (int) SNS[s].size(); ++i) {
			int r = SNS[s][i];
			if (color[r] == NIL) {
				S.push(r);
				color[r] = colorIdx;
			}
		}
	}
}

void makeColor(int color[], int n) {
	int colorIdx = 0;
	for (int i = 0; i < n; ++i) {
		if (color[i] == NIL)
			dfs(i, colorIdx++);
	}
}

int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; ++i) {
		int s, t;
		scanf("%d %d", &s, &t);
		SNS[s].push_back(t);
		SNS[t].push_back(s);
	}

	for (int i = 0; i < n; ++i)
		color[i] = NIL;

	makeColor(color, n);

	int q;
	scanf("%d", &q);
	for (int i = 0; i < q; ++i) {
		int s, t;
		scanf("%d %d", &s, &t);
		if (color[s] == color[t])
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}