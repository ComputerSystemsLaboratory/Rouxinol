#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;

const int V_MAX = 10000;
const int INF = 100000000;

struct Edge {
	bool operator< (const Edge& e)const {
		return w > e.w;
	}
	int to;
	int w;
};

int main() {
	int v;
	int e;
	priority_queue<Edge> edge[V_MAX];
	vector<int> tree;
	bool check[V_MAX] = { false };
	int ans = 0;

	scanf("%d%d", &v, &e);

	for (int i = 0; i < e; i++) {
		int s, t, w;
		Edge e1, e2;

		scanf("%d%d%d", &s, &t, &w);

		e1.to = t;
		e1.w = w;
		e2.to = s;
		e2.w = w;

		edge[s].push(e1);
		edge[t].push(e2);
	}

	tree.push_back(0);
	check[0] = true;

	for (int i = 1; i < v; i++) {

		int minW = INF;
		int minV = 0;
		int k = 0;

		for (int j = 0; j < tree.size(); j++) {
			int t = tree[j];
			while (!edge[t].empty() && check[edge[t].top().to]) {
				edge[t].pop();
			}

			if (edge[t].empty())continue;

			if (minW > edge[t].top().w) {
				minV = edge[t].top().to;
				minW = edge[t].top().w;
				k = t;
			}
		}

		edge[k].pop();

		check[minV] = true;
		tree.push_back(minV);
		ans += minW;
	}

	printf("%d\n", ans);

	return 0;
}