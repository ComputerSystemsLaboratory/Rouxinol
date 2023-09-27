#include <bits/stdc++.h>
using namespace std;
using UL=unsigned int;
using LL=long long;
using ULL=unsigned long long;
#define rep(i,n) for(UL i=0; i<(n); i++)

UL N;
UL C[10001];

int main(){
 scanf("%u",&N);
 rep(i,N) {
  UL a; scanf("%u",&a);
  C[a]++;
 }
 bool sp=false;
 rep(i,10001){
  rep(t,C[i]) {
   if(sp) printf(" ");
   sp=true;
   printf("%u",i);
  }
 }
 printf("\n");
}
