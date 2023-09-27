#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <bitset>
#include <complex>
using namespace std;
#define REP(i,n) for(int i = 0; i < (int)n; i++)
#define FOR(i,a,b) for(int i = a; i < (int)b; i++)
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
typedef unsigned long long ull;
const int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
const double EPS = 1e-8;
const double INF = 1e12;
//////////////////////////////
// UnionFind
vector<int> v, parent, depth;
int find(int a){
  if(parent[a] == a) return a;
  else return parent[a] = find(parent[a]);
}
void merge(int a, int b){
  int pa = find(a), pb = find(b);
  if(pa == pb) return ;

  if(depth[pa] > depth[pb]) swap(pa, pb);
  if(depth[pa] == depth[pb]) ++depth[pa];
  parent[pb] = pa;
}
bool same(int a, int b){
  return find(a) == find(b);
}
void init_union_find(int V){
  v = vector<int>(V);
  parent = vector<int>(V);
  depth = vector<int>(V, 1);
  REP(i, V) parent[i] = i;
}
int main() {
	int n, q; cin >> n >> q;
	init_union_find(n);
	while(q--) {
		int a,b,c;
		cin >> a >> b >> c;
		if(a == 0)
			merge(b, c);
		else if(a == 1)
			cout << same(b, c) << endl;
	}

	return 0;
}