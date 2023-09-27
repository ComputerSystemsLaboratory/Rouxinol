#include "bits/stdc++.h"
#define int long long
#define range(i, a, b) for(auto i = a; i < b; i++)
#define rep(i, a) range(i, 0, a)
#define all(a) (a).begin(),(a).end()
using namespace std;
const int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
const int MOD = 1000000007;
using vi = vector <int>;
using vvi = vector <vi>;

class unionFindTree{
	private:
		vector <int> tree;
		vector <int> rank;

	public:
		unionFindTree(int sz){
			tree = vector <int> (sz);
			rank = vector <int> (sz, 0);
			for(int i = 0; i < tree.size(); i++)
				tree[i] = i;
		}

		int root(int x){
			return tree[x] == x ? x : tree[x] = root(tree[x]);
		}

		bool same(int a, int b){
			return root(a) == root(b);
		}

		void unite(int a, int b){
			a = root(a);
			b = root(b);
			if(a == b)return;

			if(rank[a] < rank[b]) swap(a, b);

			tree[b] = a;
			rank[a] += rank[a] == rank[b];
		}

		int size(){
			return tree.size();
		}

};


class Kruskal{
private:
	struct edge{
		int u, v, cost;
		bool operator< (const edge& e) const{
			return cost < e.cost;
		}
	};
	vector <edge> es;
	int V;

public:
	Kruskal(int v, int e){
		V = v;
		es = vector <edge> (e);
	}

	void addEdge(int start, int end, int cost){
		es.push_back({start, end, cost});
	}

	int execute(){
		unionFindTree uft(V);
		sort(es.begin(), es.end());
		int res = 0;
		for(int i = 0; i < es.size(); i++){
			edge e = es[i];
			if(!uft.same(e.u, e.v)){
				uft.unite(e.u, e.v);
				res += e.cost;
			}
		}
		return res;
	}
};

signed main(){
	int v, e;
	cin >> v >> e;
	Kruskal kruskal(v, e);

	rep(i, e){
		int s, t, w;
		cin >> s >> t >> w;
		kruskal.addEdge(s, t, w);
		kruskal.addEdge(t, s, w);
	}

	cout << kruskal.execute() << endl;
}
