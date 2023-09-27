#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <list>
#include <stack>
#include <set>
#include <map>
#include <algorithm>

#define int long long
#define MOD7 1000000007
#define MOD9 1000000009

#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(a) (a).begin(), (a).end()

using namespace std;

int nextInt() {int a; cin >> a; return a;}
char nextChar() {char a; cin >> a; return a;}
double nextDouble() {double a; cin >> a; return a;}
string nextString() {string a; cin >> a; return a;}

void inputVector(vector<int> &v, int &n) {rep(i,n){v.push_back(nextInt());}}
void inputVector(vector<double> &v, int &n) {rep(i,n){v.push_back(nextDouble());}}
void inputVector(vector<string> &v, int &n) {rep(i,n){v.push_back(nextString());}}

class UnionFind {
private:
	class Node {
	public:
		int parent;

		Node(int parent) {
			this->parent = parent;
		}
	};

	int root(int x) {
		int base = x;
		while (x != node[x].parent) {
			x = node[x].parent;
		}
		node[base].parent = x;
		return x;
	}

	vector<Node> node;
public:
	UnionFind(int size) {
		for (int i = 0; i < size; i++) {
			node.push_back(Node(i));
		}
	}

	void unite(int x, int y) {
		node[root(x)].parent = root(y);
	}

	bool same(int x, int y) {
		return root(x) == root(y);
	}
};

class Edge {
public:
	int s;
	int t;
	int w;
	Edge(int s, int t, int w) {
		this->s = s;
		this->t = t;
		this->w = w;
	}

	bool operator<(const Edge &a) const {
		return w > a.w;
	}
};

signed main() {
	int V, E;
	cin >> V >> E;

	priority_queue<Edge> q;
	rep(i, E) {
		int s, t, w;
		cin >> s >> t >> w;
		q.push(Edge(s, t, w));
	}

	auto uf = UnionFind(V);

	int ret = 0;
	while (!q.empty()) {
		Edge now = q.top();
		q.pop();

		if (!uf.same(now.s, now.t)) {
			uf.unite(now.s, now.t);
			ret += now.w;
		}
	}

	cout << ret << endl;

    return 0;
}