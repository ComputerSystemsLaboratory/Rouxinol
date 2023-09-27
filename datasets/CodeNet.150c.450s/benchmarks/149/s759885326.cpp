#include <iostream>

int P[100000];
void init(int n);
int root(int n);
void unite(int a, int b);
bool is_in_the_same_tree(int a, int b);

using namespace std;
int main(){
  int n, q, com, x, y;
  cin >> n >> q;
  init(n+1);
  for (int i = 0; i < q; ++i){
    cin >> com >> x >> y;
    if(com==0){unite(x, y);}
    else if(com==1){cout<<is_in_the_same_tree(x,y)<<endl;}
  }
}

void init(int n){
  for (int i = 0; i < n; ++i){P[i] = i;}
}

int root(int n){
  if(P[n]==n){return n;}
  return root(P[n]);
}

void unite(int a, int b){
  P[root(a)] = root(b);
}

bool is_in_the_same_tree(int a, int b){
  return root(a) == root(b);
}