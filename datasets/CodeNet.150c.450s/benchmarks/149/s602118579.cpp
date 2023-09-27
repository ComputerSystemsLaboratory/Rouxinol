#include <iostream>
#include <vector>
using namespace std;

class UnionFindTree{
private:
  vector<int> parent;

  
  int getRoot(int i){
    if(parent[i] == i)return i;
    return getRoot(parent[i]);
  }


public:
  UnionFindTree(int n) : parent(n) {
    for(int i=0; i<n; i++)parent[i] = i;
  }


  void unite(int x, int y){
    int rootx = getRoot(x);
    int rooty = getRoot(y);
    
    if(rootx == rooty)return;
    parent[rootx] = rooty;
  }

  bool same(int x, int y){
    return getRoot(x) == getRoot(y);
  }

};
  
int main(){

  int n,q;
  cin >> n >> q;
  UnionFindTree uft(n);

  for(int i=0; i<q; i++){
    int com, x, y;
    cin >> com >> x >> y;
    if(com == 0)uft.unite(x,y);
    else cout << (uft.same(x,y)? 1 : 0) << endl;
  }
    

  return 0;
}

