#include <cstdio>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <utility>
#include <list>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <numeric>
#include <functional>
#include <ctime>
#include <bitset>
#include <map>
#include <set>

using namespace std;

typedef long long ll;
typedef long long LL;
typedef unsigned long long ull;
typedef unsigned long long ULL;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<ll> VLL;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pii PII;

#define endl "\n"

#ifdef WIN32
#define debug(x) cerr << #x << " : " << x << "\n"
#else
#define debug(x)
#endif

struct DisjointSet {
	vector<int> rank, p;

	DisjointSet(){}

	DisjointSet(int size) {
		rank.resize(size, 0);
		p.resize(size, 0);
		for (int i = 0; i < size; i++){
			makeSet(i);
		}
	}

	void makeSet(int x) {
		p[x] = x;
		rank[x] = 0;
	}

	bool same(int x, int y){
		return findSet(x) == findSet(y);
	}

	void unite(int x, int y){
		link(findSet(x), findSet(y));
	}

	void link(int x, int y){
		if (rank[x] > rank[y]) {
			p[y] = x;
		}
		else{
			p[x] = y;
			if (rank[x] == rank[y]){
				rank[y]++;
			}
		}
	}

	int findSet(int x){
		if (x != p[x]){
			p[x] = findSet(p[x]);
		}
		return p[x];
	}
};



int main(){
	int n, a, b, q;
	int t;

	cin >> n >> q;
	DisjointSet ds = DisjointSet(n);
	for (int i = 0; i < q; i++){
		cin >> t >> a >> b;
		if (t == 0) ds.unite(a, b);
		else if (t == 1){
			if (ds.same(a, b)) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
	}
}