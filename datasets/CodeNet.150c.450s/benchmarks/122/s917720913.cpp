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
void changeccc(int i,int k){
  int tmp=0;
  if(k<A[i].key){
    return;
  }
  A[i].key=k;
  while(i>1&&A[i/2].key<A[i].key){
    tmp=A[i].key;
    A[i].key=A[i/2].key;
    A[i/2].key=tmp;
    i=i/2;
  }
}

void insert(int k){
  H++;
  A[H].key=-INT_MAX;
  changeccc(H,k);
}

int heaphigh(){
  int maxx;
  if(H<1)return -INT_MAX;
  maxx=A[1].key;
  A[1].key=A[H--].key;
  maxheap(1);
  return maxx;
}
int main(){
  char c[9];
  int k;
  while(1){
    cin>>c;
    if(strcmp(c,"end")==0)break;
    if(strcmp(c,"insert")==0){
      cin>>k;
      insert(k);
    }
    else {
      cout<<heaphigh()<<endl;
    }
  }
  return 0;
}

