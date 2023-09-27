#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define REPP(i,n) for(int i=1;i<=n;i++)
#define REPR(i,n) for(int i=n;i>=1;i--)
#define IFY 2000000000
#define MAX 500000
#define NIL -1
using namespace std;
int H,A[MAX+1];
void maxheapify(int i){
  int l,r,largest;
  l=2*i;r=2*i+1;
  if(l<=H&&A[l]>A[i]) largest=l;
  else largest=i;
  if(r<=H&&A[r]>A[largest]) largest=r;
  if(largest!=i){
    swap(A[i],A[largest]);
    maxheapify(largest);
  }
}
int main(){
  scanf("%d",&H);
  REPP(i,H) scanf("%d",&A[i]);
  REPR(i,H/2) maxheapify(i);
  REPP(i,H) printf(" %d",A[i]);
  printf("\n");
  return 0;
}