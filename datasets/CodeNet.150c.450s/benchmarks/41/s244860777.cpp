#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <functional>
#include <numeric>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <map>
#include <set>
#include <cstdlib>
#include <bitset>
using namespace std;
#define INT_MAX 2147483647
#define INT_MIN (-2147483647 - 1)
#define INF (int)1e8
#define _INF (int)-1e8
#define INFLL (long long)1e14
#define _INFLL (long long)-1e14
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
#define bitmanip(m,val) static_cast<bitset<(int)m>>(val)
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef vector<char> vc;
typedef vector<vector<char>> vvc;
typedef pair<int, int> P;

class Graph {
private:
	struct node {
		bool done;
		vi to, cost;
		int id, from;
		ll d;
		bool operator<(const node & another) const {
			return !(d != another.d ? d < another.d : id < another.id);
		}
	};
	vector<node> nodes;
	int n;
public:
	vll result;
	vvll result2;
	Graph(vector<vector<P>> data) {
		n = data.size();
		result.resize(n);
		nodes.resize(n);
		Loop(i, n) {
			nodes[i] = { false,{},{}, i, -1, INFLL };
			Loop(j, data[i].size()) {
				nodes[i].to.push_back(data[i][j].first);
				nodes[i].cost.push_back(data[i][j].second);
			}
		}
	}
	void reset() {
		Loop(i, n) {
			nodes[i].done = false;
			nodes[i].from = -1;
			nodes[i].d = INFLL;
		}
		fill(result.begin(), result.end(), 0);
	}
	//mode=>dijkstra, !mode=>prim
	void mainalgo(int start, int mode) {
		reset();
		priority_queue<node> pq;
		nodes[start].d = 0;
		pq.push(nodes[start]);
		while (pq.size()) {
			node a = pq.top(); pq.pop();
			if (nodes[a.id].done) continue;
			nodes[a.id].done = true;
			Loop(j, a.to.size()) {
				node *b = &nodes[a.to[j]];
				if ((*b).done) continue;
				ll cand = (mode ? a.d : 0) + a.cost[j];
				if (cand < (*b).d) {
					(*b).d = cand;
					(*b).from = a.id;
					pq.push(*b);
				}
			}
		}
		Loop(i, n) result[i] = nodes[i].d;
	}
	bool bellman_ford(int start) {
		reset();
		nodes[start].d = 0;
		Loop(k, n) {
			Loop(i, n) {
				node *a = &nodes[i];
				Loop(j, (*a).to.size()) {
					node *b = &nodes[(*a).to[j]];
					if ((*a).d != INFLL && (*a).d + (*a).cost[j] < (*b).d) {
						(*b).d = (*a).d + (*a).cost[j];
						(*b).from = (*a).id;
						if (k == n - 1) return false;
					}
				}
			}
		}
		Loop(i, n) result[i] = nodes[i].d;
		return true;
	}
	bool warshall_floyd() {
		result2 = vvll(n, vll(n, INFLL));
		Loop(i, n) {
			result2[i][i] = 0;
			Loop(j, nodes[i].to.size()) {
				result2[i][nodes[i].to[j]] = nodes[i].cost[j];
			}
		}
		Loop(i, n) {
			Loop(j, n) {
				Loop(k, n) {
					if (result2[j][i] == INFLL || result2[i][k] == INFLL) continue;
					result2[j][k] = min(result2[j][k], result2[j][i] + result2[i][k]);
				}
			}
		}
		Loop(i, n) {
			if (result2[i][i] < 0) return false;
		}
		return true;
	}
};

int main() {
	int n, m; cin >> n >> m;
	vector<vector<P>> data(n);
	Loop(i, m) {
		int s, t, d; cin >> s >> t >> d;
		data[s].push_back({ t,d });
	}
	Graph g(data);
	if (g.warshall_floyd()) {
		Loop(i, n) {
			if (g.result2[i][0] == INFLL) cout << "INF";
			else cout << g.result2[i][0];
			Loop1(j, n - 1) {
				if (g.result2[i][j] == INFLL) cout << " INF";
				else cout << " " << g.result2[i][j];
			}
			cout << endl;
		}
	}
	else cout << "NEGATIVE CYCLE" << endl;
	return 0;
}