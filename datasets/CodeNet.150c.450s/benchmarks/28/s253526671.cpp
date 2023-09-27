#include<bits/stdc++.h>
using namespace std;
using UL = unsigned int;
using ULL = unsigned long long;
using LL = long long;
#define rep(i,n) for(UL i=0; i<(n); i++)

UL N,K;
UL W[100000];

bool Proc(UL P){
 UL ans=0;
 UL crr=0;
 rep(i,N){
  crr+=W[i];
  if(W[i]>P) return false;
  if(crr>P){crr=W[i]; ans++;}
 }
 return ans+1<=K;
}

int main() {
 scanf("%u%u",&N,&K);
 rep(i,N) scanf("%u",&W[i]);
 UL l=0, r=1100000000;
 while(l+1<r){ UL m=(l+r)>>1;
  if(Proc(m)) r=m;
  else l=m;
 }
 printf("%u\n",r);
 return 0;
}

