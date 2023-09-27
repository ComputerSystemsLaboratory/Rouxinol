//#define MYDEBUG
#include <bits/stdc++.h>
#ifdef MYDEBUG
#define debug(x) cout<<#x<<": "<<x<<endl
#define ifcin(x) std::ifstream cin(x)
#else
#define debug(x)
#define ifcin(x)
#endif
#define ll long long
#define ull unsigned long long
#define eps 1e-14
#define all(x) x.begin(), x.end()
#define rep(i,from,to) for(int i=from; i<to; ++i)
#define REP(i,from,to) for(int i=from; i<=to; ++i)
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::ostream;
using std::swap;
using std::max;
using std::min;
using std::queue;
typedef struct edge edge;
typedef struct unionFind unionFind;
typedef struct Graph Graph;

template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
  out << "[";
  size_t last = v.size() - 1;
  for (size_t i = 0; i < v.size(); ++i) {
    out << v[i];
    if (i != last)
      out << ",";
  }
  out << "]";
  return out;
}

struct unionFind{
	vector<int> par;
	vector<int> rank;
	unionFind(int n) {
		par = vector<int>(n);
		rank = vector<int>(n);
		rep(i,0,n){
			par[i] = i;
			rank[i] = 1;
		}
	}
	
	int find(int x){
		if(par[x] == x){
			return x;
		}
		return par[x] = find(par[x]);
	}
	
	bool same(int x, int y){
		return find(x) == find(y);
	}
	
	void unite(int x, int y){//rank[x] > rank[y]
		x = find(x);
		y = find(y);
		if(x == y){
			return;
		}
		if(rank[x] < rank[y]){
			swap(x,y);
		}
		par[y] = x;
		rank[x] += rank[y];
		rank[y] = 0;
	}
	
	int size(int x){
		return rank[x];
	}
};

struct edge{
	int from, to, cost;
	edge(int from, int to, int cost){
		this->from = from;
		this->to = to;
		this->cost = cost;
	}
	
	edge(){
		*this = edge(-1,-1,-1);
	}
	
	bool operator<(const edge& e) const{
		return cost < e.cost;
	}
};

class Graph{
	public:
	static int kruskal(vector<edge>& es, int n){
		sort(es.begin(), es.end());
		unionFind uf(n);
		int min_cost = 0;
		rep(i,0,es.size()){
			edge& e = es[i];
			if(!uf.same(e.from, e.to)){
				min_cost += e.cost;
				uf.unite(e.from, e.to);
			}
		}
		return min_cost;
	}
};


int V,E;
vector<edge> es;
void solve(){
	ifcin("/storage/emulated/0/AppProjects/past15/jni/in.txt");
	cin >> V >> E;
	rep(i,0,E){
		int s,t,d;
		cin >> s >> t >> d;
		es.push_back(edge(s,t,d));
		if(s==V||t==V){
			cout << s << "," << t<< endl;
		}
	}
	cout << Graph::kruskal(es, V) << endl;
}

int main() {
	solve();
}