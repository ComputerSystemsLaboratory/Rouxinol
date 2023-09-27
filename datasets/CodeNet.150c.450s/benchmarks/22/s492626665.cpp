#include <stdio.h>
#include <utility>
#include <vector>
#include <queue>
using namespace std;

typedef long long int ll;
constexpr int kN = int(1E5 + 10), kM = int(5E5 + 10);
constexpr ll kInf = ll(1E16 + 10);

#define F first
#define S second
#define PB push_back

struct Edge {
	int to, cost;
};

vector<Edge> graph[kN];
ll dis[kN];

int main() {
	int n, m, s, l, r, c, cnt = 0;
	pair<ll, int> nxt;
	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
	scanf("%d%d%d", &n, &m, &s);
	for (int i = 0; i < m; i++) {
		scanf("%d%d%d", &l, &r, &c);
		graph[l].PB({r, c});
	}
	
	for (int i = 0; i < n; i++) dis[i] = kInf;
	dis[s] = 0;
	pq.push({0, s});
	while (!pq.empty()) {
	    if (cnt++ > m * n) {
	        printf("NEGATIVE CYCLE\n");
	        return 0;
	    }
		nxt = pq.top();
		pq.pop();
		if (nxt.F > dis[nxt.S]) continue;
		for (Edge i : graph[nxt.S]) if (dis[nxt.S] + i.cost < dis[i.to]) {
			dis[i.to] = dis[nxt.S] + i.cost;
			pq.push({dis[i.to], i.to});
		}
	}
	for (int i = 0; i < n; i++) if (dis[i] == kInf) printf("INF\n");
	else printf("%lld\n", dis[i]);
}

