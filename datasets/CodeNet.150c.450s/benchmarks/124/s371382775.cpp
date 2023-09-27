#include<bits/stdc++.h>
using namespace std;
using UL = unsigned int;
using ULL = unsigned long long;
using LL = long long;
#define rep(i,n) for(UL i=0; i<(n); i++)

template<class E>
using nega_queue=priority_queue<E,vector<E>,greater<E>>;

UL N;
ULL D[100];
vector<pair<UL,ULL>> E[100];

int main() {
 scanf("%u",&N);
 rep(i,N){
  UL u,k; scanf("%u%u",&u,&k);
  rep(j,k){
   UL v,c; scanf("%u%u",&v,&c);
   E[u].push_back({v,c});
  }
 }
 rep(i,N) D[i]=~0u;
 nega_queue<pair<ULL,UL>> G;
 G.push({0,0});
 int ans=0;
 while(G.size()){
  ULL d=G.top().first;
  UL p=G.top().second;
  G.pop();
  if(D[p]!=~0u) continue;
  D[p]=d;
  for(auto e:E[p]) G.push({d+e.second,e.first});
 }
 rep(i,N) printf("%u %llu\n",i,D[i]);
 return 0;
}

