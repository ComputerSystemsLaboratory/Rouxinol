#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX_V = 100;
const ll inf = 100100100100100100;
ll V,D[MAX_V][MAX_V];
bool WarshallFloyd(){//負の閉路があればtrue
  ll i,j,k;
  for(i=0;i<V;i++) D[i][i] = 0;
  for(k=0;k<V;k++){
    for(i=0;i<V;i++){
      for(j=0;j<V;j++){
        if(D[i][k] != inf && D[k][j] != inf){
          D[i][j] = min(D[i][j],D[i][k]+D[k][j]);
        }
      }
    }
  }
  for(i=0;i<V;i++){
    if(D[i][i]<0) return true;
  }
  return false;
}
int main(){
  ll E,i,j,s,t,d;scanf("%lld%lld",&V,&E);
  for(i=0;i<V;i++) fill(D[i],D[i]+V,inf);
  for(i=0;i<E;i++){
    scanf("%lld%lld%lld",&s,&t,&d);
    D[s][t] = d;
  }
  if(WarshallFloyd()) printf("NEGATIVE CYCLE\n");
  else{
    for(i=0;i<V;i++){
      for(j=0;j<V;j++){
        if(D[i][j]==inf) printf("INF");
        else printf("%lld",D[i][j]);
        if(j+1!=V) printf(" ");
      }
      printf("\n");
    }
  }
  return 0;
}
