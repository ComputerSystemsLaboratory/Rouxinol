#include <iostream>
#include <iomanip>
#include <climits>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <functional>
#include <numeric>
#include <unordered_map>
#include <map>
#include <set>
#include <cstdlib>
#include <bitset>
#include <random>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

#define INF (int)1e8
#define _INF (int)-1e8
#define INFLL (long long)1e15
#define _INFLL (long long)-1e15
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
typedef pair<int, int> P;

struct graph_t {
	int n;           // |V|, index begins with 0
	int m;           // |E|
	vector<P> edges; // E
	vector<ll> cost; // cost or distance
	vector<ll> cap;  // capacity
};

class Warshallfloyd {
private:
	int n;
	bool negative_cycle;
	vvll wf_table;
public:
	Warshallfloyd(graph_t G) {
		n = G.n;
		wf_table = vvll(n, vll(n, INFLL));
		Loop(i, G.edges.size()) {
			wf_table[G.edges[i].first][G.edges[i].second] = G.cost[i];
		}
		Loop(i, n) wf_table[i][i] = 0;
		Loop(i, n) {
			Loop(j, n) {
				Loop(k, n) {
					if (wf_table[j][i] == INFLL || wf_table[i][k] == INFLL) continue;
					wf_table[j][k] = min(wf_table[j][k], wf_table[j][i] + wf_table[i][k]);
				}
			}
		}
		Loop(i, n) {
			if (wf_table[i][i] < 0) {
				negative_cycle = true;
				return;
			}
		}
		negative_cycle = false;
		return;
	}
	vvll get_wf_table() {
		return wf_table;
	}
	bool is_negative_cycle() {
		return negative_cycle;
	}
};

// prim sample
int main() {
	graph_t G;
	cin >> G.n >> G.m;
	Loop(i, G.m) {
		int s, t, c; cin >> s >> t >> c;
		G.edges.push_back({ s, t });
		G.cost.push_back(c);
	}
	Warshallfloyd warshallfloyd(G);
	if (warshallfloyd.is_negative_cycle()) cout << "NEGATIVE CYCLE" << endl;
	else {
		vvll result = warshallfloyd.get_wf_table();
		Loop(i, G.n) {
			if (result[i][0] == INFLL) cout << "INF";
			else cout << result[i][0];
			Loop1(j, G.n - 1) {
				if (result[i][j] == INFLL) cout << " INF";
				else cout << " " << result[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}