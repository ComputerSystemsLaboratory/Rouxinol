#include<bits/stdc++.h>
using namespace std;
using UL=unsigned int;
using LL=long long;
using ULL=unsigned long long;
#define rep(i,n) for(UL i=0; i<(n); i++)

struct UF{
 UL N; vector<UL> V;
 void init(UL n){
  N=n; V.resize(N);
  rep(i,N) V[i]=i;
 }
 UL root(UL a){
  if(V[a]==a) return a;
  return V[a]=root(V[a]);
 }
 void unite(UL r,UL s){
  V[root(s)] = root(r);
 }
};

struct Edge{ UL u,v; UL w; };
bool wcmp(const Edge& l, const Edge& r){ return l.w<r.w; }

UL N,M;
Edge J[100000];
UF G;
ULL ans = 0;

int main(){
 scanf("%u%u",&N,&M);
 G.init(N);
 rep(i,M){
  UL u,v,w; scanf("%u%u%u",&u,&v,&w);
  J[i]=Edge{u,v,w};
 }
 sort(J,J+M,wcmp);
 rep(i,M){
  if(G.root(J[i].u)==G.root(J[i].v)) continue;
  G.unite(J[i].u,J[i].v);
  ans+=J[i].w;
 }
 printf("%u\n",ans);
 return 0;
}

