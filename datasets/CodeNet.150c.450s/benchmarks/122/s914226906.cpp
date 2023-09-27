#include<bits/stdc++.h>
using namespace std;
using UL = unsigned int;
using ULL = unsigned long long;
using LL = long long;
#define rep(i,n) for(UL i=0; i<(n); i++)

UL N;
int A[2000000];

void maxHeapify(UL i){
 UL l = (i<<1)+1;
 UL r = (i<<1)+2;
 UL largest=i;
 if(l<N && A[l]>A[largest]) largest = l;
 if(r<N && A[r]>A[largest]) largest = r;

 if(largest != i){
  swap(A[i],A[largest]);
  maxHeapify(largest);
 }
}

void maxHeapify2(UL i){
 if(i==0) return;
 UL p = (i-1)>>1;
 UL least=i;
 if(A[p]<A[least]) least = p;

 if(least != i){
  swap(A[i],A[least]);
  maxHeapify2(least);
 }
}

void insert(int v){
 A[N]=v; N++;
 maxHeapify2(N-1);
}

void pop(){
 swap(A[0],A[N-1]); N--;
 maxHeapify(0);
}

void buildMaxHeap(){ for(UL i=(N-1)/2; i!=~0; i--) maxHeapify(i); }

int main() {
 N=0;
 char strbuf[10];
 while(true){
  scanf("%s",strbuf);
  string S{strbuf};
  if(S=="insert"){
   int v; scanf("%d",&v);
   insert(v);
  }
  else if(S=="extract"){
   printf("%d\n",A[0]);
   pop();
  }
  else break;
 }
 return 0;
}

