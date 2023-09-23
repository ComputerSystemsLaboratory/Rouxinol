#include<bits/stdc++.h>
using namespace std;
int h,a[500001];
void maxHeapify(int );
void buildMaxHeap();

int main(){
  cin>>h;
  for(int i=0;i<h;i++)cin>>a[i];
  buildMaxHeap();
  for(int i=0;i<h;i++)cout<<" "<<a[i];
  cout<<endl;
  return 0;
}
void maxHeapify(int i){
  int l=i*2+1,r=i*2+2,la;
  if(l<=h && a[l]>a[i])la=l;
  else la=i;
  if(r<=h && a[r]>a[la])la=r;
  if(la!=i){
    swap(a[i],a[la]);
    maxHeapify(la);
  }
}
 
void buildMaxHeap(){
  for(int i=h/2-1;i>=0;i--)maxHeapify(i);
}

