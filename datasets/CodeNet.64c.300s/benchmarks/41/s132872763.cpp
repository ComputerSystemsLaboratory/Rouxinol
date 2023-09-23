#include<bits/stdc++.h>
using namespace std;
#define int long long
int h;
void maxHeapify(int *A,int i){
  int l=i*2+1;
  int r=i*2+2;
  int largest;
  if(l<h&&A[l]>A[i]) largest=l;
  else largest=i;
  if(r<h&&A[r]>A[largest]) largest=r;
  if(largest!=i){
    swap(A[i],A[largest]);
    maxHeapify(A,largest);
  }
}
void buildMaxHeap(int *A){
  for(int i=h/2;i>=0;i--)
    maxHeapify(A,i);
}
signed main(){
  cin>>h;
  int A[h];
  for(int i=0;i<h;i++) cin>>A[i];
  buildMaxHeap(A);
  for(int i=0;i<h;i++) cout<<" "<<A[i];
  cout<<endl;
  return 0;
}