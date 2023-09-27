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

vector<int> V[105], color(105, 1), d(105), f(105);
int t = 0;

void func(int a) {
	t++;
	d[a] = t;
	color[a] = 2;
	Loop(i, V[a].size()) {
		if (color[V[a][i]] == 1) {
			func(V[a][i]);
		}
	}
	t++;
	f[a] = t;
	color[a] = 3;
}

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
	Loop1(i, n) {
		if (color[i] == 1) func(i);
	}
	Loop1(i, n) {
		cout << i << " " << d[i] << " " << f[i] << endl;
	}
	return 0;
}