#include <bits/stdc++.h>
using namespace std;
#define MAX 105

vector<vector<int> > vec;
vector<int> ve;
int dis[MAX];
queue<int> Q;
int n;

int search(int start, int end) {
	while(!Q.empty()) Q.pop();
	Q.push(start);
	for (int i = 1; i <= n; i++) {
		dis[i] = 0;
	}
	int now, len = 0;
	while (!Q.empty()) {
		now = Q.front();
		Q.pop();
		if (now == end)
			return dis[now];
		if (dis[now] == len)
			len++;
		for (int cnt = 1; cnt <= vec[now][0]; cnt++) {
			if (dis[vec[now][cnt]] == 0) {
				dis[vec[now][cnt]] = len;
				Q.push(vec[now][cnt]);
			}
		}
	}
	return -1;
}

int main(void) {
	vec.push_back(ve);
	int u, k, v, i;
	cin >> n;
	for (i = 1; i <= n; i++) {
		ve.clear();
		cin >> u >> k;
		ve.push_back(k);
		while (k--) {
			cin >> v;
			ve.push_back(v);
		}
		vec.push_back(ve);
	}

	for (i = 1; i <= n; i++) {
		cout << i << " " << search(1, i) << endl;
	}
	
}
