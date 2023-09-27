#include <iostream>
#include <vector>
using namespace std;


class UnionFind{
  public:
    vector<int> rank, parent;
    
    UnionFind(){}
    UnionFind(int size){
      rank.resize(size, 0);
      parent.resize(size, 0);
      for(int i = 0; i < size; i++) make_new_set(i);
    }

    void make_new_set(int x){
      rank[x] = 0;
      parent[x] = x;
    }

    int find_root(int x){
      if(parent[x] == x) return x;
      return parent[x] = find_root(parent[x]);
    }

    bool same(int x, int y){
      return find_root(x) == find_root(y);
    }

    void unite(int x, int y){
      int root_of_x = find_root(x);
      int root_of_y = find_root(y);

      if(x == y) return;

      if(rank[root_of_x] < rank[root_of_y]){
        parent[root_of_x] = root_of_y;
      }else{
        parent[root_of_y] = root_of_x;
        if(rank[root_of_x] == rank[root_of_y]) rank[root_of_x]++;
      }
    }
};

int main(void){
  ios_base::sync_with_stdio(0);
  int n, a, b, q;
  int t;
  cin >> n >> q;
  UnionFind uf = UnionFind(n);
  for(int i = 0; i < q; i++){
    cin >> t >> a >> b;
    if(t == 0) uf.unite(a, b);
    else if(t == 1){
      if(uf.same(a, b)) cout << 1 << endl;
      else cout << 0 << endl;
    }
  }
  return 0; 
}