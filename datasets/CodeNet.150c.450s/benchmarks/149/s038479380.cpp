#include<bits/stdc++.h>
using namespace std;
struct Unionfind{
  vector<int> par,sizes;
  Unionfind(int n) : par(n),sizes(n,1){
    for(int i=0;i<n;i++){
      par[i] = i;
    }
  }
  int find(int x){
    if(par[x] == x)return x;
    else{
      return par[x] = find(par[x]);
    }
  }
  void unite(int x,int y){
    x = find(x);
    y = find(y);
    
    if(x == y)return ;
    
    if(sizes[x] < sizes[y])swap(x,y);
    par[y] = x;
    sizes[x] += sizes[y];
  }
  int same(int x, int y){
    return find(x) == find(y);
  }
			 
};
int main(){
  int n,q,com,x,y;
  cin >> n >> q;
  Unionfind uni(n);
  for(int i=0;i<q;i++){
    cin >> com >> x >> y;
    if(com == 1){
      cout << uni.same(x,y) << endl;
    }else{
      uni.unite(x,y);
    }
  }
}