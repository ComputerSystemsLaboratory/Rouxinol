/**
 * 最小全域木
 * https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_2_A
 * プリム法
 * */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define INF 1LL<<60 //使いやすい無限(ll)
#define debug2(x,y) cout<<"("<<#x<<","<<#y<<") = ("<<(x)<<","<<(y)<<")\n"

using Node = long long; //頂点
using Weight = long long; //重み
using Edge = pair<Weight, Node>; //辺={重み, 行き先}
using Graph = vector<vector<Edge>>; //隣接リスト

ll V,E;

Graph G;
vector<Edge> Tree;
vector<bool> isTree;

void prim(Node start){
  //Weightの小さいものから取り出す
  priority_queue<Edge, vector<Edge>,greater<Edge> >que;
  isTree.assign(V, false);
  isTree[start] = true;

  for(Edge n: G[start]){
    que.push(n);
  }

  while(Tree.size() != V-1){//木にV-1本の辺が入れば木が完成
    auto now = que.top(); que.pop();
    Node Nnow = now.second;
    Weight Wnow = now.first;
    if(isTree[Nnow])continue;

    Tree.push_back(now); //木に辺を入れる
    isTree[Nnow] = true; //行き先の頂点を木に含める
    //debug2(Wnow, Nnow);

    for(auto n: G[Nnow]){
      if(isTree[n.second])continue;
      que.push(n); //新しい頂点からの辺をキューに入れる
    }

    //continue: 木へ向かう辺の処理を避けている
  }
}

int main(){
  cin>>V>>E;
  G.resize(V);

  for(int i=0; i<E; i++){
    ll s,t,d;
    cin>>s>>t>>d;
    G[s].push_back({d,t});
    G[t].push_back({d,s});//無効グラフで入力
  }

  prim(0);

  ll ans = 0;
  for(auto x: Tree){
    ans += x.first;
  }
  cout<<ans<<endl;
}
