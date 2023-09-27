#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print_preorder(const vector<pair<int, int> >& nodes, const int r){
  //cout << '?' << endl;
  if(r<0) return;
  //cout << '?' << endl;
  cout << ' ' << r;
  print_preorder(nodes, nodes[r].first);
  print_preorder(nodes, nodes[r].second);
}

void print_inorder(const vector<pair<int, int> >& nodes, const int r){
  if(r<0) return;
  print_inorder(nodes, nodes[r].first);
  cout << ' ' << r;
  print_inorder(nodes, nodes[r].second);
}
  

void print_postorder(const vector<pair<int, int> >& nodes, const int r){
  if(r<0) return;  
  print_postorder(nodes, nodes[r].first);
  print_postorder(nodes, nodes[r].second);
  cout << ' ' << r;
}

int main(){
  std::ios_base::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<pair<int, int> > nodes(n);
  vector<bool> is_root(n,true);

  for(int i=0; i<nodes.size(); ++i){
    int j; cin >> j;
    auto& v = nodes[j];
    
    cin >> v.first;
    cin >> v.second;
    if(v.first >= 0)  is_root[v.first]  = false;
    if(v.second >= 0) is_root[v.second] = false;
  }

  // cout << "---" << endl;
  // for(auto v : nodes){
  //   cout << v.first << ' ' << v.second << endl;
  // }
  // cout << "---" << endl;

  const int r =
    (nodes.size() > 0) ? 
    find(is_root.begin(), is_root.end(), true)
    - is_root.begin() : -1;

  //cout << '?' << endl;
  
  // Preorder
  cout << "Preorder" << endl;
  print_preorder(nodes, r); cout << endl;
  cout << "Inorder" << endl;
  print_inorder(nodes, r); cout << endl;
  cout << "Postorder" << endl;
  print_postorder(nodes, r); cout << endl;
  
  
  
  return 0;
}