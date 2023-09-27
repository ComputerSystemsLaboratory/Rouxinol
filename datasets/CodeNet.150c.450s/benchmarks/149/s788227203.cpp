// Set - Disjoint Set: Union Find Tree
// 問題URL: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A&lang=jp
//
//
#include <iostream>

using namespace std;

int n, q, P[1000000], buff1, buff2, buff3;
int x[100000], y[100000];
bool com[100000];

int root(int x){
  if(P[x]==x) return x;
  P[x] = root(P[x]);
  return P[x];
}

bool is_same_set(int x, int y){
  return root(x) == root(y);
}

void unite(int x, int y){
  P[root(x)] = root(y);
}

int main(){
  cin >> n >> q;

  for(int i = 0; i < q; ++i){
    cin >> buff1 >> buff2 >> buff3;
    com[i] = buff1; x[i] = buff2; y[i] = buff3;
  }

  for (int i = 0; i < n; ++i){
    P[i] = i; //親配列の初期化
  }

  for(int i = 0; i < q; ++i){
      if(com[i]){
        cout << is_same_set(x[i], y[i]) << endl;
      } else {
        unite(x[i], y[i]);
      }
  }
}

