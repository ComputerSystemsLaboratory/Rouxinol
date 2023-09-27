#include<iostream>
#include<cmath>
#include<vector>
#include<string>
typedef unsigned long long ull;
#define rep(i,a) for(int i=0;i<a;i++)
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
const double eps = 1e-10;
const double pi = acos(-1);
const double inf = (int)1e8;

struct Union_Find{
  vector<int> par,rank;
  
  void init(int n){
    par.resize(n); rank.resize(n);
    for(int i = 0 ; i < n ; i ++){
      par[i] = i;
      rank[i] = 0;
    }
  }
  
  int find(int s){
    if(par[s] == s)return s;
    return par[s] = find(par[s]);
  }

  void unite(int x,int y){
    int a = find(x),  b = find(y);
    if(a==b)return ;
    if(rank[a] < rank[b]) par[a] = b;
    else{
      par[a] = b;
      if(rank[a] == rank[b]){
	rank[b]++;
      }
    }
  }
  bool same(int x,int y){
    return find(x)==find(y);
  }

  bool size(int x,int y){
    return par.size();
  }
};

void solve(){
  int N,Q;
  cin>>N>>Q;
  Union_Find uf;
  uf.init(N);
  rep(i,Q){
    int ord,x,y;
    cin>>ord>>x>>y;
    if(ord){
      cout<<uf.same(x,y)<<endl;
    }else{
      uf.unite(x,y);
    }
  }
}

int main(void){
  solve();
  return 0;
}