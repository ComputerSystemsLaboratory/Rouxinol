#include<bits/stdc++.h>
using namespace std;
struct unionFind{
  vector<int>par;

  unionFind(int N):par(N){
    for(int i=0;i<N;i++)par[i] = i;
  }

  int root(int x){
    if(par[x] == x)return x;
    else return par[x] = root(par[x]);
  }

  void unite(int x,int y){
    int rx = root(x);
    int ry = root(y);
    if(rx == ry)return;
    else par[rx]=ry;
  }

  bool same(int x,int y){
    return root(x)==root(y);
  }
};

int main(){
  int v,e;
  cin >> v >> e;
  int s,t,w;
  vector<pair<int,pair<int,int> > >path(e);
  int i;
  for(i=0;i<e;i++){
    cin >> s >> t >> w;
    path[i] = make_pair(w,make_pair(s,t));
  }
  unionFind unif = unionFind(v);
  sort(path.begin(),path.end());

  long length = 0;
  for(i=0;i<e;i++){
    int x = path[i].second.first;
    int y = path[i].second.second;
    if(!unif.same(x,y)){
      unif.unite(x,y);
      length += path[i].first;
    }
  }
  cout << length << endl;

}

