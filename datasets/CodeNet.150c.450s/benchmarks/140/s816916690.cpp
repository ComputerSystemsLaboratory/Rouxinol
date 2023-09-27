#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;

const int V_MAX = 10000;
const int INF = 100000000;

struct Edge {
	bool operator< (const Edge& e)const {
		return e.w > w;
	}
	int s;
	int t;
	int w;
};

int parent(int uft[], int child) {
	if (uft[child] == -1)return child;
	return uft[child] = parent(uft, uft[child]);
}

int main() {
	int v, e;
	vector<Edge> edge;
	int uft[V_MAX];
	int ans = 0;
	
	scanf("%d%d", &v, &e);
	for (int i = 0; i < v; i++) {
		uft[i] = -1;
	}
	for (int i = 0; i < e; i++) {
		Edge e;
		scanf("%d%d%d", &e.s, &e.t, &e.w);
		
		edge.push_back(e);
	}

	sort(edge.begin(), edge.end());

	for (int i = 0; i < e; i++) {
		Edge e = edge[i];
		
		int p1 = parent(uft, e.s);
		int p2 = parent(uft, e.t);
		if (p1 != p2) {
			uft[p1] = p2;
			ans += e.w;
		}
	}

	printf("%d\n", ans);

	return 0;
}