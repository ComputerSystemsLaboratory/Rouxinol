//・。・b
#include<iostream>
#include<cstring>
using namespace std;
#define INFTY (1<<30)
int h,heap[2000001];

void maxHeapify(int i){
  int l,r,largest;
  l=2*i;
  r=2*i+1;
  //左の子、自分、右の子で値が最大のノードを見る
  if(l<=h && heap[l]>heap[i]) largest=l;
  else largest=i;
  if(r<=h && heap[r]>heap[largest]) largest=r;
  if(largest!=i){
    swap(heap[i],heap[largest]);
    maxHeapify(largest);
  }
}

void increasekey(int i,int key){
  if(key<heap[i]) return;
  heap[i]=key;
  while(i>1 && heap[i/2]<heap[i]){
    swap(heap[i/2],heap[i]);
    i=i/2;
  }
}

void insert(int key){
  h++; 
  heap[h]=-INFTY;
  increasekey(h,key);
}

int extract(){
  int maxv;
  if(h<1) return -INFTY;
  maxv=heap[1];
  heap[1]=heap[h--];
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
      cin>>key;
      insert(key);
    }else cout<<extract()<<endl;
  }
  return 0;
}

