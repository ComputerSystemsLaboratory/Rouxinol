#include <iostream>
#include <vector>
using namespace std;

int root(int a, vector<int>& v){
  if(v[a] == a) return a;
  return (v[a] = root(v[a], v));
}

bool same(int a, int b, vector<int>& v){
  return root(a,v) == root(b,v);
}

void unite(int a, int b, vector<int>& v){
  v[root(a,v)] = root(b,v);
}

int main(){
  int n,q;
  cin >> n >> q;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    v[i] = i;
  }
  int c,x,y;
  for(int i = 0; i < q; i++){
    cin >> c >> x >> y;
    if(c == 0) unite(x,y,v);
    else{
      if(same(x,y,v)) cout << 1 << endl;
      else cout << 0 << endl;
    }
  }
  return 0;
}