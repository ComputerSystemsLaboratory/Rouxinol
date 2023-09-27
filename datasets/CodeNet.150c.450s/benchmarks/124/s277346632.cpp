#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
#include <cstdlib>
#define INT_MAX 2147483647
#define INT_MIN -2147483646
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

static const int N = 105;

struct vertex {
	int id;
	int p;
	int d;
	bool operator<(const vertex & another) const {
		return (d != another.d ? d>another.d : id>another.id);
	}
};

struct edge {
	int end;
	int w;
};

int main() {
	int n;
	cin >> n;
	vector<vector<edge>> E(N);
	Loop(i, n) {
		int u, k;
		cin >> u >> k;
		Loop(i, k) {
			int v, c;
			cin >> v >> c;
			E[u].push_back({ v,c });
		}
	}
	//
	priority_queue<vertex> pq;
	vi color(N, 0), dist(N, 0);
	pq.push({ 0,-1,0 });
	while (pq.size() > 0) {
		vertex v = pq.top();
		pq.pop();
		if (color[v.id] == 1) continue;
		dist[v.id] = v.d;
		color[v.id] = 1;
		Loop(j, E[v.id].size()) {
			pq.push({ E[v.id][j].end, v.id, dist[v.id] + E[v.id][j].w });
		}
	}
	Loop(i, n) {
		cout << i << " " << dist[i] << endl;
	}
	return 0;
}