#include<bits/stdc++.h>
using namespace std;
#define ll long long 

struct union_find{
      vector<int> par;
      vector<int> rank;
      union_find(int sz){
            par.resize(sz);
            rank.assign(sz,0);
            for(int i=0;i < sz;i++) par[i]=i;
      }
      int find(int a){
            if(par[a]==a) return a;
            else return par[a] = find(par[a]);
      }
      void unite(int a,int b){
            int root_a,root_b;
            root_a = find(a),root_b = find(b);
            if(rank[root_a]>rank[root_b]){
                  par[root_b] = root_a;
            }else if(rank[root_a]<rank[root_b]){
                  par[root_a] = root_b;
            }else{
                  rank[root_a]++;
                  par[root_b] = root_a;
            }
      }
      bool same(int a,int b){return find(a)==find(b);}
};

int main(){ 
      int n,q; cin >>n>>q;
      union_find tree(n);
      for(int i=0;i<q;i++){
            int com,x,y; cin >>com>>x>>y;
            if(com == 0){
                  tree.unite(x,y);
            }else{
                  int ans = tree.same(x,y);
                  cout << ans << endl;
            }
      }
}
