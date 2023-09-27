#include <bits/stdc++.h>
using namespace std;
using UL=unsigned int;
using LL=long long;
using ULL=unsigned long long;
#define rep(i,n) for(UL i=0; i<(n); i++)

struct RSQ{
 UL N;
 vector<UL> V;
 void init(UL n){
  N=1; while(N<n) N<<=1;
  V.resize(N*2-1);
 }
 void add(UL p){
  UL i=p+N-1;
  V[i]++;
  while(i){
   i=(i-1)>>1;
   V[i]++;
  }
 }
 UL query(UL l,UL r,UL a=~0u,UL b=~0u,UL i=~0u){
  if(!~i){ a=i=0; b=N; }
  if(r<=a || b<=l) return 0;
  if(l<=a && b<=r) return V[i];
  UL q1=query(l,r,a,(a+b)>>1,(i<<1)+1);
  UL q2=query(l,r,(a+b)>>1,b,(i<<1)+2);
  return q1+q2;
 }
} Q;

UL N;
pair<UL,UL> A[200000];
UL xA[200000];
ULL ans;

int main(){
 scanf("%u",&N);
 rep(i,N) {
  UL a; scanf("%u",&a);
  A[i]={a,i};
 }
 Q.init(N);
 sort(A,A+N);
 rep(i,N) xA[A[i].second] = i;
 ans=0;
 rep(i,N){
  ans+=Q.query(xA[i],N);
  Q.add(xA[i]);
 }
 cout<<ans<<endl;
}
