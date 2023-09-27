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

class Dijkstra {
private:
	struct node{
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
	int start;
public:
	vll result;
	//??£??\?????????
	Dijkstra(vector<vector<P>> data, int Start) {
		n = data.size();
		start = Start;
		result.resize(n);
		nodes.resize(n);
		Loop(i, n) {
			nodes[i] = { false, {}, {}, i, -1, INFLL };
			Loop(j, data[i].size()) {
				nodes[i].to.push_back(data[i][j].first);
				nodes[i].cost.push_back(data[i][j].second);
			}
		}
	}
	void mainfunc() {
		priority_queue<node> pq;
		nodes[start].d = 0;
		pq.push(nodes[start]);
		while (pq.size()) {
			node focus = pq.top(); pq.pop();
			if (nodes[focus.id].done) continue;
			Loop(j, focus.to.size()) {
				if (nodes[focus.to[j]].done) continue;
				if (focus.d + focus.cost[j] < nodes[focus.to[j]].d) {
					nodes[focus.to[j]].d = focus.d + focus.cost[j];
					nodes[focus.to[j]].from = focus.id;
					pq.push(nodes[focus.to[j]]);
				}
			}
			nodes[focus.id].done = true;
		}
		Loop(i, n) {
			result[i] = nodes[i].d;
		}
	}
};

int main() {
	int n, m, r; cin >> n >> m >> r;
	vector<vector<P>> data(n);
	Loop(i, m) {
		int s, t, d; cin >> s >> t >> d;
		data[s].push_back({ t,d });
	}
	Dijkstra algo1(data, r);
	algo1.mainfunc();
	Loop(i, algo1.result.size()) {
		if (algo1.result[i] == INFLL) cout << "INF" << endl;
		else cout << algo1.result[i] << endl;
	}
	return 0;
}