#include <iostream>
using namespace std;

int P[10010];

void init(int N){
  for(int i=0; i< N; ++i){
    P[i]= i;
  }
}

int root(int a){
  if(P[a]==a) return a;//aはroot
  return (P[a] = root(P[a]));//aの親のrootを求め,aの親とする
}
bool is_same_set(int a, int b){
  return root(a) == root(b);
}
void unite(int a, int b){
   P[root(a)] = root(b);
}


int main(){
  int n,q,d,x,y;
  cin >> n >> q;
  init(n);
  for(int i=0;i<q;i++){
    cin >> d;
    if(d==0){
      cin >> x >> y;
      unite(x,y);
    }
    if(d==1){
      cin >> x >> y;
      if(is_same_set(x,y)){
        cout << 1 << endl;
      }else{
        cout << 0 << endl;
      }
    }
  }
}