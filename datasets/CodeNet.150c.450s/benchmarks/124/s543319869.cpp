#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <algorithm>
#include <numeric>
#include <utility>
#include <cmath>

using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;

const int iinf = 1 << 29;
const long long linf = 1ll << 61;

#define dump(x) cerr << #x << " : " << x << '\n'
#define MOD(x, y) (((y) + (x) % (y)) % (y))

int N;

int main(int argc, char* argv[])
{
	using COST_T = ll;
	using NODE_T = int;
	using PAIR_T = pair<COST_T, NODE_T>;

	struct Edge
	{
		NODE_T node;
		COST_T cost;
	};

	const int MAX_NODE_INDEX = 99;
	const COST_T INF_DIST = linf;
	vector<Edge> edges[MAX_NODE_INDEX + 1];
	COST_T dist_ar[MAX_NODE_INDEX + 1];

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int u, k;
		scanf("%d%d", &u, &k);
		for (int j = 0; j < k; j++) {
			int v, c;
			scanf("%d%d", &v, &c);
			edges[u].push_back( { v, c } );
		}
	}

	priority_queue<PAIR_T, vector<PAIR_T>, greater<PAIR_T>> pq;
	fill(dist_ar, dist_ar + MAX_NODE_INDEX + 1, INF_DIST);
	NODE_T st = 0;
	dist_ar[st] = 0;
	pq.push(PAIR_T(0, st));
	while(!pq.empty()) {
		COST_T temp_cost = pq.top().first;
		NODE_T node_index = pq.top().second;
		pq.pop();
		if (dist_ar[node_index] < temp_cost) continue;
		for (int next_list_index = 0; next_list_index < (int)edges[node_index].size(); next_list_index++) {
			COST_T new_cost = temp_cost + edges[node_index][next_list_index].cost;
			NODE_T next_index = edges[node_index][next_list_index].node;
			if (dist_ar[next_index] >= new_cost) {
				dist_ar[next_index] = new_cost;
				pq.push(PAIR_T(new_cost, next_index));
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d %lld\n", i, dist_ar[i]);
	}

	return 0;
}