#include<bits/stdc++.h>
#define H 2000005
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

void heapIncreaseKey(int x,int key){
  A[x]=key;
  while(x>1&&A[x/2]<A[x]){
    swap(A[x],A[x/2]);
    x=x/2;
  }
}

void insert(int key){
  A[++h]=-1;
  heapIncreaseKey(h,key);
}

int extractMax(){
  int res=A[1];
  A[1]=A[h--];
  maxHeapify(1);
  return res;
}

int main(){
  string s;
  int key;
  while(1){
    cin>>s;
    if(s=="end")break;
    if(s=="extract")cout<<extractMax()<<endl;
    if(s=="insert"){
      cin>>key;
      insert(key);
    }
  }
  return 0;
}