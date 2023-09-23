#include<iostream>
#define ll long long
using namespace std;

int H;
ll A[500001];

int parent(int i){return i/2;}

int left(int i){return 2*i;}

int right(int i){return 2*i+1;}

void maxHeapify(int i){
  int l,r;

  l=left(i);
  r=right(i);
  
  int largest=i;
 
  if(0<l&&l<=H){
  if(l<=H&&A[l]>A[i]) largest=l;
  else largest=i;
  }
 
  if(0<r&&r<=H)if(r<=H&&A[r]>A[largest])largest=r;
 
  if(largest!=i){
    swap(A[i],A[largest]);
    maxHeapify(largest); 
  }

}

void buildMaxHeap(){

  for(int i=H/2;i>0;i--) maxHeapify(i);

}

void solve(){
  buildMaxHeap();
  for(int i=1;i<=H;i++) cout<<" "<<A[i];
  cout<<endl;
}

int main(){

  cin>>H;
 
 for(int i=1;i<=H;i++) cin>>A[i];
 // for(int i=1;i<=H;i++) cout<<A[i]<<endl;
 solve();
  return 0;
}