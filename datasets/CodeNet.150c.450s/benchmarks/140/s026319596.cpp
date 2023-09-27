#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <utility>
#include <cmath>

#define INF_LL 9000000000000000000
#define INF 2000000000

#define REP(i, n) for(int i = 0;i < (n);i++)
#define FOR(i, a, b) for(int i = (a);i < (b);i++)

using namespace std;

typedef long long ll;
typedef pair<int, int> PII;

class Union_find{
private:
	vector<int> par;
	vector<int> rank;
	int n;

public:
	Union_find(int a){
		n = a;
		for(int i = 0;i < n;i++){
			par.push_back(i);
			rank.push_back(0);
		}
	}

	int find(int x){
		if(par[x] == x){
			return x;
		}else{
			return par[x] = find(par[x]);
		}
	}

	void unite(int x, int y){
		x = find(x);
		y = find(y);
		if(x == y) return;

		if(rank[x] < rank[y]){
			par[x] = y;
		}else{
			par[y] = x;
			if(rank[x] == rank[y]) rank[x]++;
		}
	}

	bool same(int x, int y){
		return find(x) == find(y);
	}
};

struct edge{ int u, v, cost; };

edge es[100000];
int V, E;

bool comp(const edge& e1, const edge& e2){
	return e1.cost < e2.cost;
}

int main(void){
	cin >> V >> E;
	for(int i = 0;i < E;i++){
		int a, b, c;
		cin >> a >> b >> c;
		es[i].u = a;
		es[i].v = b;
		es[i].cost = c;
	}
	Union_find uf(V);
	sort(es, es+E, comp);
	int res = 0;
	for(int i = 0;i < E;i++){
		edge e = es[i];
		if(!uf.same(e.u, e.v)){
			uf.unite(e.u, e.v);
			res += e.cost;
		}
	}
	cout << res << endl;
}