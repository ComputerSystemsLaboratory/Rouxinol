// union find木の実装
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A&lang=jp

#include<iostream>
#include<string>
using namespace std;
const int MAX_N = 100000;
int parent[MAX_N+1];
int trank[MAX_N+1];
int n, q;
int command, x, y;


int root(int x){
  if (parent[x] == x){
    return x;
  }else{
    // 経路圧縮を行う
    int update = root(parent[x]);
    parent[x] = update;
    return update;
  }
}

void unite(int x, int y){
  int tree_x = root(x);
  int tree_y = root(y);
  if (tree_x == tree_y){return;}
  else{
    if (trank[tree_x] >= trank[tree_y]) {
      parent[tree_y] = parent[tree_x];
      trank[tree_x] = max(trank[tree_x], trank[tree_y] + 1);
    }
    else{
      parent[tree_x] = parent[tree_y];
      trank[tree_y] = max(trank[tree_x] + 1, trank[tree_y]);
    }
  }
}

int get_rank(int x){
  return trank[root(x)];
}

bool same(int x, int y){
  return root(x) == root(y);
}

void dump_set(int n){
  cout << "==== Dump ====" << endl;

  cout << "Set:\t";
  for (int i = 1; i <= n; i++){
    cout << i << " ";
  }
  cout << endl;

  cout << "Par:\t";
  for (int i = 1; i <= n; i++){
    cout << parent[i] << " ";
  }
  cout << endl;

  cout << "trank:\t";
  for (int i = 1; i <= n; i++){
    cout << trank[i] << " ";
  }
  cout << endl;
}

int main() {
  cin >> n >> q;
  for(int i = 1; i <= n; i++){
    parent[i] = i;
    trank[i] = 1;
  }

  for(int i = 0; i < q; i ++ ){
    cin >> command >> x >> y;
    if( command == 0 ){
      unite(x, y);
    }
    else if( command == 1 ){
      if (same(x, y)){
        cout << 1 << endl;
      }else{
        cout << 0 << endl;
      }
    }
    //dump_set(n);
  }
  return 0;
}

