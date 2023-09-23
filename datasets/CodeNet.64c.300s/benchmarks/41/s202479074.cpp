#include<bits/stdc++.h>
#define H 500005
using namespace std;
int h,A[H];

void maxHeapify(int x){
  int l=x*2,r=x*2+1,lag;
  if(l<=h&&A[l]>A[x])lag=l;
  else lag=x;
  if(r<=h&&A[r]>A[lag])lag=r;
  if(lag!=x){
    swap(A[x],A[lag]);
    maxHeapify(lag);
  }
}

void buildMaxHeap(){
  for(int i=h/2;i>=1;i--)
    maxHeapify(i);
}

int main(){
  cin>>h;
  for(int i=1;i<=h;i++)cin>>A[i];
  buildMaxHeap();
  for(int i=1;i<=h;i++)
    cout<<" "<<A[i];
  cout<<endl;
  return 0;
}