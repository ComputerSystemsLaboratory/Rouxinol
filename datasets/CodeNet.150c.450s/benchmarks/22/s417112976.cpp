#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 28;
typedef pair<int, int> Pr;

int n, m, start;
vector<Pr> g[1000];
int dist[1000];

int solve()
{
	for (int i = 0; i < n; i++){
		dist[i] = INF;
	}
	dist[start] = 0;
	
	int k = 0;
	while (k < n){
		bool update = false;
		for (int i = 0; i < n; i++){
			if (dist[i] == INF) continue;
			for (int j = 0; j < g[i].size(); j++){
				int from = i;
				int to = g[i][j].first;
				int cost = g[i][j].second;
				if (dist[to] > dist[from] + cost){
					dist[to] = dist[from] + cost;
					update = true;
				}
			}
		}
		if (!update) break;
		k++;
	}
	
	if (k == n) return -1;
	return 1;
}

int main()
{
	scanf("%d %d %d", &n, &m, &start);
	
	for (int i = 0; i < m; i++){
		int s, t, d;
		scanf("%d %d %d", &s, &t, &d);
		
		g[s].push_back(Pr(t, d));
	}
	
	if (solve() == -1){
		puts("NEGATIVE CYCLE");
	}
	else {
		for (int i = 0; i < n; i++){
			if (dist[i] == INF) puts("INF");
			else printf("%d\n", dist[i]);
		}
	}
}