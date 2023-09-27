#include <bits/stdc++.h>
using namespace std;
#define MAX 105

int n, d[MAX];
vector<vector<int> > vec;
vector<int> ve;
queue<int> Q;

void bfs(int s) {
	for (int i = 1; i <= n; i++) {
		d[i] = -1;
	}
	d[s] = 0;
	Q.push(s);
	int now, cnt;
	while (!Q.empty()) {
		now = Q.front();
		Q.pop();
		for (cnt = 1; cnt <= vec[now][0]; cnt++) {
			if (d[vec[now][cnt]] == -1) {
				Q.push(vec[now][cnt]);
				d[vec[now][cnt]] = d[now] + 1;
			}
		}
	}
}

int main(void) {
	vec.push_back(ve);
	int u, k, v, i;
	cin >> n;
	for (i = 0; i < n; i++) {
		ve.clear();
		cin >> u >> k;
		ve.push_back(k);
		while (k--) {
			cin >> v;
			ve.push_back(v);
		}
		vec.push_back(ve);
	}

	bfs(1);

	for (i = 1; i <= n; i++) {
		cout << i << " " << d[i] << endl;
	}
}
