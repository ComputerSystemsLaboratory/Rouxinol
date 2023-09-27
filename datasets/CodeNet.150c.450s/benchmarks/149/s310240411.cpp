#include <iostream>
using namespace std;
int P[10010];
void init(int N){
  for (int i=0; i<N; i++) P[i] = i;
}
int root (int a){
  if (P[a] == a) return a;
  else {
    P[a] = root(P[a]);
    return P[a];
  }
}
bool is_same_set(int a, int b){
  return root(a) == root(b);
}
void unite(int a, int b){
  P[root(a)] = root(b);
}

int main(){
  int n, q;
  cin >> n;
  init(n);
  cin >> q;
  int c, x, y;
  for (int i=0; i<q; i++){
    cin >> c;
    cin >> x;
    cin >> y;
    if (c == 0) unite(x,y);
    else cout << is_same_set(x, y) << endl;
    }
}