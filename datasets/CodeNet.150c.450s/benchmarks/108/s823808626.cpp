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

vector<int> V[105];
queue<int> Q;
vector<int> color(105, 1), d(105, -1);

int main() {
	int n;
	cin >> n;
	Loop(i, n) {
		int u, k;
		cin >> u >> k;
		Loop(j, k) {
			int v;
			cin >> v;
			V[u].push_back(v);
		}
	}
	//
	Q.push(1);
	color[1] = 2;
	d[1] = 0;
	while (Q.size() > 0) {
		int u = Q.front();
		Q.pop();
		Loop(i, V[u].size()) {
			if (color[V[u][i]] == 1) {
				Q.push(V[u][i]);
				color[V[u][i]] = 2;
				d[V[u][i]] = d[u] + 1;
			}
		}
	}
	Loop1(i, n) {
		cout << i << " " << d[i] << endl;
	}
	return 0;
}