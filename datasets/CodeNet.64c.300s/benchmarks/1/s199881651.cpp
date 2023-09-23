#include<bits/stdc++.h>
using namespace std;
using UL = unsigned int;
using ULL = unsigned long long;
using LL = long long;
#define rep(i,n) for(UL i=0; i<(n); i++)

UL N;
UL A[100000];

UL partition(UL* A,UL p,UL r){
 UL x = A[r];
 UL i = p-1;
 for(UL j=p; j<r; j++)
  if(A[j] <= x){ i++; swap(A[i],A[j]); }
 swap(A[i+1],A[r]);
 return i+1;
}

int main() {
 scanf("%u",&N);
 rep(i,N) scanf("%u",&A[i]);
 UL p=partition(A,0,N-1);
 rep(i,N){
  if(i) printf(" ");
  printf((p==i) ? "[%u]" : "%u", A[i]);
 } printf("\n");
 return 0;
}

