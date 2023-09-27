#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
#include <queue>
#include <list>
using namespace std;

struct UnionFind{
  vector<int> data;
  UnionFind(int size): data(size, -1){}
  bool unioSet(int x, int y){
    x = root(x); y = root(y);
    if(x != y){
      if(data[y] < data[x]) swap(x, y);
      data[x] += data[y]; data[y] = x;
    }
    return x != y;
  }
  bool findSet(int x, int y){
    return root(x) == root(y);
  }
  int root(int x){
    return data[x] < 0 ? x : data[x] = root(data[x]);
  }
  int size(int x){
    return -data[root(x)];
  }
};

int main(){
  int n, m, q;
  int x, y;
  cin >> n >> m;
  UnionFind uf(n);
  for(int i=0;i<m;i++){
    cin >> x >> y;
    uf.unioSet(x, y);
  }
  cin >> q;
  vector<bool> out(q);
  for(int i=0;i<q;i++){
    cin >> x >> y;
    out[i] = (uf.findSet(x, y));
  }
  for(int i=0;i<q;i++){
    cout << (out[i] ? "yes" : "no") << endl;
  }
  return 0;
}