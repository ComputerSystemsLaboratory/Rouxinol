#include <iostream>
#include <vector>

using namespace std;

class DisjointSet {
  public:
    DisjointSet(int num_nodes);
    int find(int element);
    void do_union(int elment_a, int element_b);
    void dup(vector<int> &v);
  private:
    vector<int> parent_, rank_;
};

DisjointSet::DisjointSet(int num_nodes) : parent_(num_nodes),rank_(num_nodes, 0){
  for (int i = 0; i < num_nodes; i++) parent_[i] = i;
}

int DisjointSet::find(int element){
  if(parent_[element] == element) return element;
  return parent_[element] = find(parent_[element]);
}

void DisjointSet::do_union(int a, int b){
  if(parent_[a] == parent_[b]) return;
  int fa = find(a), fb = find(b);

  if(rank_[fa] < rank_[fb]) {
    parent_[fa] = fb;
  } else {
    parent_[fb] = fa;
    if(rank_[fa] == rank_[fb]) rank_[fa]++;
  }
}

int main(){
  int n = 0, q = 0;
  cin >> n >> q;

  DisjointSet ds(n);

  vector<bool> ans;

  for (int i = 0; i < q; i++){
    int com = 0, x = 0, y = 0;
    cin >> com >> x >> y;

    if(com == 0){
      ds.do_union(x, y);
    } else {
      ans.push_back(ds.find(x) == ds.find(y));
    }
  }

  for (int i = 0; i < ans.size(); i++){
    cout << ans[i] << endl;
  }
}
