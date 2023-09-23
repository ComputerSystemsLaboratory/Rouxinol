#include<bits/stdc++.h>
using namespace std;
using UL = unsigned int;
using ULL = unsigned long long;
using LL = long long;
#define rep(i,n) for(UL i=0; i<(n); i++)

UL N;
int A[500000];

void maxHeapify(UL i){
 UL l = (i<<1)+1;
 UL r = (i<<1)+2;
 UL largest;
 if(l<N && A[l]>A[i]) largest = l;
 else largest = i;
 if(r<N && A[r]>A[largest]) largest = r;

 if(largest != i){
  swap(A[i],A[largest]);
  maxHeapify(largest);
 }
}

void buildMaxHeap(){ for(UL i=(N-1)/2; i!=~0; i--) maxHeapify(i); }

int main() {
 scanf("%u",&N);
 rep(i,N) scanf("%d",&A[i]);
 buildMaxHeap();
 rep(i,N) printf(" %d",A[i]); printf("\n");
 return 0;
}

