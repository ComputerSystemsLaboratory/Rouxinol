#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

class DisjointSet{
  public:
    vector<int> p; //parent
    DisjointSet(int size){
      for(int i=0;i<size;i++) makeSet(i); //initialize
    }
    void makeSet(int x){
      p.push_back(x);
    }
    void unite(int x, int y){
      link(findSet(x), findSet(y));
    }
    int findSet(int x){
      if(x != p[x]) p[x]=findSet(p[x]);
      return p[x];
    }
    void link(int x, int y){
      p[y]=x;
    }
    bool isSameSet(int x, int y){
      return findSet(x)==findSet(y);
    }
};

int main(){
  int n, q; cin >> n >> q;
  DisjointSet ds=DisjointSet(n);
  for(int i=0;i<q;i++){
    int com, x, y; cin >> com >> x >> y;
    if(com){
      if(ds.isSameSet(x, y)) cout << 1 << endl;
      else cout << 0 << endl;
    }else{
      ds.unite(x, y);
    }
  }
}