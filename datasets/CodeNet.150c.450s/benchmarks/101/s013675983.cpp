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
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
using namespace std;
typedef long long int ll;

static const int N = 100005;
vector<int> V[N], visit(N, 0), color(N, 0);
queue<int> Q;

void paint(int c) {
	while (Q.size() > 0) {
		int u = Q.front();
		Q.pop();
		color[u] = c;
		Loop(i, V[u].size()) {
			if (color[V[u][i]] == 0) {
				Q.push(V[u][i]);
			}
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	Loop(i, m) {
		int s, t;
		cin >> s >> t;
		V[s].push_back(t);
		V[t].push_back(s);
	}
	//color painting
	int c = 0;
	Loop(i, n) {
		if (color[i] == 0) {
			c++;
			Q.push(i);
			paint(c);
		}
	}
	//end
	int q;
	cin >> q;
	Loop(i, q) {
		int s, t;
		cin >> s >> t;
		if (color[s] == color[t]) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}