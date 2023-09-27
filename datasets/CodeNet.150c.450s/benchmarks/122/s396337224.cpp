#include<bits/stdc++.h>
using namespace std;

int A[2000001],H;

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

void heapIncreaseKey(int i,int key){
  if(key<A[i]) return ;

  A[i]=key;
  while(i>1&&A[parent(i)]<A[i]){
    swap(A[i],A[parent(i)]);
    i=parent(i); 
  }
}

void insert(int key){
  A[++H]=-INT_MAX;
  heapIncreaseKey(H,key);
}

int heapExtractMax(){
  if(H<1) return -INT_MAX;
  int max=A[1];
  A[1]=A[H];
  H--;
  maxHeapify(1);
  
  return max;
}

int main(){
  string com;
  
  while(1){
    int k;
    cin>>com;
    if(com[0]=='e'&&com[1]=='n') break;
    else if(com[0]=='i'){
      cin>>k;
      insert(k);
    }else if(com[0]=='e'&&com[1]=='x')cout<<heapExtractMax()<<endl;
  }
 
  return 0;
}