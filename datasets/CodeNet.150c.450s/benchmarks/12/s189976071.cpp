#include<bits/stdc++.h>
using namespace std;
using UL = unsigned int;
using ULL = unsigned long long;
using LL = long long;
#define rep(i,n) for(UL i=0; i<(n); i++)

UL N;
int A[250];

int main() {
 scanf("%u",&N);
 rep(i,N) scanf("%d",&A[i]);
 rep(i,N){
  printf("node %u: key = %d, ",i+1,A[i]);
  if(i!=0) printf("parent key = %d, ",A[(i-1)>>1]);
  if((i<<1)+1<N) printf("left key = %d, ",A[(i<<1)+1]);
  if((i<<1)+2<N) printf("right key = %d, ",A[(i<<1)+2]);
  printf("\n");
 }
 return 0;
}

