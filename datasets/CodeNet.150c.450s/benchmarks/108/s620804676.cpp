#include<bits/stdc++.h>
using namespace std;
using UL = unsigned int;
using ULL = unsigned long long;
using LL = long long;
#define rep(i,n) for(UL i=0; i<(n); i++)

vector<UL> E[100];
UL D[100];

int main() {
 UL N; scanf("%u",&N);
 rep(i,N){
  UL v; scanf("%u",&v); v--;
  UL c; scanf("%u",&c);
  rep(i,c){
   UL e; scanf("%u",&e); e--;
   E[v].push_back(e);
  }
 }
 rep(i,N) D[i]=~0u;
 queue<UL> Q; Q.push(0); D[0]=0;
 while(Q.size()){
  UL p=Q.front(); Q.pop();
  for(UL e:E[p]){
   if(D[e]!=~0u) continue;
   D[e]=D[p]+1;
   Q.push(e);
  }
 }
 rep(i,N){
  printf("%u ",i+1);
  if(D[i]!=~0) printf("%d\n",D[i]);
  else printf("-1\n");
 }
 return 0;
}

