#include<bits/stdc++.h>
using namespace std;
struct Node{
  int key;
  int id,parent,left,right;
};


Node A[20000000];
int H;

void heap(int H){
  for(int i=1;i<=H;i++){
    if(i==1){
      A[i].left=A[2*i].key;
      A[i].right=A[2*i+1].key;
    }
    else {
      A[i].parent=A[i/2].key;
      A[i].left=A[2*i].key;
      A[i].right=A[2*i+1].key;
    }
  }
}
void maxheap(int i){
  int l=0,r=0;
  int lag;
  int tmp;
  l=2*i;
  r=2*i+1;
  if(l<=H && A[l].key>A[i].key){
    lag=l;
  }
  else {
    lag=i;
  }
  if(r<=H&&A[r].key>A[lag].key){
    lag=r;
  }
  if(lag!=i){
    tmp=A[i].key;
    A[i].key=A[lag].key;
    A[lag].key=tmp;
    maxheap(lag);
  }
  
}


int main(){
  cin>>H;
  for(int i=1;i<=H;i++){
    cin>>A[i].key;
    A[i].id=i;
  }
  heap(H);
  for(int i=H/2;i>=1;i--){
    maxheap(i);
  }
  for(int i=1;i<=H;i++){
    cout<<" "<<A[i].key;
  }
  cout<<endl;
  return 0;
}

