#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

class UnionFind {
private:
  std::vector<int> data;
public:
  UnionFind(const int size):data(size,-1){}
  void union_set(int x, int y){
    x = this->get_root(x);
    y = this->get_root(y);
    
    if (x != y) {
      if (this->data[y] < data[x]) {
        swap(x, y);
      }
      this->data[x] += this->data[y];
      this->data[y] = x;
    }  
  }
  bool is_same(const int x, const int y){
    return this->get_root(x) == this->get_root(y);
  }
  int get_root(const int x){
    return this->data[x] < 0 ? x : this->data[x] = this->get_root(this->data[x]);
  }
  int get_size(int x){
    return -this->data[this->get_root(x)];
  }
};

using Edge = struct edge{
  int from, to, cost;
  edge(const int s, const int t, const int c):from(s),to(t),cost(c){}
  bool operator<(const edge& e) const {return cost < e.cost;}
};

struct Graph{
  int v_size;
  vector<Edge> edge_set;
  
  Graph(const int v_size):v_size(v_size){}
  
  void add_edge(const int s, const int t, const int w){
    this->edge_set.emplace_back(Edge{s, t, w});
  }
};

int mst(Graph& g){
  UnionFind uf(g.v_size);
  int ans {0};

  sort(begin(g.edge_set), end(g.edge_set));

  for(auto&& e : g.edge_set){
    if(!uf.is_same(e.from, e.to)){
      ans += e.cost;
      uf.union_set(e.from, e.to);
    }
  }
  
  return ans;
}

int main()
{
  int n;
  cin >> n;
  
  Graph g(n);

  int x;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      cin >> x;
      if(x != -1){
        g.add_edge(i, j, x);
      }
    }
  }

  cout << mst(g) << endl;
}
