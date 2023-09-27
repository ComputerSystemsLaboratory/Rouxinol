#include<bits/stdc++.h>

using namespace std;

int find(vector<int> &C, int x){ return (C[x] == x) ? x : find(C, C[x]);}
bool same(vector<int> &C, int x, int y){ return find(C, x) == find(C, y);}
void merge(vector<int> &C, int x, int y){ C[find(C,x)] = find(C, y);}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifdef Larra
  freopen("in","r",stdin);
  freopen("out","w",stdout);
  #endif
  int n, q;
  cin>>n>>q;
  vector<int> C(n);
  for(int i = 0; i < n; i++) C[i] = i;
  for(int i = 0; i < q; i++){
    int com, x, y;
    cin>>com>>x>>y;
    if(com)
      cout<<same(C, x,y)<<"\n";
    else
      merge(C, x,y);
  }
}