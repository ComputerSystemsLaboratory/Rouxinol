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

class Union_Find {
private:
	vi p, r;
	int find(int x) {
		if (p[x] == x) return x;
		else return find(p[x]);
	}
public:
	Union_Find(int N) {
		p.resize(N);
		r.resize(N);
		Loop(i, N) {
			p[i] = i;
			r[i] = 0;
		}
	}
	void unite(int x, int y) {
		x = find(x);
		y = find(y);
		if (x == y) return;
		if (r[x] < r[y]) p[x] = y;
		else {
			p[y] = x;
			if (r[x] == r[y]) r[x]++;
		}
	}
	bool same(int x, int y) {
		return find(x) == find(y);
	}
};


int main() {
	int n, q; cin >> n >> q;
	Union_Find uf(n);
	Loop(i, q) {
		int com, x, y; cin >> com >> x >> y;
		if (com == 0) {
			uf.unite(x, y);
		}
		else {
			cout << uf.same(x, y) << endl;
		}
	}
	return 0;
}