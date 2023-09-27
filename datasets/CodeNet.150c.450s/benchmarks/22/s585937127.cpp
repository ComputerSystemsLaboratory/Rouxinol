#include "bits/stdc++.h"
#include <sys/timeb.h>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define replrev(i,a,b) for(int i=(int)(b)-1;i>=(int)(a);i--)
#define reprev(i,n) replrev(i,0,n)
#define repi(itr,ds) for(auto itr = ds.begin(); itr != ds.end(); ++itr)
#define mp make_pair
#define INF 2000000000
#define MOD 1000000007
#define PI 3.1415926536
#define RMAX 4294967295
typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<P> vP;
typedef vector<vector<int> > vvi;
typedef vector<vector<char> > vvc;
typedef vector<vector<P> > vvP;
typedef priority_queue<int, vector<int>, greater<int> > pqli;
typedef priority_queue<P, vector<P>, greater<P> > pqlP;

bool BellmanFord(vvP graph, int start, vi &cost, int V) {
	vi prev(V);
	vb visitable(V, false);
	int k = 1;
	int visitable_num = 0;

	stack<int> st;
	st.push(start);
	while (!st.empty()) {
		int pos = st.top();
		st.pop();
		visitable[pos] = true;
		rep(i, graph[pos].size()) {
			if (!visitable[graph[pos][i].first]) {
				st.push(graph[pos][i].first);
			}
		}
	}

	rep(i, V) {
		if (visitable[i])visitable_num++;
	}

	fill(cost.begin(), cost.end(), INF);
	cost[start] = 0;

	while (true) {
		bool flag = true;
		rep(i, V)rep(j, graph[i].size()) {
			// ??¨???(i->graph[i][j].first)????????????
			if (visitable[i] && cost[graph[i][j].first] > cost[i] + graph[i][j].second) {
				cost[graph[i][j].first] = cost[i] + graph[i][j].second;
				prev[graph[i][j].first] = i;
				flag = false;
				break;
			}
		}
		if (flag)break;
		if (k == visitable_num) return false;
		k++;
	}
	return true;
}

int main() {
	int V, E, r;
	cin >> V >> E >> r;
	vvP G(V);
	vi c(V);
	rep(i, E) {
		int s, t, d;
		cin >> s >> t >> d;
		G[s].push_back(mp(t, d));
	}

	if (BellmanFord(G, r, c, V)) {
		rep(i, V) {
			if (c[i] > INF / 2) {
				cout << "INF" << endl;
			}
			else {
				cout << c[i] << endl;
			}
		}
	}
	else {
		cout << "NEGATIVE CYCLE" << endl;
	}

	return 0;
}