#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <functional>
#include <utility>

using namespace std; // ???????????¨???
#define rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define pb push_back 
					 // make_pair ??????????????§
class disjoint_set {
	vector<int> p;
public:
	disjoint_set(int n) : p(n, -1) {}
	int root(int i) { return p[i] >= 0 ? p[i] = root(p[i]) : i; }
	bool same(int i, int j) { return root(i) == root(j); }
	int size(int i) { return -p[root(i)]; }
	void merge(int i, int j) {
		i = root(i), j = root(j);
		if (i == j) return;
		if (p[i] > p[j]) swap(i, j);
		p[i] += p[j]; p[j] = i;
	}
};

int N, Q;
int main() {
	cin >> N >> Q;
	disjoint_set U(N);

	int com, x, y;
	rep(i, Q)
	{
		cin >> com >> x >> y;
		if (com)
		{
			cout << U.same(x, y) << endl;
		}
		else
		{
			U.merge(x, y);
		}
	}
	return 0;
}