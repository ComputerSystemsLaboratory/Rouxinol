#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
 
#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
 
using namespace std;
 
typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;
 
const int INF=1<<29;
const double EPS=1e-9;
 
const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
/*
class UnionFind {
public:
	int N;
	std::vector<int> parent;
	UnionFind(int n) : N(n), parent(N, -1) {

	}
	void Union(int a, int b) {
		a = root(a);
		b = root(b);
		int sizea = size(a);
		int sizeb = size(b);
		if (sizea > sizeb) {
			int temp = b;
			b = a;
			a = temp;
		}
		parent[b] += parent[a];
		parent[a] = b;
	}
	bool Find(int a, int b) {
		return root(a) == root(b);
	}
	int root(int a) {
		if (parent[a] < 0) return a;
		return parent[a] = root(parent[a]);
	}
	int size(int a) {
		a = root(a);
		return -parent[a];
	}
};
*/

struct UnionFind {
  vector<int> data;
  UnionFind(int size) : data(size, -1) { }
  bool unionSet(int x, int y) {
    x = root(x); y = root(y);
    if (x != y) {
      if (data[y] < data[x]) swap(x, y);
      data[x] += data[y]; data[y] = x;
    }
    return x != y;
  }
  bool findSet(int x, int y) {
    return root(x) == root(y);
  }
  int root(int x) {
    return data[x] < 0 ? x : data[x] = root(data[x]);
  }
  int size(int x) {
    return -data[root(x)];
  }
};
int main(int argc, char const *argv[]) {
	int N, M;
	cin >> N >> M;
	UnionFind uf(N);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		uf.unionSet(a, b);
	}
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; ++i) {
		int a, b;
		cin >> a >> b;
		if (uf.findSet(a, b)) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}

	return 0;
}