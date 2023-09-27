#include<iostream>
#include<cstdio>
#include<algorithm>
#define INFTY (1>>30)
using namespace std;
int H,heap[2000001];
void maxHeapify(int i){
  int l,r,largest;
  l=i*2;
  r=i*2+1;                     

  if(l<=H&&heap[l]>heap[i]) largest=l;
  else largest=i;
  if(r<=H&&heap[r]>heap[largest]) largest=r;

  if(largest!=i){
    swap(heap[i],heap[largest]);
    maxHeapify(largest);
  }
}
void increasekey(int i,int key){
  if(key<heap[i]) return;
  heap[i]=key;
  while(i>1&&heap[i/2]<heap[i]){
    swap(heap[i/2],heap[i]);
    i=i/2;
  }
}
void insert(int key){
  H++;
  heap[H]=-INFTY;
  increasekey(H,key);
}
int extract(){
  int maxv;
  if(H<1) return -INFTY;
  maxv=heap[1];
  heap[1]=heap[H--];
  maxHeapify(1);
  return maxv;
}
int main(){
  int key;
  string com;
  while(1){
    cin>>com;
    if(com=="end") break;
    if(com=="insert"){
      scanf("%d",&key);
      insert(key);
    }else printf("%d\n",extract());
  }
  return 0;
}

